#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int quant;
    int i;
    int j;
    int z;
    int m;
    double count=0;
    for(i=0;i<n;i++)
    {
        count=0;
        scanf("%d",&quant);
        char **fruta=NULL;
        fruta=(char**)calloc(quant,sizeof(char*));
        for(j=0;j<quant;j++)
        {
            fruta[j]=(char*)calloc(51,sizeof(char));
        }
        double *preco=NULL;
        preco=(double *)calloc(quant,sizeof(double));
        for(j=0;j<quant;j++)
        {
            scanf("%s%*c",fruta[j]);
            scanf("%lf",&preco[j]);
        }
       /* for(j=0;j<quant;j++)
        {
            printf("%s %lf\n",fruta[j],preco[j]);;
        }*/
        scanf("%d",&z);
        char **compra=NULL;
        compra=(char**)calloc(z,sizeof(char*));
        for(j=0;j<z;j++)
        {
            compra[j]=(char*)calloc(51,sizeof(char));
        }
        int * quantidade=NULL;
        quantidade=(int *)calloc(z,sizeof(int));
        for(j=0;j<z;j++)
        {
            scanf("%s%*c",compra[j]);
            scanf("%d",&quantidade[j]);
            for(m=0;m<quant;m++)
            {
                if(strcmp(fruta[m],compra[j])==0)
                {
                    //printf("%s",fruta[m]);
                    count+=quantidade[j]*preco[m];
                }
            }
        }
        /*for(j=0;j<z;j++)
        {
            printf("%s %d\n",compra[j],quantidade[j]);;
        }*/
        printf("R$ %.2lf\n",count);
        for(j=0;j<quant;j++)
        {
            free(fruta[j]);
        }

        free(fruta);
        free(preco);
        for(j=0;j<z;j++)
        {
            free(compra[j]);
        }

        free(compra);
        free(quantidade);



    }
    return 0;
}