#include<stdio.h>
int main()
{
    long long int tamanho1;
    long long int tamanho2;
    long long int i;
    long long int j;
    long long int x;
    long long int y;
    long long int tmp;
    long long int k;
    long long int l;
    long long int t;
    long long int m;
    long long int n;
    long long int z;
    scanf("%lld",&tamanho1);
    scanf("%lld",&tamanho2);
    long long int vetor1[tamanho1];
    long long int vetor2[tamanho2];
    for(i=0;i<tamanho1;i++)
    {
        scanf("%lld",&vetor1[i]);
    }
    for(x=0;x<tamanho1;x++)
    {
        for(y=x+1;y<tamanho1;y++)
        {
            if(vetor1[x]>=vetor1[y])
            {
                tmp=vetor1[x];
                vetor1[x]=vetor1[y];
                vetor1[y]=tmp;
            }
        }
    }
    for(j=0;j<tamanho2;j++)
    {
        scanf("%lld",&vetor2[j]);
    }
    for(k=0;k<tamanho2;k++)
    {
        for(l=k+1;l<tamanho2;l++)
        {
            if(vetor2[k]>=vetor2[l])
            {
                tmp=vetor2[k];
                vetor2[k]=vetor2[l];
                vetor2[l]=tmp;
            }
        }
    }
    long long int vetor3[tamanho1+tamanho2];
    m=0;
    n=0;
    for(t=0;t<tamanho1+tamanho2;t++)
    {
    
       if(m<tamanho1&&n<tamanho2)
       {
        if(vetor1[m]>=vetor2[n])
        {
            vetor3[t]=vetor2[n];
            n++;
        }
        else if(vetor1[m]<=vetor2[n])
        {
            vetor3[t]=vetor1[m];
            m++;
        }
       }
       else
       {
        if(m<tamanho1)
       {
        vetor3[t]=vetor1[m];
        m++;
       }
       else if(n<tamanho2)
       {
        vetor3[t]=vetor2[n];
        n++;
       }
       }
    }
    for(z=0;z<tamanho1+tamanho2;z++)
    {
        printf("%lld\n",vetor3[z]);
    }

    
    return 0;
}