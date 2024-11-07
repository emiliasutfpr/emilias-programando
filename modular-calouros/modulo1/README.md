### Módulo 1 da Oficina de Programação Competitiva para Calouros
#### Tópicos Estudados
- Bibliotecas e importações melhoradas
- Condição

#### Bibliotecas e importações melhoradas
Bibliotecas são arquivos que organizam um conjunto de funções e recursos pré-definidos para serem usados em aplicações. 

Ao usar uma biblioteca, o programador tem acesso a um conjunto de funções que já foram escritas e testadas, sem precisar criar algo do zero.

Para as competições, precisamos utilizar uma biblioteca especial, que inclui todas as bibliotecas padrão para C++. Para usá-la, digitamos: 
**#include <bits/stdc++.h>**
> **OBS:** Essa não é uma biblioteca utilizada no dia-a-dia do programador ou em projetos!

#### Condição
- Digamos que temos uma caixinha chamada **n** que pode guardar um número inteiro;
- Em seguida, pedimos para o usuário inserir um número dentro dessa caixa;
- A caixa registra **n** como sendo número e o analisa;
- Se **n** for divisível por 2, a caixa responderá: *“Este número é par”*
- Se **n** não for divisível por 2, a caixa responderá: *“Este número é impar”*
  ```cpp
  #include <bits/stdc++.h>
    int main(){
       int n;
       printf(“Digite um número inteiro: “);
       scanf(“%d”, &n);
       if(n % 2 == 0){
              printf(“par\n”);
       }else{
              printf(“ímpar\n”);
       }
       return 0;
   }
  ```
#### Problemas abordados na oficina
[Pontuação](https://imgur.com/a/C6IihPN)<br>
[Sedex](https://olimpiada.ic.unicamp.br/pratique/pj/2010/f1/sedex/)<br>
[Basquete de Robôs](https://olimpiada.ic.unicamp.br/pratique/pj/2018/f1/basquete/)<br>
[Drone de Entrega](https://olimpiada.ic.unicamp.br/pratique/pj/2017/f1/drone/)<br>
