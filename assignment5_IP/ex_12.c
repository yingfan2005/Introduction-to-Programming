#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int vetor[n*m];
    int i;
    int minimo=0;
    int maximo=0;
    int minimo_fre=0;
    int maximo_fre=0;
    int j;
    int s;
    int x;
    float min_p;
    float max_p;
    char a='%';
    for(i=0;i<n*m;i++)
    {
        scanf("%d",&vetor[i]);
    }
    for(j=0;j<n*m;j++)
    {
        if(vetor[j]>=maximo)
        {
            maximo=vetor[j];
        }
    }
    minimo=maximo;
    for(s=0;s<n*m;s++)
    {
        if(vetor[s]<=minimo)
        {
            minimo=vetor[s];
        }
    }
    for(x=0;x<n*m;x++)
    {
        if(vetor[x]==maximo)
        {
            maximo_fre++;
        }
        else if(vetor[x]==minimo)
        {
            minimo_fre++;
        }
    }
    min_p=minimo_fre*100/(m*n*1.0);
    max_p=maximo_fre*100/(m*n*1.0);
    printf("%d %.2f%c\n",minimo,min_p,a);
    printf("%d %.2f%c\n",maximo,max_p,a);

    return 0;
}