#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, op = 0; //numero de elementos na lista e contador de operações iniciado em 0
    cin >> N;
    vector<int> L(N); //vetor que armazena os elementos da lista
    for (int i = 0; i < N; i++) cin >> L[i]; //faz a leitura dos elementos

    int left = 0, right = N - 1; //ponteiro para o inicio e final da lista 

    //enquanto os ponteiros nao se cruzarem 
    while (left < right) {
        if (L[left] == L[right]) { //se os elementos forem iguais, move o ponteiro para o canto
            left++;
            right--;
        } else if (L[left] < L[right]) { // se o elemento à esquerda é menor, soma-o ao próximo elemento e move o ponteiro
            L[left + 1] += L[left];
            left++;
            op++; //incrementa o contador
        } else { //se o elemento à direita é menor, soma-o ao elemento à esquerda e move o ponteiro
            L[right - 1] += L[right];
            right--;
            op++; //incrementa o contador
        } 
    }

    cout << op << endl; //exibe o numero min de op necessárias
    return 0;
}
