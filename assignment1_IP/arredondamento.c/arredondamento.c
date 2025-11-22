#include<stdio.h>
int main ()
{
	float a,a1,c1,a2,c2,a3,c3;
	int b1,b2,b3;
	
	scanf("%f",&a);
	 b1 = a*10;
	a1 = a * 10-b1;
	if(a1>=0.5)
	{
		b1 += 1;
		c1 = b1*0.1;
		printf("%f\n",c1);
	}
	else
	{
		c1 = b1*0.1;
		printf("%f\n",c1);
	}
	b2 = a*100;
	a2 = a*100-b2;
	if(a2>=0.5)
	{
		b2 += 1;
		c2 = b2*0.01;
		printf("%f\n",c2);
	}
	else
	{
		c2 = b2*0.01;
		printf("%f\n",c2);
	}
	b3 = a*1000;
	a3 = a*1000-b3;
	if(a3>=0.5)
	{
		b3 += 1;
		c3 = b3*0.001;
		printf("%f\n",c3);
	}
	else
	{
		c3 = b3*0.001;
		printf("%f\n",c3);
	}
	return 0;
}
	
	


