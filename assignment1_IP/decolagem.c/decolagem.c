#include<stdio.h>
int main()
{
	double massa,ac,tempo,x,y,z;
	scanf("%lf",&massa);
	scanf("%lf",&ac);
	scanf("%lf",&tempo);
	x = ac*tempo*3.6;
	y = ac*tempo*tempo*0.5;
	z = massa*1000*x*x*0.5/3.6/3.6;
	printf("VELOCIDADE = %.2lf\n",x);
	printf("ESPACO PERCORRIDO = %.2lf\n",y);
	printf("TRABALHO REALIZADO = %.2f\n",z);
	
	return 0;
}
