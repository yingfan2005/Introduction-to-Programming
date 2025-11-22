#include<stdio.h>
int main ()
{
    int n,i,j,x;
    x = 1;
    scanf("%d",&n);
    if(n>0)
    {
        for(i=1;i<=n;i ++)
        {
            printf("%d*%d*%d = ",i,i,i);
            for(j=1;j<=i;j++)
            {
                if(j==i)
                {
                    if(j==1)
                    {
                        printf("%d\n",x);
                        break;
                    }
                    else
                    {
                        x=x+2;
                        printf("%d\n",x);
                        break;
                    }
                }
                else
                {
                    x = x + 2;
                    printf("%d+",x);
                }
            }

        }
    }
    return 0;
}