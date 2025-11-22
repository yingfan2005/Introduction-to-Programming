#include<stdio.h>
#include<math.h>
int main ()
{
	float x1,y1,x2,y2,xt,yt,distancia;
	scanf("%f",&x1);
	scanf("%f",&y1);
	scanf("%f",&x2);
	scanf("%f",&y2);
	xt = (x2-x1)*(x2-x1);
	yt = (y2-y1)*(y2-y1);
	distancia = sqrt(xt+yt);
	printf("A DISTANCIA ENTRE A e B = %.2f\n",distancia);
	return 0;
}
