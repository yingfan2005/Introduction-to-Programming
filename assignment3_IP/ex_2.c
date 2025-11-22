#include<stdio.h>
int fibonacci(int n1,int n2,int quant)
{
    int i,sum=0;
    for(i=1;i<(quant-1);i++)
    {
        sum = (n1+n2);
        n1 = n2;
        n2 = sum;
    }
    return sum;
}
int main()
{
    int n1,n2,quant,res;
    scanf("%d %d %d",&n1,&n2,&quant);
    res=fibonacci(n1,n2,quant);
    printf("%d\n",res);
    return 0;
}