#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    int x;
    int numero_atual;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(x=0;x<n;x++)
    {
        if(x==0)
        {
            numero_atual=arr[x];
        }
        if(arr[x]!=numero_atual)
        {
            printf("%d\n",numero_atual);
            numero_atual=arr[x];
        }

    }
    printf("%d\n",numero_atual);
    return 0;
}