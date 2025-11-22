#include<stdio.h>
long int quantidade(long int* num,long int k,long int n)
{
    long int count = 0;
    long int h;
    for(h=0;h<n;h++)
    {
        if(*num<=k)
        {
            count ++;
        }
        num ++;
    }
    return count;
    
}
int main()
{
    long int n;
    long int i;
    long int j;
    long int k;
    long int max=0;
    long int vez;
    while(1)
    {
        scanf("%ld",&n);
        if(n==0)
        {
            break;
        }
        long int num[n];
        for(i=0;i<n;i++)
        {
            scanf("%ld",&num[i]);
        }
        max = 0;
        for(j=0;j<n;j++)
        {
            if(num[j]>=max)
            {
                max = num[j];
            }
        }
        for(k=0;k<=max;k++)
        {
            vez = quantidade(num,k,n);
            printf("(%lu) %lu\n",k,vez);
        }



    }
    return 0;
}