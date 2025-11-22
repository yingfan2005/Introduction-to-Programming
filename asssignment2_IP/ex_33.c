#include<stdio.h>
int main ()
{
    int NS,BC1d,primeiro_digito_DV,UF,BC2d,segundo_digito_DV,numero_sequencial,DV;
    scanf("%d",&NS);
    scanf("%d",&UF);

    if(NS/10==0)
    {
        BC1d=(NS%10)*9;
    }
    else if(NS/10!=0&&NS/100==0)
    {
        BC1d=(NS%10)*9+((NS/10)%10)*8;
    }
    else if(NS/100!=0&&NS/1000==0)
    {
        BC1d=(NS%10)*9+((NS/10)%10)*8+((NS/100)%10)*7;
    }
    else if(NS/1000!=0&&NS/10000==0)
    {
        BC1d=(NS%10)*9+((NS/10)%10)*8+((NS/100)%10)*7+((NS/1000)%10)*6;
    }
    else if(NS/10000!=0&&NS/100000==0)
    {
        BC1d=(NS%10)*9+((NS/10)%10)*8+((NS/100)%10)*7+((NS/1000)%10)*6+((NS/10000)%10)*5;
    }
    else if(NS/100000!=0&&NS/1000000==0)
    {
        BC1d=(NS%10)*9+((NS/10)%10)*8+((NS/100)%10)*7+((NS/1000)%10)*6+((NS/10000)%10)*5+((NS/100000)%10)*4;
    }
    else if(NS/1000000!=0&&NS/1000000==0)
    {
        BC1d=(NS%10)*9+((NS/10)%10)*8+((NS/100)%10)*7+((NS/1000)%10)*6+((NS/10000)%10)*5+((NS/100000)%10)*4+((NS/1000000)%10)*3;
    }
    else if(NS/1000000!=0&&NS/10000000==0)
    {
        BC1d=(NS%10)*9+((NS/10)%10)*8+((NS/100)%10)*7+((NS/1000)%10)*6+((NS/10000)%10)*5+((NS/100000)%10)*4+((NS/10000000)%10)*3+((NS/10000000)%10)*2;
    }
    primeiro_digito_DV= BC1d%11;
    if(primeiro_digito_DV==10)
    {
        primeiro_digito_DV = 0;
    }
    if(UF>=1&&UF<=28)
    {
        if(UF/10==0)
    {
        BC2d=UF*8+primeiro_digito_DV*9;
    }
    else if(UF/10!=0&&UF/100==0)
    {
        BC2d=(UF%10)*8+((UF/10)%10)*7+primeiro_digito_DV*9;
    }
    segundo_digito_DV=BC2d%11;
    if(segundo_digito_DV==10)
    {
        segundo_digito_DV = 0;
    }
    numero_sequencial=NS*100+UF;
    DV=primeiro_digito_DV*10+segundo_digito_DV;
    if(DV<10)
    {
        printf("%d/0%d\n",numero_sequencial,DV);
    }
    else
    {
        printf("%d/%d\n",numero_sequencial,DV);
    }
    }
    else
    {
        printf("CODIGO DA UF INVALIDO!\n");
    }



      
        
    

    return 0;
}