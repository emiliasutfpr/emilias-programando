#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, n, c = 0; //inicia um c que vai armazenar a sobra mensal
    cin >> x; // recebe o valor de x
    cin >> n; // recebe o valor de n

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp; // recebe o valor de cada entrada dentro do loop
        c += x - temp; // atualiza o valor de c com a sobra mensal
    }

    cout << c + x << endl; // imprime o resultado
    return 0;
}
