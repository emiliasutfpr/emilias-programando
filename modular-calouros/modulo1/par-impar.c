#include <stdio.h>

int main()
{
    int p, d_1, d_2, soma = 0;
    scanf("%d %d %d", &p, &d_1, &d_2); //recebemos as variáveis 
    soma = d_1+d_2;
    soma = soma%2; // para descobrir se é par
    
    if(p==0){
        if(soma==0){
            printf("0");
        }
        else{
            printf("1");
        }
    }
    else{
        if(soma==0){
            printf("1");
        }
        else{
            printf("0");
        }
        
    }
}
