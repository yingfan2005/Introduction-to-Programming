#include<stdio.h>
int main()
{
	int n,a1,a2,a3,b1;
	scanf("%d",&n);
	a1 = n % 10;
	b1 = n / 10;
	a2 = b1 % 10;
	a3 = b1 / 10;
	printf("%d%d%d\n",a1,a2,a3);
	return 0;
}
