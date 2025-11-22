#include<stdio.h>
int main ()
{
     long double numero;
    long int numerador,denominador,x,i,parte_inteira;
    scanf("%Lf",&numero);
    parte_inteira = (long)numero;
    x=100000000;
    numerador=(numero-parte_inteira)*x;
    printf("%ld\n",numerador);
    for(i=2;i<x;i++)
    {
        if(numerador%i==0&&x%i==0)
        {
            numerador=numerador/i;
            x=x/i;
            
        }
    }
    denominador=x;
    numerador = numerador +(parte_inteira*denominador);
    for(i=2;i<x;i++)
    {
        if(numerador%i==0&&x%i==0)
        {
            numerador=numerador/i;
            x=x/i;
            
        }
    }
    denominador=x;
   
    printf("%ld/%ld\n",numerador,denominador);
    


   
    return 0;
}