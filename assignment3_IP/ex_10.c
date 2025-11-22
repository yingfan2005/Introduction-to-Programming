#include<stdio.h>
double compute_pi(int n)
{
    double i,j;
    double mul=1;
    if(n%2==0&&n!=1)
    {
        for(i=2;i<=n;i+=2)
        {
            mul=mul*(i/(i-1.0));
            mul = mul*(i/(i+1.0));
        }
    }
    else if(n%2!=0&&n!=1)
    {
        for(i=2;i<=(n-1);i+=2)
        {
            mul=mul*(i/(i-1.0));
            mul = mul*(i/(i+1.0));
        }
        mul=mul*(i/(i-1.0));
    }
    else if(n==1)
    {
        mul = mul*(2/1.0);
    }
    return mul;
}
int main()
{
    int n;
    double res;
    scanf("%d",& n);
    res=compute_pi(n);
    res = (res*2.0);
    printf("%.12lf\n",res);
    return 0;
}