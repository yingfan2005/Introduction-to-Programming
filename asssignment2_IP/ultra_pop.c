#include<stdio.h>
int main()
{
    unsigned long int a,b,count;
    int a1,b1;
    count = 0;
    scanf("%ld",&a);
    scanf("%ld",&b);
    a1 = a;
    b1 = b;
    if(a<b)
    {
        while(a1<b1)
        {
            a1 = a1*1.03;
            b1 = b1*1.015;
            count ++;
        }
    }
    printf("ANOS = %ld\n",count);
    return 0;
}