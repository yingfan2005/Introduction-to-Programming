#include<stdio.h>
int main()
{
    int n;
    int k;
    scanf("%d",&n);
    scanf("%d",&k);
    int i;
    int horario;
    int count=0;
    int res;
    int j;
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&horario);
        arr[i]=horario;
        if(horario<=0)
        {
            count++;
        }

    }
    if(count>=k)
    {
        res = 1;
    }
    else
    {
        res = 0;
    }
    if(res==0)
    {
        printf("SIM\n");
    }
    else
    {
        printf("NAO\n");
        for(j=n-1;j>=0;j--)
        {
            if(arr[j]<=0)
            {
                printf("%d\n",j+1);
            }
        }
    }


    return 0;
}