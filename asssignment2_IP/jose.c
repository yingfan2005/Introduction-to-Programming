#include<stdio.h>
int main ()
{
    int i,n,num1,num2,n1,n2,a1,a2,a3,c1,nn1,b1,b2,b3,c2,nn2;
    scanf("%d",&n);
    for(i = n;i > 0;i --)
    {
        nn1 = 0;
        nn2 = 0;
        scanf("%d %d",&num1,&num2);
        n1 = num1;
        n2 = num2;
        if(n1!=n2)
        {
            a1 = n1%10;
        c1 = n1/10;
        a2 = c1%10;
        a3 = c1/10;
        
       if(a1!=0&&a2!=0&&a3!=0)
        {
            nn1 = a1*100 + a2*10 + a3;
        }
        b1 = n2%10;
        c2 = n2/10;
        b2 = c2%10;
        b3 = c2/10;
        if(b1!=0&&b2!=0&&b3!=0)
        {
            nn2 = b1*100 + b2*10 + b3;
        }
        if(nn1 > nn2)
        {
            printf("%d\n",nn1);
        }
        if(nn1 < nn2)
        {
            printf("%d\n",nn2);
        }
        }
    }
    return 0;
}