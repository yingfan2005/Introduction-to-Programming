#include<stdio.h>
int main()
{
    int n1,n2,n3,x,y;
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    if(n1/10<1 && n2/10<1 && n3/10<1)
    {
        x = n1*100+n2*10+n3;
        y = x*x;
        printf("%d, %d\n",x,y); 
    }
    else
    {
        printf("DIGITO INVALIDO\n");
    }

    return 0;
}