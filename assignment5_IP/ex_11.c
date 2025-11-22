#include<stdio.h>
int repetir(int vetor[],int num,int tam)
{
    int z;
    int count=0;
    for(z=0;z<tam;z++)
    {
        if(vetor[z]==num)
        {
            count++;
        }
    }
    if(count>1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int numero_unico(int vetor[],int num,int tam)
{
    int z;
    int count=0;
    for(z=0;z<tam;z++)
    {
        if(vetor[z]==num)
        {
            count++;
        }
    }
    if(count==1)
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
    int nl,nc;
    scanf("%d %d",&nl,&nc);
    int vetor[nl*nc];
    int i;
    int j;
    int quantidade_repetido=0;
    int unico;
    int x;
    int numero;
    int z;
    int m;
    if(nl>0&&nl<=10&&nc>0&&nc<=100)
    {
        for(i=0;i<nl*nc;i++)
    {
        scanf("%d",&vetor[i]);
    }
    for(j=0;j<nl*nc;j++)
    {
        quantidade_repetido+=repetir(vetor,vetor[j],nl*nc);
    }
    unico=(nl*nc-quantidade_repetido);
    int arr[unico];
    z=0;
    for(x=0;x<nl*nc;x++)
    {
        numero=numero_unico(vetor,vetor[x],nl*nc);
        if(numero==1)
        {
            arr[z]=vetor[x];
            z++;
        }
    }
    if(z==0)
    {
        printf("sem elementos unicos\n");
    }
    else
    {
        for(m=0;m<unico;m++)
        {
            if(m==unico-1)
            {
                printf("%d\n",arr[m]);
            }
            else
            {
                printf("%d,",arr[m]);
            }

        }
    }
    }
    else
    {
        printf("dimensao invalida\n");
    }

    return 0;
}