#include<stdio.h>
int main ()
{
	float F,C,cp,cml;
	scanf("%f",&F);
	scanf("%f",&cp);
	C=5*(F-32)/9;
	cml=cp*25.4;
	printf("O VALOR EM CELSIUS = %.2f\n",C);
	printf("A QUANTIDADE DE CHUVA E = %.2f\n",cml);
	
	return 0;
}	
