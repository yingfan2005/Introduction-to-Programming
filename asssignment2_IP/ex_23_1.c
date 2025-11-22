#include<stdio.h>
int main ()
{
    unsigned long cm,c_maior_lucro,c_maior_venda;
    float pc,pv,lucro,lucro_maior,vc,vv,vtc,vtv,percentual_lucro_total;
    int nv,count1,count2,count3,maior_venda;
    char a = '%';
    count1 = 0;
    count2 = 0;
    count3 = 0;
    lucro_maior=0;
    maior_venda=0;
    c_maior_venda=0;
    vtc = 0;
    vtv = 0;
    while(scanf("%lu %f %f %d",&cm,&pc,&pv,&nv)!=EOF&&cm>0&&pc>0&&pv>0&&nv>0)
    {
        lucro = ((nv * pv) - (nv*pc))/(nv * pc) * 100;
        vc = pc * nv;
        vv = pv * nv;
        vtc = vtc + vc;
        vtv = vtv + vv;
        if(vtc>0)
        {
            percentual_lucro_total=(vtv-vtc)/vtc*100;
        }
        if(lucro < 10)
        {
            count1 ++;
        }
        else if(lucro>=10 && lucro <= 20)
        {
            count2 ++;
        }
        else 
        {
            count3++;
        }
        if(lucro>=lucro_maior)
        {
            lucro_maior = lucro;
            c_maior_lucro = cm;
        }
        if(nv >= maior_venda)
        {
            maior_venda=nv;
            c_maior_venda= cm;
        }
    }
    printf("Quantidade de mercadorias que geraram lucro menor que 10%c: %d\n",a,count1);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%c e menor ou igual a 20%c: %d\n",a,a,count2); 
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%c: %d\n",a,count3);
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", c_maior_lucro);
    printf("Codigo da mercadoria mais vendida: %lu\n",c_maior_venda);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%c\n",vtc,vtv,percentual_lucro_total,a);
    
    return 0;
}