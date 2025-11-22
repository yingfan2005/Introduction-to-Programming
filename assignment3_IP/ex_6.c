#include<stdio.h>
double raiz(double n,double p)
{
    double r_aproximado;
    r_aproximado=((p+(n/p))/2.0);
    return r_aproximado;
}
double absoluto(double n,double r)
{
    if((r*r)>=n)
    {
        return ((r*r)-n);
    }
    else
    {
        return (n-(r*r));
    }
}
int main()
{
    double n,p,e,r,erro;
    scanf("%lf",&n);
    scanf("%lf",&e);
    p=1;
    do
    {
        r=raiz(n,p);
    p = r;
    printf("r: %.9lf,",r);
    erro=absoluto(n,r);
    printf(" err: %.9lf\n",erro);
    }
    while(erro>e);


    return 0;
}