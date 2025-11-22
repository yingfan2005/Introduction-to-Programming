#include<stdio.h>
int main ()
{
    int num1,num2,num3,max,i,a,i1;
    i1 = 1;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1!=0&&num2!=0&&num3!=0)
    {
        if(num1>num2&&num1>num3)
        {
            max = num1;
        }
        else if(num2>num1&&num2>num3)
        {
            max = num2;
        }
        else if(num3>num1&&num3>num2)
        {
            max = num3;
        }
        for(i = 2;i <= max;i ++)
        {
            if(num1%i==0||num2%i==0||num3%i==0)
            {
                a = i;
                i1 = i1 * i;
                printf("%d %d %d :%d\n",num1,num2,num3,a);
            }
            if(num1%i==0)
            {
                num1 = num1/i;
            }
            else
            {
                num1 = num1;
            }
            if(num2%i==0)
            {
                num2 = num2/i;
            }
            else
            {
                num2 = num2;
            }
            if(num3%i==0)
            {
                num3 = num3/i;
            }
            else
            {
                num3 = num3;
            }
            while(num1%i==0||num2%i==0||num3%i==0)
            {
                a = i;
                printf("%d %d %d :%d\n",num1,num2,num3,a);
                if(num1%i==0)
            {
                num1 = num1/i;
            }
            else
            {
                num1 = num1;
            }
            if(num2%i==0)
            {
                num2 = num2/i;
            }
            else
            {
                num2 = num2;
            }
            if(num3%i==0)
            {
                num3 = num3/i;
            }
            else
            {
                num3 = num3;
            }
            i1 = i1 * i;

            }
        }
        printf("MMC: %d\n",i1);

    }
    return 0;
}