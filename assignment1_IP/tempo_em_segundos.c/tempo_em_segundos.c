#include<stdio.h>
int main ()
{
	int h,m,s,tempo_s;
	scanf("%d",&h);
	scanf("%d",&m);
	scanf("%d",&s);
	tempo_s = 3600*h+60*m+s;
	printf("O TEMPO EM SEGUNDOS E = %d\n",tempo_s);
	return 0;
}
