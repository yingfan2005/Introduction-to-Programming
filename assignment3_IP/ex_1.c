#include<stdio.h>
unsigned int fat(unsigned int n)
{
    int i,x=1;
   if(n>0)
   {
    for(i=n;i>0;i--)
    {
        x=x*i;
    }
   }
   else if(n==0)
   {
    return 1;
   }
   return x;
}
int main()
{
    unsigned int n,res;
    scanf("%d",&n);
    res=fat(n);
    printf("%d! = %d\n",n,res);

    return 0;
}