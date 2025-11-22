#include<stdio.h>
int main()
{
    long double num,numerador,denominador;
    scanf("%Lf",&num);
    denominador = 1;
    if(num==0)
    {
        numerador=0;
    }
    else
    {
        while(1)
        {
            numerador=num*denominador;
            if((int)numerador==numerador)
            {
                break;
            }
            else
            {
                denominador ++;
            }
        }
        printf("%d/%d\n",(int)numerador,(int)denominador);
    }

    return 0;
}