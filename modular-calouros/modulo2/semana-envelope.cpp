#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;  // número de tipos de balas
    int  mine = 1001;  // inicializa com um valor maior que o máximo possível de rótulos

    for (int i = 0; i < N; i++) {
        int r; //rotulos
        cin >> r;  //quantidade de rótulos do tipo i
        mine = min(mine, r);  // atualiza o menor valor de rótulos
    }

    // O menor valor encontrado é o número máximo de envelopes que Aldo pode enviar
    cout << mine << endl;

    return 0;
}
