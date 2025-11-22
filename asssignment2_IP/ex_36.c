#include<stdio.h>
#include<math.h>
int main ()
{
    float x;
    long double y,i,n1,n2,divisao,soma;
    int N,z;
    n2 = 1;
    soma = 0;
    scanf("%f",&x);
    scanf("%d",&N);
    for(i=0;i<=N;i++)
    {
        n1 = pow(x,i);
        for(z=0;z<=i;z++)
        {
            if(z==0)
            {
                n2 = 1;
            }
            else
            {
                n2 = n2 * z;
            }
        }
        divisao= n1/n2;
        soma = soma + divisao;

    }
    printf("e^%.2f = %.6Lf\n",x,soma);
    return 0;
}