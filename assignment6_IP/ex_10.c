#include<stdio.h>
#include<stdlib.h>
struct polinomio
{
    float coeficiente;
    int expoente;
};
typedef struct polinomio poli;
poli le_polinomio(void)
{
    poli x;
    scanf("%f %d",&x.coeficiente,&x.expoente);
    return x;
}
float soma_polinomio(float x,float y)
{
    float res;
    res=x+y;
    return res;

}
float subtracao_polinomio(float x,float y)
{
    float res;
    res=x-y;
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int quant1,quant2;
    char c;
    for(i=0;i<n;i++)
    {
        scanf(" %c",&c);//espaco antes de %c!!!!!!
        if(c=='+')
        {
            int j;
            int res;
            int x,y;
            scanf("%d",&quant1);
            poli *p1=NULL;
            poli *p2=NULL;
            p1=(poli *)calloc(quant1,sizeof(poli));
            for(j=0;j<quant1;j++)
            {
                p1[j]=le_polinomio();

            }
            scanf("%d",&quant2);
            p2=(poli *)calloc(quant2,sizeof(poli));
            for(j=0;j<quant2;j++)
            {
                p2[j]=le_polinomio();
            }
            x=0;
            y=0;
            while(1)
            {
                //printf("%d ",x);
                //printf("%d ",y);
                if(p1[x].expoente>p2[y].expoente)
                {
                    if(p1[x].coeficiente!=0)
                    {
                        if(p1[x].expoente==0)
                        {
                            printf("%+.2f",p1[x].coeficiente);
                            x++;
                        }
                        else
                        {
                            printf("%+.2fX^%d",p1[x].coeficiente,p1[x].expoente);
                            x++;
                        }
                    }
                }
                else if(p1[x].expoente<p2[y].expoente)
                {
                    if(p2[y].coeficiente!=0)
                    {
                        if(p2[y].expoente==0)
                        {
                            printf("%+.2f",p2[y].coeficiente);
                            y++;
                        }
                        else
                        {
                            printf("%+.2fX^%d",p2[y].coeficiente,p2[y].expoente);
                            y++;
                        }
                    }
                }
                else
                {
                   float res=soma_polinomio(p1[x].coeficiente,p2[y].coeficiente);
                   //printf("%f ",res);
                   if(res!=0&&p1[x].expoente!=0)
                   {
                    printf("%+.2fX^%d",res,p1[x].expoente);
                   }
                   else if(res!=0&&p1[x].expoente==0)
                   {
                    printf("%+.2f",res);
                   }
                    x++;
                    y++;
                    
                }
                if(x>quant1-1&&y>quant2-1)
                {
                    printf("\n");
                    break;
                }
            }
            free(p1);
            free(p2);

        }
        else
        {
            int j;
            int res;
            int x,y;
            scanf("%d",&quant1);
            poli *p1=NULL;
            poli *p2=NULL;
            p1=(poli *)calloc(quant1,sizeof(poli));
            for(j=0;j<quant1;j++)
            {
                p1[j]=le_polinomio();

            }
            scanf("%d",&quant2);
            p2=(poli *)calloc(quant2,sizeof(poli));
            for(j=0;j<quant2;j++)
            {
                p2[j]=le_polinomio();
            }
            x=0;
            y=0;
            while(1)
            {
                //printf("%d ",x);
                //printf("%d ",y);
                if(p1[x].expoente>p2[y].expoente)
                {
                    if(p1[x].coeficiente!=0)
                    {
                        if(p1[x].expoente==0)
                        {
                            printf("%+.2f",p1[x].coeficiente);
                            x++;
                        }
                        else
                        {
                            printf("%+.2fX^%d",p1[x].coeficiente,p1[x].expoente);
                            x++;
                        }
                    }
                }
                else if(p1[x].expoente<p2[y].expoente)
                {
                    if(p2[y].coeficiente!=0)
                    {
                        if(p2[y].expoente==0)
                        {
                            printf("%+.2f",(p2[y].coeficiente)*(-1));
                            y++;
                        }
                        else
                        {
                            printf("%+.2fX^%d",(p2[y].coeficiente)*(-1),p2[y].expoente);
                            y++;
                        }
                    }
                }
                else
                {
                   float res=subtracao_polinomio(p1[x].coeficiente,p2[y].coeficiente);
                   //printf("%f ",res);
                   if(res!=0&&p1[x].expoente!=0)
                   {
                    printf("%+.2fX^%d",res,p1[x].expoente);
                   }
                   else if(res!=0&&p1[x].expoente==0)
                   {
                    printf("%+.2f",res);
                   }
                    x++;
                    y++;
                    
                }
                if(x>quant1-1&&y>quant2-1)
                {
                    printf("\n");
                    break;
                }
            }
            free(p1);
            free(p2);


        }
    }
    return 0;
}