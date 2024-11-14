### Módulo 4 da Oficina de Programação Competitiva para Calouros
#### Tópicos Estudados
- Matrizes

#### Matrizes
- Matrizes são arrays bidimensionais, usadas para armazenar dados em linhas e colunas. Elas são muito úteis em problemas que envolvem tabelas, gráficos ou outras representações bidimensionais de dados.

- **Declaração e uso básico**:
    ```cpp
    #include <iostream>
    
    int main() {
        int matriz[3][3] = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
        
        return 0;
    }
    ```
    - Neste exemplo, declaramos uma matriz `matriz` de 3x3 e inicializamos com valores. Utilizamos dois loops `for` para percorrer as linhas e colunas e imprimir cada elemento.

- **Operações com matrizes**:
    - Podemos preencher uma matriz com valores fornecidos pelo usuário:
        ```cpp
        int n = 3;
        int matriz[n][n];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matriz[i][j];
            }
        }
        ```
    - Aqui, a matriz é preenchida com valores lidos da entrada padrão.

- **Exemplo de soma de duas matrizes**:
    - Em problemas competitivos, a soma de matrizes é uma operação comum. O exemplo abaixo mostra como somar duas matrizes de mesma dimensão.
        ```cpp
        int matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int matriz2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
        int soma[3][3];
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                soma[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }
        
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << soma[i][j] << " ";
            }
            cout << endl;
        }
        ```
    - Neste código, `matriz1` e `matriz2` são somadas elemento a elemento, e o resultado é armazenado na matriz `soma`.

#### Problemas abordados na oficina
[Matriz de Quadrados](https://judge.beecrowd.com/pt/problems/view/1578)<br>
[Iu-Di-Oh](https://judge.beecrowd.com/pt/problems/view/2542)<br>
[Sudoku](https://judge.beecrowd.com/pt/problems/view/1383)<br>
[Comunicação Espacial](https://judge.beecrowd.com/pt/problems/view/3162)<br>
[PãodeQuejoSweeper](https://judge.beecrowd.com/pt/problems/view/2552)
