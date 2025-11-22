#include<stdio.h>
int main ()
{
    int n,i,k,x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i==1)
        {
            printf("1*1*1 = 1\n");
        }
        else
        {
            printf("%d*%d*%d = ",i,i,i);
            for(k=1;k<=i;k++)
            {
                if(k==1)
                {
                    x= i * (i-1) + 1;
                    printf("%d",x);
                }
                else if(k>1&&k<i)
                {
                    y = x+2;
                    printf("+%d",y);
                    x = y;

                }
                else if(k==i)
                {
                    y = x+2;
                    printf("+%d\n",y);
                }
            }
        }
    }
    return 0;
}