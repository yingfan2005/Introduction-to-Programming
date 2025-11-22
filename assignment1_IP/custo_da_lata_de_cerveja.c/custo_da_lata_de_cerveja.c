#include<stdio.h>
#define PI 3.14159
int main()
{
	float r,a,area,valor_custo;
	scanf("%f",&r);
	scanf("%f",&a);
	area=2*PI*r*r+2*PI*r*a;
	valor_custo=area*100.00;
	printf("O VALOR DO CUSTO E = %.2f\n",valor_custo);
	return 0;
}

