#include<stdio.h>
int main()
{
	float a,b,c,d,e,f,x,y;
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	scanf("%f",&d);
	scanf("%f",&e);
	scanf("%f",&f);
	x = (b*f-e*c)/(b*d-e*a);
	y = (c-a*x)/b;
	printf("O VALOR DE X E = %.2f\n",x);
	printf("O VALOR DE Y E = %.2f\n",y);
	return 0;
}
