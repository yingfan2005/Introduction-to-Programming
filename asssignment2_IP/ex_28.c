#include<stdio.h>
int main ()
{
    int num1,num2,num3,n1,n2,n3,q,w,e;
    char x,y,z,a,b,c;
    scanf("%d %d %d\n",&num1,&num2,&num3);
    scanf("%c %c %c",&x,&y,&z);
    q = x;
    w = y;
    e = z;
    n1 = num1;
    n2 = num2;
    n3 = num3;
    if(num1>0&&num1<=100&&num2>0&&num2<=100&&num3>0&&num3<=100)
    {
        if(num1<num2&&num1<num3)
        {
            num1 = 'a';
            if(num2<num3)
            {
                num2='b';
                num3='c';
            }
            else if(num2>num3)
            {
                num3='b';
                num2='c';
            }
        }
        else if(num2<num1&&num2<num3)
        {
            num2='a';
            if(num1<num3)
            {
                num1='b';
                num3='c';
            }
            else if(num1>num3)
            {
                num3='b';
                num1='c';
            }
        }
        else if(num3<num1&&num3<num2)
        {
            num3='a';
            if(num1<num2)
            {
                num1='b';
                num2='c';
            }
            else if(num1>num2)
            {
                num2='b';
                num1='c';
            }
        }
        if(((num1-q)==32)&&((num2-w)==32)&&((num3-e)==32))
        {
            printf("%d %d %d\n",n1,n2,n3);//correta

        }
        else if(((num1-q)==32)&&((num3-w)==32)&&(num2-e)==32)
        {
            printf("%d %d %d\n",n1,n3,n2);
        }
    
        else if(((num2-q)==32)&&((num1-w)==32)&&(num3-e)==32)
        {
            printf("%d %d %d\n",n2,n1,n3);
        }
        else if(((num2-q)==32)&&((num3-w)==32)&&(num1-e)==32)
        {
            printf("%d %d %d\n",n2,n3,n1);
        }
        else if(((num3-q)==32)&&((num1-w)==32)&&(num2-e)==32)
        {
            printf("%d %d %d\n",n3,n1,n2);
        }
        else
        {
            printf("%d %d %d\n",n3,n2,n1);
        }
       


    }
    return 0;
}