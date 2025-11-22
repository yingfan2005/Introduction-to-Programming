#include<stdio.h>
void sort(int arr[],int n)
{
    int i;
    int j;
    int tmp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>=arr[j+1])
            {
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    int matriz[1000][1000];
    int vetor[1000]={0};
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }
    i=0;
    j=0;
    while(j<n)
    {
        for(i=0;i<n;i++)
        {
            vetor[i]=matriz[i][j];
        }
        sort(vetor,n);
        for(i=0;i<n;i++)
        {
            matriz[i][j]=vetor[i];
        }
        j++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}