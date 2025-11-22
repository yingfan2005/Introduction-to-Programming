#include<stdio.h>
#include<math.h>
int next_power(int n,int p)
{
    int i,j,c,res1,res2,x,min,y,s,z,m;
    m = n;
    if(n!=1)
    {
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
    else
    {
        return 1;
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
   printf("%d -> %d^%d = %d\n",n,num_proximo,p,a);
 
 
    return 0;
}