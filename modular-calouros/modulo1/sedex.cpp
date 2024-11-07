#include <bits/stdc++.h> //inclui todas as bibliotecas c++
// para C usa-se #include <stdio.h>

int main() {
    int N, A, L, P;

    scanf("%d", &N); //caixa diâmetro
    scanf("%d %d %d", &A, &L, &P); //caixa dimensões

    //bola cabe na caixa
    if (N <= A && N <= L && N <= P) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
