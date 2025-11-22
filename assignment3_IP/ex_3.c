#include<stdio.h>
int separaDigitos(int num)
{
    int a,b,c,x;
    a = (num%10)*100;
    num = (num/10);
    b = (num%10)*10;
    num= (num/10);
    c = num*1;
    x=(a+b+c);
    return x;
}
int main()
{
    int num,res;
    scanf("%d",&num);
    res=separaDigitos(num);
    printf("%d\n",res);
    return 0;
}