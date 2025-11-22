#include<stdio.h>
int main ()
{
	float CFi,CFa,x,y,CD,CI;
	scanf("%f",&CFa);
	scanf("%f",&x);
	scanf("%f",&y);
	CD = x*CFa/100;
	CI = y*CFa/100;
	CFi = CFa+CD+CI;
	printf("O VALOR DO CARRO E = %.2f\n",CFi);
	return 0;
}
