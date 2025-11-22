#include<stdio.h>
int main ()
{
    int n1,n2,soma1,soma2,i,x,z,y;
    soma1 = 0;
    soma2=0;
    scanf("%d",&y);
    x = 100;
    while(y)
    {
        for(n1=x;;n1++)
        {
            soma1=0;
            soma2=0;
            for(i=1;i<n1;i++)
            {
                if(n1%i==0)
                {
                    soma1 = soma1 + i;
                }
            }
           for(z=1;z<soma1;z++)
           {
            if(soma1%z==0)
            {
                soma2=soma2+z;
            }
           }
           if(n1==soma2&&n1<soma1)
           {
            printf("(%d,%d)\n",n1,soma1);
            y --;
            break;
           }
           
        }
        x = soma1;
    }
    return 0;
}