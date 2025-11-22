#include<stdio.h>
int main ()
{
	int n,novo_numero,a,b,c,d;
	scanf("%d",&n);
	a = n/100;
	b = (n-a*100)/10;
	c = (n-a*100)-b*10;
	d = (a+b*3+c*5)%7;
	novo_numero = n*10+d;
	printf("O NOVO NUMERO E = %d\n",novo_numero);
	
	return 0;
}
