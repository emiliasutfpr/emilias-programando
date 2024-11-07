#include <stdio.h>

int main() {
    int N, operations = 0;
    scanf("%d", &N); // Lê o número de elementos da lista

    int L[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &L[i]); // Lê cada elemento da lista
    }

    int left = 0, right = N - 1; // Inicializa os ponteiros

    while (left < right) {
        if (L[left] == L[right]) {
            left++; // Move para a próxima posição à direita
            right--; // Move para a próxima posição à esquerda
        } else if (L[left] < L[right]) {
            L[left + 1] += L[left]; // Soma o valor de L[left] ao próximo elemento
            left++; // Move o ponteiro da esquerda
            operations++; // Incrementa a contagem de operações
        } else {
            L[right - 1] += L[right]; // Soma o valor de L[right] ao elemento anterior
            right--; // Move o ponteiro da direita
            operations++; // Incrementa a contagem de operações
        }
    }

    printf("%d\n", operations); // Imprime o número mínimo de operações
    return 0;
}
