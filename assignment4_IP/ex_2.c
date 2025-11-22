#include<stdio.h>
int Contagem(int* arr,int n,int k)
{
    int j;
    int c = 0;
    for(j=0;j<n;j++)
    {
        if(*arr>=k)
        {
            c++;
        }
        arr ++;
    }
    return c;
}
int main()
{
    int n;
    int count;
   while(1)
   {
    scanf("%d",&n);
    if(n>=1&&n<=1000)
    {
        int arr[n];
        int i;
        int k;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        scanf("%d",&k);
        count = Contagem(arr,n,k);
        break;
    }
   }
   printf("%d\n",count);
    return 0;
}