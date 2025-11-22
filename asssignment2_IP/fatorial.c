#include<stdio.h>
int main ()
{
    unsigned int n,num;
    unsigned long f;
    scanf("%u",&n);
    num = n;
    f=1;
    if(n!=0)
    {
        while(n>=2)
        {
            f = f*n;
            n--;
        }
    }
    else
    {
        f = 1;
    }
    printf("%u!  = %lu\n",num,f);
    return 0;
}