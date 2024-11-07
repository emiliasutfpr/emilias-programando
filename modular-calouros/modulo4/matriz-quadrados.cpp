#include<bits/stdc++.h>

using namespace std;

using ull = unsigned long long;

int main() {
    int n, ordem, numeroMatriz = 4;
    cin >> n; // número de matrizes

    for (int k = 0; k < n; k++) {
        cin >> ordem;
        vector<vector<ull>> matriz(ordem, vector<ull>(ordem));

        // ler matriz e calcular quadrados
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                cin >> matriz[i][j];
                matriz[i][j] *= matriz[i][j]; // multiplicando por ele mesmo
            }
        }

        // saída da matriz de quadrados
        cout << "Quadrado da matriz #" << numeroMatriz << ":\n";
        for (int i = 0; i < ordem; i++) {
            for (int j = 0; j < ordem; j++) {
                // descobrindo o maior número na coluna
                ull maior = 0;
                for (int w = 0; w < ordem; w++) {
                    if (maior < matriz[w][j]) {
                        maior = matriz[w][j];
                    }
                }

                // calcular a quantidade de dígitos do maior número
                int len = to_string(maior).length();

                // printando o elemento
                cout << (j == 0 ? "" : " ") << setw(len) << matriz[i][j];
            }
            cout << "\n";
        }

        if (k + 1 != n) {
            cout << "\n";
        }
        numeroMatriz++;
    }
    return 0;
}
