#include<stdio.h>
int main ()
{
    int num,a,b;
    while(scanf("%d",&num)!=EOF)
    {
        if(num>0&&num<100000)
        {
            if(num<10)
            {
                printf("PALINDROMO\n");
            }
            else if(num>9&&num<100)
            {
                if(num%10==num/10)
                {
                    printf("PALINDROMO\n");
                }
                else
                {
                    printf("NAO PALINDROMO\n");
                }
            }
            else if(num>99&&num<1000)
            {
                if(num/100==num%10)
                {
                    printf("PALINDROMO\n");
                }
                else
                {
                    printf("NAO PALINDROMO\n");
    
                }
    
            }
            else if(num>999&&num<10000)
            {
                if(num/1000==num%10&&((num/100)%10)==(((num-(num%10))%100)/10))
                {
                    printf("PALINDROMO\n");
                }
                else
                {
                    printf("NAO PALINDROMO\n");
                }
            }
            else if(num>9999&&num<100000)
            {
                if(num/10000==num%10&&((num/1000)%10)==(((num-(num%10))%100)/10))
                {
                    printf("PALINDROMO\n");
                }
                else
                {
                    printf("NAO PALINDROMO\n");
                }
            }
        }
        else
        {
            printf("NUMERO INVALIDO\n");
        }
    }
   
    return 0;
}