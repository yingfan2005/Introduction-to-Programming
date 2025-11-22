#include<stdio.h>
int Achar(long int*arr,int num,long int n)
{
    long int m;
    for(m=0;m<n;m++)
    {
        if(num==*arr)
        {
            return 1;
            break;
        }
        else
        {
            arr++;
        }
    }
    if(m==n)
    {
        return 0;
    }
    
}
int main()
{
    long int n;
    long int i;
    int vez;
    int j;
    int res;
    int num;
    scanf("%ld",&n);
    long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%ld",&arr[i]);
    }
    scanf("%d",&vez);
    for(j=0;j<vez;j++)
    {
        scanf("%d",&num);
        res=Achar(arr,num,n);
        if(res==1)
        {
            printf("ACHEI\n");
        }
        else
        {
            printf("NAO ACHEI\n");
        }
    }



    return 0;
}