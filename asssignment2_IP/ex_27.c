#include<stdio.h>
int main ()
{
    int num,i,soma;
    soma = 0;
    scanf("%d",&num);
    if(num>0)
    {
        for(i=1;i<num;i++)
        {
            if(num%i==0)
            {
                if(i==1)
                {
                    printf("%d = 1",num);
                }
                else
                {
                    printf(" + %d",i);
                }
                soma = soma+i;
            }
        }
        if(soma == num)
        {
            printf(" = %d (NUMERO PERFEITO)\n",soma);
        }
        else
        {
            {
                printf(" = %d (NUMERO NAO E PERFEITO)\n",soma);
            }
        }
    }
    return 0;
}