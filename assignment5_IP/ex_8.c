#include<stdio.h>
int ehPermutacao(int matriz[ ][500],int n,int *soma)
{
    int linha[500]={0};
    int coluna[500]={0};
    int z,w;
    int a;
    int soma_l=0,soma_c=0;
    int b,c;
    *soma = 0;
    for(z=0;z<n;z++)
    {
        for(w=0;w<n;w++)
        {
            //printf("%d ",matriz[z][w]);
            if(matriz[z][w]==1)
            {
                linha[z]++;
                coluna[w]++;
            }
            (*soma)+=matriz[z][w];
        }
    }
    for(a=0;a<n;a++)
    {
        if(linha[a]==1)
        {
            soma_l++;
        }
        if(coluna[a]==1)
        {
            soma_c++;
        }
    } 
    if(soma_l==n&&soma_c==n)
    {
        return 1;

    } 
    else
    {
        return 0;
    }  
}
int main()
{
    int n;
    scanf("%d",&n);
    int matriz[500][500];
    int i,j;
    int res;
    int soma;
    int count=0;
    int *p=&soma;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }
    res=ehPermutacao(matriz,n,p);
    if(res==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(matriz[i][j]==0)
                {
                    count ++;
                }
            }
        }
        if(count==(n*n)-n)
        {
            printf("%d\n",n);
        printf("PERMUTACAO\n");
        printf("%d\n",*p);
        }
        else
        {
            printf("%d\n",n);
        printf("NAO EH PERMUTACAO\n");
        printf("%d\n",*p);
        }
    }
    else
    {
        printf("%d\n",n);
        printf("NAO EH PERMUTACAO\n");
        printf("%d\n",*p);
    }
    return 0;
}