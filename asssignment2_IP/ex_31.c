#include<stdio.h>
int main ()
{
    int n,n1,n2,i,num,soma,num1;
    soma = 0;
    scanf("%d %d %d",&n,&n1,&n2);
    if(n>2)
    {
        for(i=1;i<=n;i++)
        {
            scanf("%d",&num);
            if(i==1)
            {
                if(num==n1)
                {
                    soma = soma + num;
                    printf("OK\n");
                }
                else
                {
                    printf("Nao e Fibonacci\n");
                    break;
                }
            }
            else if(i==2)
            {
                if(num==n2)
                {
                    soma = soma + num;
                    num1 = num;
                    printf("OK\n");
                }
                else
                {
                    printf("Nao e Fibonacci\n");
                    break;
                }
            }
            else
            {
                if(i==3)
                {
                    if(num==soma)
                    {
                        printf("OK\n");
                        soma = soma + num1;
                        num1 = num;
                        if(n==3)
                        {
                            printf("A serie informada e de Fibonacci\n");
                        }
                    }
                    else
                    {
                        printf("Nao e Fibonacci\n");
                        break;
                    }
                }
                else
                {
                    if(num==soma)
                    {
                        printf("OK\n");
                        if(i==n)
                        {
                            printf("A serie informada e de Fibonacci\n");
                            break;
                        }
                        soma = soma + num1;
                        num1 = num;
                    }
                    else
                    {
                        printf("Nao e Fibonacci\n");
                        break;
                    }
                }
            }
        }
    }

    return 0;
}