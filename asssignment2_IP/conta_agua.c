#include<stdio.h>
int main ()
{
    int conta;
    float quant_agua,valor;
    char tipo;
    scanf("%d %f %c",&conta,&quant_agua,&tipo);
    if(tipo == 'C')
    {
        if(quant_agua<=80)
        {
            valor = 500;
        }
        else
        {
            quant_agua = quant_agua - 80;
            valor = 500 + 0.25*quant_agua;
        }
    }
    else if(tipo == 'I')
    {
        if(quant_agua <= 100)
        {
            valor = 800;
        }
        else
        {
            quant_agua = quant_agua - 100;
            valor = 800 + 0.04*quant_agua;
        }
    }
    else if(tipo == 'R')
    {
        valor = 5 + 0.05*quant_agua;
    }
    printf("CONTA = %d\n",conta);
    printf("VALOR DA CONTA = %.2f\n",valor);
    return 0;
}