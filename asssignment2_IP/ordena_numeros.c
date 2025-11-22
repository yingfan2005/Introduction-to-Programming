#include<stdio.h>
int main ()
{
    float n1,n2,n3,tmp;
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    if(n1>n2)
    {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    if(n2>n3)
    {
        tmp = n2;
        n2 = n3;
        n3 = tmp;
    }
    if(n1>n2)
    {
        tmp = n1;
        n1 = n2;
        n2 = tmp;
    }
    printf("%.2f, %.2f, %.2f\n",n1,n2,n3);

    return 0;
}