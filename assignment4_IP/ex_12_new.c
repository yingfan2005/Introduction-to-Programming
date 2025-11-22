#include<stdio.h>
void sort(long long int arr[],long long int n)
{
    long long int i;
    long long int j;
    long long int tmp;
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
    long long int n;
    scanf("%lld",&n);
    long long int i;
    long long int arr[n];
    double mediana;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    sort(arr,n);
    if(n%2==0)
    {
        mediana = (arr[n/2]+arr[n/2-1])/2.0;
    }
    else
    {
        mediana = arr[n/2]*1.0;
    }
    printf("%.2lf\n",mediana);
    return 0;
}
