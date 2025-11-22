#include<stdio.h>
#include<math.h>
int main ()
{
	float h,a,Ab,V;
	scanf("%f %f",&h,&a);
	Ab = 3*a*a*sqrt(3)*0.5;
	V = Ab*h/3;
	printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n",V);
	
	return 0;
}
