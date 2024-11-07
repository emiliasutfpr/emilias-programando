### Módulo 2 da Oficina de Programação Competitiva para Calouros
#### Tópicos Estudados
- String
- Vetor

#### String
- Strings são cadeias de caracteres que podem ser usadas para armazenar e manipular texto em C++. Em C++, podemos usar a classe `string` da biblioteca padrão para facilitar o trabalho com texto.

- **Declaração e uso básico**:
    ```cpp
    #include <iostream>
    #include <string>
    
    int main() {
        string nome = "Competitiva";
        cout << "Nome: " << nome << endl;
        return 0;
    }
    ```
    - Neste exemplo, declaramos uma variável `nome` do tipo `string` e atribuímos a ela o valor "Competitiva". Usamos `cout` para imprimir a string.

- **Operações comuns**:
    - Podemos acessar caracteres individuais usando índices:
        ```cpp
        string palavra = "Oficina";
        cout << "Primeira letra: " << palavra[0] << endl;
        ```

    - Concatenar strings usando o operador `+`:
        ```cpp
        string saudacao = "Olá, ";
        string nome = "Calouros";
        string mensagem = saudacao + nome;
        cout << mensagem << endl;
        ```

#### Vetor
- Vetores (ou arrays) são usados para armazenar uma sequência de elementos do mesmo tipo. Em C++, podemos declarar vetores de tamanho fixo ou usar a biblioteca `vector` para um tamanho dinâmico.

- **Declaração e uso básico com tamanho fixo**:
    ```cpp
    #include <iostream>
    
    int main() {
        int numeros[5] = {1, 2, 3, 4, 5};
        for (int i = 0; i < 5; i++) {
            cout << numeros[i] << " ";
        }
        return 0;
    }
    ```
    - Aqui, declaramos um vetor `numeros` de inteiros com tamanho 5 e o inicializamos com valores. Em seguida, usamos um loop `for` para imprimir cada elemento.

- **Uso de `vector` da biblioteca padrão**:
    ```cpp
    #include <iostream>
    #include <vector>
    
    int main() {
        vector<int> numeros = {1, 2, 3, 4, 5};
        numeros.push_back(6);  // Adiciona o número 6 ao final do vetor
        for (int num : numeros) {
            cout << num << " ";
        }
        return 0;
    }
    ```
    - Utilizando a biblioteca `vector`, podemos criar um vetor dinâmico e usar o método `push_back` para adicionar elementos ao final.

#### Problemas abordados na oficina
**Vetor:**</br>
[Plano de Estacionamento](https://olimpiada.ic.unicamp.br/pratique/pj/2021/f3/plano/)<br>
[Lista Palíndroma](https://olimpiada.ic.unicamp.br/pratique/ps/2021/f2/lista/)<br>
[Música para Todos](https://olimpiada.ic.unicamp.br/pratique/ps/2020/f1/musica/)<br>

**String:**</br>
[Sentença Dançante - 1234](https://judge.beecrowd.com/pt/problems/view/1234)<br>
[Frase Completa - 1551](https://judge.beecrowd.com/pt/problems/view/1551)<br>
[A Biblioteca do Senhor Severino - 2137](https://judge.beecrowd.com/pt/problems/view/2137)
