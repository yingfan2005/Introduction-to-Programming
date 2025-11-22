#include<stdio.h>
#include<math.h>
int next_power(int n,int p)
{
    int i,j,c,res1,res2,x,min,y,s,z,m;
    if(n!=1&&n>=0)
    {
        m = n;
        if((p%2)==0)
    {
        i = (p/2);
        for(j=1;j<=i;j++)
        {
            c=sqrt(n);
            n=c;
        }
        res1=pow(c,p);
        res2=pow((c+1),p);
        if((m-res1)<=(res2-m))
        {
            return c;
        }
        else if((m-res1)>(res2-m))
        {
            return (c+1);
        }
 
    }
    else
    {
        min=(n-pow(1,p));
 
        for(x=2;x<(2*n);x++)
        {
            if(pow(x,p)<=n)
            {
                y = (n-pow(x,p));
                if(y<=min)
                {
                    min = y;
                    s = x;
 
                }
            }
            else if(pow(x,p)>n)
            {
                z=(pow(x,p)-n);
                if(n<=min)
                {
                    min = z;
                    s = x;
                }
            }
        }
        return s;
    }
    }
    else if(n==1)
    {
        return 1;
    }
    else if(n<0)
    {
        n = (n*(-1));
        if((p%2)==1)
        {
            min=(n-pow(1,p));
 
        for(x=2;x<(2*n);x++)
        {
            if(pow(x,p)<=n)
            {
                y = (n-pow(x,p));
                if(y<=min)
                {
                    min = y;
                    s = x;
 
                }
            }
            else if(pow(x,p)>n)
            {
                z=(pow(x,p)-n);
                if(n<=min)
                {
                    min = z;
                    s = x;
                }
            }
        }
        return s;
        }
    }
}
int main()
{
    int n;
    int p;
    int num_proximo,a;
    scanf("%d %d",&n,&p);
    num_proximo=next_power(n,p);
    //printf("%d\n",num_proximo);
    a= pow(num_proximo,p);
   // printf("%d\n",a);
   if(n>=0)
   {
    printf("%d -> %d^%d = %d\n",n,num_proximo,p,a);
   }
   else
   {
    printf("%d -> -%d^%d = -%d\n",n,num_proximo,p,a);
   }
 
 
    return 0;
}