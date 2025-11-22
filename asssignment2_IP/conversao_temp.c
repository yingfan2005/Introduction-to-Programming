#include<stdio.h>
int main ()
{
    int n;
    float c,f;
    int i = 1;
    scanf("%d",&n);
    while(i <= n)
    {
        scanf("%f",&f);
        c = 5*(f-32)/9;
        printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n",f,c);
        i ++;
    }
    return 0;
}