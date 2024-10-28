#include <stdio.h>

int main() {

    long t;
    scanf("%ld", &t);  // Lê o número de casos de teste

    while(t--) {  // Loop que executa t vezes, decrementando t após cada iteração

        long n, k;
        scanf("%ld %ld", &n, &k);  // Lê os valores de n e k

        long odd = ((k + (n % 2)) / 2) % 2;  // Calcula se a expressão resulta em um número ímpar ou par

        if (odd) {
            printf("NO\n");  // Se odd for 1, imprime "NO"
        } else {
            printf("YES\n");  // Se odd for 0, imprime "YES"
        }
    }

    return 0;  // Retorna 0 para indicar que o programa terminou corretamente
}
