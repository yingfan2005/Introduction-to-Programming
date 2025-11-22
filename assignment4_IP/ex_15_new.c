#include<stdio.h>
void ordem_invertida(long int num)
{
    while(num!=0)
    {
        printf("%ld",num%10);
        num=num/10;
    }
}
void ordem_invertida_com_zero(long int number)
{
    int quant_zero=0;
    long int n=number;
    while(n%10==0&&n!=0)
    {
        quant_zero++;
        n=n/10;
    }
    while(quant_zero--)
    {
        printf("0");
        number = number/10;
        
    }
    while(number!=0)
    {
        printf("%ld",number%10);
        number=number/10;
    }
}
int main()
{
    int vezes;
    scanf("%d",&vezes);
    long int inicio;
    long int fim;
    int i;
    long int m;
    long int x;
    for(i=0;i<vezes;i++)
    {
        scanf("%ld %ld",&inicio,&fim);
        //imprimir ordem original
        for(m=inicio;m<=fim;m++)
        {
            printf("%ld",m);
        }
        //imprimir ordem invertida
        if(inicio!=fim)
        {
            for(x=fim;x>=inicio;x--)
            {
                if(x%10==0)
                {
                    ordem_invertida_com_zero(x);
                }
                else
                {
                    ordem_invertida(x);
                }
            }
        }
        else
        {
            x=inicio;
            if(x%10==0)
                {
                    ordem_invertida_com_zero(x);
                }
                else
                {
                    ordem_invertida(x);
                }
        }
        printf("\n");
    }
    return 0;
}