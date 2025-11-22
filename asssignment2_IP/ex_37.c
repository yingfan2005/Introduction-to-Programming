#include<stdio.h>
int main ()
{
    int numero,i;
    while(scanf("%d",&numero)!=EOF)
    {
        if(numero>0)
       {
        printf("%d =",numero);
            for(i=2;i<=numero;i++)
            {
            if(numero%i==0)
            {
                if((numero/i)!=1)
                {
                    printf(" %d x",i);
                    numero = (numero/i);
                    if(numero%i==0)
                    {
                        while(1)
                        {
                            if(numero%i==0)
                            {
                                printf(" %d x",i);
                                numero = (numero/i);
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                }
                else if ((numero/i)==1)
                {
                    printf(" %d\n",i);
                    break;
                }
            }
            
        }
        numero = (numero/2);
       }
       else
       {
        printf("Fatoracao nao e possivel para o numero %d!\n",numero);
       }
    }
    
    return 0;
}