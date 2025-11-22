#include<stdio.h>
int main ()
{
    int n,x,numero_anterior,num1,num2,i,numero_atual,res;
    x=1;
    while(x!=0)
    {
        res = 0;
        scanf("%d",&n);
        if(n>2)
        {
            x = n;
        }  
        else
        {
            break;
        }
        scanf("%d%d",&num1,&num2);
        numero_anterior=num1;
        numero_atual=num2;
        if(numero_anterior<numero_atual)
        {
            res ++;
            numero_anterior = numero_atual;
            for(i = 3;i<=n;i++)
            {
                scanf("%d",&numero_atual);
                if(i%2!=0)
                {
                    if(numero_atual<numero_anterior)
                    {
                        res ++;
                        numero_anterior = numero_atual;
                    }
                }
                else
                {
                    if(numero_atual>numero_anterior)
                    {
                        res ++;
                        numero_anterior=numero_atual;
                    }
                   
                }
            }
            if(res==(n-1))
        {
            printf("Intercalada\n");
        }
        else
        {
            printf("Nao intercalada\n");
        }
        }
        else if(numero_anterior>numero_atual)
        {
            res ++;
            numero_anterior = numero_atual;
            for(i = 3;i<=n;i++)
            {
                scanf("%d ",&numero_atual);
                if(i%2!=0)
                {
                    if(numero_atual>numero_anterior)
                    {
                        res ++;
                        numero_anterior = numero_atual;
                    }
                   
                }
                else
                {
                    if(numero_atual<numero_anterior)
                    {
                        res ++;
                        numero_anterior=numero_atual;
                    }
                    
                }
            }
            if(res==(n-1))
        {
            printf("Intercalada\n");
        }
        else
        {
            printf("Nao intercalada\n");
        }
        }
        else if
        {
            printf("Nao intercalada\n");
            
        }

    }
    return 0;
}