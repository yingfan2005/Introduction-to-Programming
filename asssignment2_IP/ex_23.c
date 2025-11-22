#include<stdio.h>
int main ()
{
   unsigned long cm,x,y;
   float pc,pv,l,l1,vtc,vtcf,vtv,vtvf,p,pf,a,b,c,d;
   int n,count1,count2,count3,n1;
   count1=0;
   count2=0;
   count3=0;
   l1 = 0;
   n1=0;
   vtcf=0;
   vtvf=0;
   x=0;
    y=0;
    while((scanf("%lu %f %f %d",&cm,&pc,&pv,&n))!=EOF)
   {
    a = n*pv;
    b = n*pc;
    c = a-b;
    l = c/b;
    if(l<0.1)
    {
        count1 ++;
    }
    else if(l>=0.1&&l<=0.2)
    {
        count2 ++;
    }
    else if(l>0.2)
    {
        count3 ++;
    }
    if(l>l1)
    {
        l1=l;
        x = cm;
    }
    if(n>n1)
    {
        y = cm;
        n1 = n;
    }
    vtc = n*pc;
    vtcf = (vtcf+vtc);
    vtv = n*pv;
    vtvf = (vtvf+vtv);
    d = (vtvf-vtcf);
    p = d/vtcf;
    pf = p*100;
    printf("Quantidade de mercadorias que geraram lucro menor que 10%:  %d\n",count1);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10% //e menor ou igual a 20%:  %d\n",count2);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%:  %d\n",count3);
    printf("Codigo da mercadoria que gerou maior lucro:  %lu\n",x);
    printf("Codigo da mercadoria mais vendida:  %lu\n",y);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total:  %.2f%\n",vtcf,vtvf,pf);
    }

    return 0;
}