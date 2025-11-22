#include<stdio.h>
int main ()
{
    unsigned int n,d1,d2,p;
    d1=0;
    p=0;
    scanf("%d",&n);
    if(n<=11&&n>2)
    {
        for(d1=1;d1<=6;d1++)
        {
            d2=n-d1;
            if(d2<=6&&d2>0)
            {
                if(d1!=d2)
            {
                printf("D1: %d, D2: %d\n",d1,d2);
                p++;
            }
            }

        }
        printf("Ha %d possibilidades\n",p);
    }
    else
    {
        printf("Combinacao impossivel\n");
    }
    return 0;
}