#include<stdio.h>
#include<stdlib.h>
struct tRacional
{
    int numerador;
    int denominador;
};
typedef struct tRacional racional;
int MDC(int x,int y)
{
    int max=1;
    int i;
    for(i=1;i<=y;i++)
    {
        if(x%i==0&&y%i==0)
        {
            if(i>max)
            {
                max=i;
            }
        }
    }
    return max;
}
racional Racional(int x,int y)
{
    racional ra;
    ra.numerador=x;
    ra.denominador=y;
    return ra;
}
racional soma(racional x,racional y)
{
    racional res;
    if(x.denominador==y.denominador)
    {
        res.numerador=x.numerador+y.numerador;
        res.denominador=x.denominador;
    }
    else
    {
        res.denominador=(x.denominador)*(y.denominador);
        res.numerador=(x.numerador*y.denominador)+(y.numerador*x.denominador);
    }
    return res;
}
racional negativo(racional ra)
{
    racional q=ra;
    q.numerador=(-1)*q.numerador;
    return q;
}
racional mult(racional x,racional y)
{
    racional res;
    res.numerador=x.numerador*y.numerador;
    res.denominador=x.denominador*y.denominador;
    return res;
}
racional divisao(racional x,racional y)
{
    racional res;
    int tmp;
    tmp=y.numerador;
    y.numerador=y.denominador;
    y.denominador=tmp;
    res=mult(x,y);
    return res;
}
void reduzFracao(racional *r)
{
    int tmp;
    int x;
    if(r->numerador<0)
    {
        tmp=(-1)*(r->numerador);
    }
    else
    {
        tmp=(r->numerador);
    }
    if(r->denominador<0)
    {
        x=(-1)*(r->denominador);
    }
    else
    {
        x=(r->denominador);
    }
    int mdc=MDC(tmp,x);
    //printf("%d\n",mdc);
    if(mdc!=1)
    {
        r->numerador=r->numerador/mdc;
        r->denominador=r->denominador/mdc;
    }
}
int main()
{
    int a,b,c,d;
    char ch;
    int mdc;
    int i;
    while(scanf("%d%d %c%d%d",&a,&b,&ch,&c,&d)!=EOF)
    {
        mdc=MDC(b,d);
        if(mdc!=1&&a%(b/mdc)==0&&c%(d/mdc)==0)
        {
            a=a/(b/mdc);
            b=b/(b/mdc);
            c=c/(d/mdc);
            d=d/(d/mdc);
        }
        else if(mdc!=1)
        {
            if(b>d)
            {
                d=d*(b/mdc);
                c=c*(b/mdc);
            }
            else if(b<d)
            {
                b=b*(d/mdc);
                a=a*(d/mdc);
            }
        }
        racional*r=NULL;
        r=(racional *)calloc(2,sizeof(racional));
        r[0]=Racional(a,b);
        r[1]=Racional(c,d);
        //printf("%d%d%d%d\n",a,b,c,d);
        racional res;
        if(ch=='+')
        {
            res=soma(r[0],r[1]);
        }
        else if(ch=='-')
        {
            r[1]=negativo(r[1]);
            //printf("%d\n",r[1].numerador);
            res=soma(r[0],r[1]);
            //printf("%d%d\n",res.numerador,res.denominador);
        }
        else if(ch=='*')
        {
            res=mult(r[0],r[1]);
        }
        else if(ch=='/')
        {
            res=divisao(r[0],r[1]);
        }
        reduzFracao(&res);
        printf("%d %d\n",res.numerador,res.denominador);
        free(r);
    }
    return 0;
}