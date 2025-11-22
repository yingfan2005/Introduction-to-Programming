#include<stdio.h>
int somaDivisores(int n)
{
    int j,sum=0;
    for(j=1;j<n;j++)
    {
        if((n%j)==0)
        {
            sum=sum+j;
        }
    }
    return sum;
}
int main()
{
    int n,i,soma;
    scanf("%d",&n);
    printf("%d =",n);
    for(i=1;i<n;i++)
    {
        if((n%i)==0)
        {
            if(i==1)
            {
                printf(" 1 ");
            }
            else
            {
                printf("+ %d ",i);
            }
        }
    }
    soma=somaDivisores(n);
    printf("= %d ",soma);
    if(soma==n)
    {
        printf("(NUMERO PERFEITO)\n");
    }
    else
    {
        printf("(NUMERO NAO E PERFEITO)\n");
    }
    
    return 0;
}