#include<stdio.h>
int main ()
{
	int valor,nota_100,nota_50,nota_10,moeda_1,v1,v2,v3;
	scanf("%d",&valor);
	nota_100 = valor/100;
	v1 = valor-nota_100*100;
	nota_50 = v1/50;
	v2 = v1-nota_50*50;
	nota_10 = v2/10;
	v3 = v2-nota_10*10;
	moeda_1 = v3/1;
	printf("NOTAS DE 100 = %d\n",nota_100);
	printf("NOTAS DE 50 = %d\n",nota_50);
	printf("NOTAS DE 10 = %d\n",nota_10);
	printf("MOEDAS DE 1 = %d\n",moeda_1);
	return 0;
}
