### Módulo 2 da Oficina de Programação Competitiva para Calouros
#### Tópicos Estudados
- Escrita otimizada 
- Loops/Laços

#### Escrita Otimizada
- Podemos declarar variáveis dentro das condicionais e loops;
    ```cpp
     for (int i = 0; i < n; i++)
     ```
- É recomendado que se encurte os nomes das variáveis (letras únicas ou nomes abreviados);
  - Exemplo: invés de declarar a várial "número" assim:
     ```cpp
      int numero;
      ```
  - Experimente declarar assim:
     ```cpp
      int n;
      ```
  -**OBS:** válido apenas para maratonas, no dia-a-dia o ideal é você declarar a variável com um nome fácil de ser identificada a sua função no código
- Utilizar ++i ou --i para substituir i = i+1 ou i = i-1 (respectivamente);
   ```cpp
    for(int i=0;i<n;i++){
    scanf("%d", &a);
    soma = soma+a;
    if(soma<=1000000) dias++;
	}
     ```
- Uso de cin e cout
  - Utilizamos o *cin* para substituir o *scanf* e o *cout* para substituir o *printf* (válido para c++)
  - Exemplo com *Scanf* e *Printf*:
    ```cpp
      scanf("%d",&x); //recebe o valor de x
      scanf("%d", &n); //recebe o valor de n
      printf(x\n); // imprime x e pula uma linha (\n)
      ```
  - Exemplo com *cin* e *cout*:
     ```cpp
      cin >> x; // recebe o valor de x
      cin >> n; // recebe o valor de n
      cout << x << endl; // imprime x e pula uma linha (endl)
      ```
#### Loops/Laços
- Loops são estruturas de repetição na programação, ou seja, são usadas quando você precisa que seu programa repita várias vezes algum comando.
- Loops se baseiam em verificar condições e executar os blocos de código que estão dentro do loop. O que pode mudar entre um tipo de loop e outro é a maneira como essas condições são verificadas.
- Loop *for*:
  - **Inicialização:** Define uma variável que será usada como contador.
  - **Condição:** O laço continuará a executar enquanto essa condição for verdadeira.
  - **Incremento:** A cada iteração, essa parte altera o valor da variável do contador.
  - Exemplo para contar de 1 até 5 usando laço *for*:
    ```cpp   
    int main() {
      for (int i = 1; i <= 5; i++) {
          cout << i << endl;
        }
      return 0;
    }
    ```
- Loop *while*:
  - Um laço de repetição *while* executa um bloco de código enquanto uma condição for verdadeira. Ao contrário do *for*, você precisa inicializar a variável e incrementá-la manualmente dentro do laço.
  - Exemplo para contar de 1 até 5 usando laço *while*:
    ```cpp
    int main() {
      int i = 1; 
      while (i <= 5) {
          cout << i << endl;
          i++; 
      }
      return 0;
    }
    ```
- Loop *do while*:
  - Um laço de repetição *do while* executa um bloco de código pelo menos uma vez e, em seguida, continua a executar enquanto uma condição for verdadeira. Isso significa que a condição é verificada após a execução do bloco de código, garantindo que o bloco seja executado pelo menos uma vez.
  - Exemplo para contar de 1 até 5 usando laço *do while*:
    ```cpp
    int main() {
      int i = 1;
      do {
          cout << i << endl;
          i++;
      } while (i <= 5);
      return 0;
    }
    ```
#### Problemas abordados na oficina
[Prêmio do Milhão](https://olimpiada.ic.unicamp.br/pratique/pj/2015/f1/premio/)<br>
[Robin hood e o grande carvalho](https://codeforces.com/problemset/problem/2014/B)<br>
[Plano de Internet](https://olimpiada.ic.unicamp.br/pratique/pj/2021/f1/plano/)<br>
[Guarda Costeira](https://judge.beecrowd.com/pt/problems/view/1247)<br>
[Número de Envelopes](https://olimpiada.ic.unicamp.br/pratique/pj/2009/f1/envelopes1/)<br>


