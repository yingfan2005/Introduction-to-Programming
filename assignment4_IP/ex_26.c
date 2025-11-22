#include<stdio.h>
int quant_acertos(int* alvo,int *apostas)
{
    int x;
    int y;
    int *m=alvo;
    int *n=apostas;
    int equal=0;
    for(x=0;x<6;x++)
    {
        n=apostas;//attention
        for(y=0;y<6;y++)
        {
            if(*m==*n)
            {
                equal++;
            }
            n++;
        }
        m++;
    }
    return equal;
}
int main()
{
    int alvo[6];
    int i;
    int acertos;
    long long int quarta=0;
    long long int quinta=0;
    long long int sena=0;
    for(i=0;i<6;i++)
    {
        scanf("%d",&alvo[i]);
    }
    long long int quant_vezes;
    scanf("%lld",&quant_vezes);
    long long int j;
    for(j=0;j<quant_vezes;j++)
    {
        int apostas[6];
        int m;
        for(m=0;m<6;m++)
        {
            scanf("%d",&apostas[m]);
        }
        acertos=quant_acertos(alvo,apostas);
        if(acertos==4)
        {
            quarta++;
        }
        else if(acertos==5)
        {
            quinta ++;
        }
        else if(acertos==6)
        {
            sena ++;
        }

    }
    if(sena==0)
    {
        printf("Nao houve acertador para sena\n");
    }
    else
    {
        printf("Houve %lld acertador(es) da sena\n",sena);
    }
    if(quinta==0)
    {
        printf("Nao houve acertador para quina\n");
    }
    else
    {
        printf("Houve %lld acertador(es) da quina\n",quinta);
    }
    if(quarta==0)
    {
        printf("Nao houve acertador para quadra\n");
    }
    else
    {
        printf("Houve %lld acertador(es) da quadra\n",quarta);
    }
    return 0;
}