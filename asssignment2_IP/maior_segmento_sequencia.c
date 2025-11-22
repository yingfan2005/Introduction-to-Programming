#include<stdio.h>
int main ()
{
    int n,num1,num,ca,cm,i;
    scanf("%d",&n);
    scanf("%d",&num1);
    ca = 1;
    cm = 1;
    for(i = 1;i < n;i ++)
    {
        scanf("%d",&num);
        if(num>num1)
        {
            ca = ca + 1;
        }
        if(ca>cm)
        {
            cm = ca;
        }
        if(num<=num1)
        {
            ca = 1;
        }
        num1 = num;
    }
    printf("O comprimento do segmento crescente maximo e: %d",cm);
    return 0;
}