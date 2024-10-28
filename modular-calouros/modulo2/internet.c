#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x; //sa gente ganha mensal
    int n; // num de meses
    int gasto; // gasto mensal
    int sobra=0;
    scanf("%d",&x); //leu o X
    scanf("%d", &n); // meses que vvao rodar
    for(int i=0; i<n; i++){
        scanf("%d",&gasto);
        //x,n,gasto
        sobra+=x-gasto;
    }
    printf(sobra+x);
    return 0;
}