#include<stdio.h>
int Achar_par(int* arr,int n)
{
    int j;
    int count = 0;
    for(j=0;j<n;j++)
    {
        if(*arr%2==0)
        {
            count ++;
        }   
        arr ++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    int m;
    int par;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
        par=Achar_par(arr,n);
        for(m=0;m<n;m++)
        {
            if(arr[m]%2==0)
            {
                printf("%d ",arr[m]);
            }
        }
        printf("%d\n",par);

    return 0;
}