### Módulo 5 da Oficina de Programação Competitiva para Calouros
#### Tópicos Estudados
- Iteração
- Recursão

#### Iteração
- **Iteração** é o processo de repetir uma sequência de instruções até que uma condição seja atendida. Em C++, usamos estruturas como `for`, `while` e `do-while` para fazer loops, repetindo blocos de código várias vezes.

    - Exemplo de uso do `for` para iterar sobre um conjunto de valores:
        ```cpp
        #include <bits/stdc++.h>
        using namespace std;
        
        int main() {
            for (int i = 0; i < 5; i++) {
                cout << "Contagem: " << i << endl;
            }
            return 0;
        }
        ```
    - Neste exemplo, o `for` repete o bloco de código 5 vezes, imprimindo o valor de `i` a cada iteração.

- Exemplo de uso do `while` para somar valores até que o número digitado seja zero:
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;
    
    int main() {
        int numero, soma = 0;
        cout << "Digite um número (0 para sair): ";
        cin >> numero;
        
        while (numero != 0) {
            soma += numero;
            cout << "Digite um número (0 para sair): ";
            cin >> numero;
        }
        
        cout << "Soma total: " << soma << endl;
        return 0;
    }
    ```
    - Aqui, o `while` repete o bloco enquanto o valor de `numero` não for 0. A cada iteração, o número é adicionado à variável `soma`.

#### Recursão
- **Recursão** é o conceito de uma função que chama a si mesma para resolver um problema menor até que uma condição base seja alcançada. Ela é útil para resolver problemas que podem ser divididos em subproblemas menores.

- Exemplo de uma função recursiva que calcula o fatorial de um número:
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;
    
    int fatorial(int n) {
        if (n <= 1) return 1; //condição base
        return n * fatorial(n - 1); //chamada recursiva
    }
    
    int main() {
        int numero = 5;
        cout << "Fatorial de " << numero << " é " << fatorial(numero) << endl;
        return 0;
    }
    ```
    - A função `fatorial` chama a si mesma com o valor `n - 1`, até que `n` seja igual a 1. Esse é um exemplo clássico de recursão.

- Exemplo de uma função recursiva para calcular o n-ésimo número de Fibonacci:
    ```cpp
    #include <bits/stdc++.h>
    using namespace std;
    
    int fibonacci(int n) {
        if (n <= 1) return n; //condição base
        return fibonacci(n - 1) + fibonacci(n - 2); //chamadas recursivas
    }
    
    int main() {
        int numero = 5;
        cout << "Fibonacci de " << numero << " é " << fibonacci(numero) << endl;
        return 0;
    }
    ```
    - A função `fibonacci` chama a si mesma duas vezes, cada vez reduzindo o valor de `n` até que `n` seja 0 ou 1.

#### Problemas abordados na oficina
[Guess the Cycle Size](https://codeforces.com/problemset/problem/1729/E)<br>
[Fibonacci, Quantas Chamadas?](https://judge.beecrowd.com/pt/problems/view/1029)<br>
[AquaMoon and Stolen String](https://codeforces.com/contest/1546/problem/B)<br>
[Lucky Tickets](https://codeforces.com/problemset/problem/1096/G)
