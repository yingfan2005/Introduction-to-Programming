#include<stdio.h>
int main ()
{
    float n1,n2,n3,x;
    scanf("%f %f %f",&n1,&n2,&n3);
    x = (n1+n2+n3)/3.00;
    if(x >= 6.00)
    {
        printf("MEDIA = %.2f\n",x);
        printf("APROVADO\n");
    }
    else
    {
        printf("MEDIA = %.2f\n",x);
        printf("REPROVADO");
    }
    return 0;
}