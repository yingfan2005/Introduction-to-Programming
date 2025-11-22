#include<stdio.h>
int main ()
{
    int num1,num2,sum1,sum2,sum3;
    scanf("%d",&num1);
    if(num1 >= 0)
    {
        num2=num1;
        sum1=num2*2*31;
        sum2=num2*32;
        sum3=sum1+sum2+num2;
        printf("%d\n",sum3);
    }
    return 0;
}