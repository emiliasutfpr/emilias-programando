#include <stdio.h>

int main()
{

	int n, a, soma=0, dias=1;
	scanf("%d", &n);
    //for(variavel;condição;incremento)
	for(int i=0;i<n;i++){
    	scanf("%d", &a);
    	soma = soma+a;
    	if(soma<=1000000) dias++;
	}
	printf("%d", dias);

}
