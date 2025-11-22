#include<stdio.h>
#include<math.h>
int main()
{
	float l1,l2,l3,A,T;
	scanf("%f",&l1);
	scanf("%f",&l2);
	scanf("%f",&l3);
	T = (l1+l2+l3)/2;
	A = sqrt(T*(T-l1)*(T-l2)*(T-l3));
	printf("A AREA DO TRIANGULO E = %.2f\n",A);
	return 0;
}
