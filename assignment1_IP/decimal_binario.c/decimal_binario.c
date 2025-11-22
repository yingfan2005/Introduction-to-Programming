#include<stdio.h>
int main()
{
	int n,a1,a2,a3,a4,a5,a6,a7,a8,b2,b3,b4,b5,b6,b7,b8;
	scanf("%d",&n);
	if(n>=0 && n<=255)
	{
		a1 = n - n/2*2;
		b2 = n/2;
		a2 = b2 - b2/2*2;
		b3 = b2/2;
		a3 = b3 - b3/2*2;
		b4 = b3/2;
		a4 = b4 - b4/2*2;
		b5 = b4/2;
		a5 = b5 - b5/2*2;
		b6 = b5/2;
		a6 = b6 - b6/2*2;
		b7 = b6/2;
		a7 = b7 - b7/2*2;
		b8 = b7/2;
		a8 = b8 - b8/2*2;
		printf("%d%d%d%d%d%d%d%d\n",a8,a7,a6,a5,a4,a3,a2,a1);
		
	}
	else
	{
		printf("Numero invalido!\n");
	}
	return 0;
}
