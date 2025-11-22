#include<stdio.h>
#include<math.h>
int next_power(int n,int p)
{
    double r,x,y;
    if(n==0)
    {
        return 0;
    }
    else if(p==0)
    {
        return 1;
    }
    else if(p==1)
    {
        return n;
    }
    else
    {
        r = pow(n,(1.0/p));
        x = (int)r;
        y = (int)(r+1);
        if((n-pow(x,p))>=(pow(y,p)-n))
        {
            return y;
        }
        else
        {
            return x;
        }
        
    }

}
int main()
{
    int n,p,num_proximo,res;
    scanf("%d %d",&n,&p);
    num_proximo=next_power(n,p);
    res = pow(num_proximo,p);
    printf("%d -> %d^%d = %d\n",n,num_proximo,p,res);
    return 0;

}