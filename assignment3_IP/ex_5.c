#include<stdio.h>
#include<math.h>
double raizesEq2Grau(double a,double b,double c)
{
    double x,delta;
    delta = (b*b)-(4*a*c);
    if(delta>0)
    {
        return 2;
    }
    else if(delta==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    double a,b,c,res,x1,x2,delta,tmp;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a!=0)
    {
        res=raizesEq2Grau(a,b,c);
    delta = b*b-4*a*c;
    if(res==2)
    {
        x1=((-b)+sqrt(delta))/(2*a);
        x2=((-b)-sqrt(delta))/(2*a);
        if(x1>x2)
        {
            tmp = x1;
            x1 = x2;
            x2 = tmp;
        }
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2lf\n",x1);
        printf("X2 = %.2lf\n",x2);
    }
    else if(res==1)
    {
        x1=((-b)+sqrt(delta))/(2*a);
        printf("RAIZ UNICA\n");
        printf("X1 = %.2lf\n",x1);
    }
    else
    {
        printf("RAIZES IMAGINARIAS\n");
    }
    }
    return 0;
}