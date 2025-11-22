#include<stdio.h>
int main ()
{
    int a,b,c,d,tmp,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(a>b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if(b>c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }
    if(c>d)
    {
        tmp = c;
        c = d;
        d = tmp;
    }
    if(a>b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if(b>c)
    {
        tmp = b;
        b = c;
        c = tmp;
    }
    if(a>b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    sum = a +b +c;
    printf("%d\n",sum);
    
    return 0;
}