#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i;
    int j;
    int k;
    int l;
    int tmp;
    int anoes[9];
    int sum=0;
    int alvo;
    int x;
    int m;
    int n;
    int eliminado1;
    int eliminado2;
    int z;
    for(i=0;i<t;i++)
    {
        sum=0;
        for(j=0;j<9;j++)
        {
            scanf("%d",&anoes[j]);
        }
        //ordenação de ordem crescente
        for(k=0;k<9;k++)
        {
            for(l=k+1;l<9;l++)
            {
                if(anoes[k]>=anoes[l])
                {
                    tmp=anoes[l];
                    anoes[l]=anoes[k];
                    anoes[k]=tmp;
                }
            }
        }
        for(x=0;x<9;x++)
        {
            sum+=anoes[x];
        }
        alvo=sum-100;
        for(m=0;m<8;m++)
        {
            for(n=m+1;n<9;n++)
            {
                if((anoes[m]+anoes[n])==alvo)
                {
                    break;
                }
            }
            if((anoes[m]+anoes[n])==alvo)
                {
                    eliminado1=anoes[m];
                    eliminado2=anoes[n];
                    break;
                }
        }
        for(z=0;z<9;z++)
        {
            if(anoes[z]!=eliminado1&&anoes[z]!=eliminado2)
            {
                printf("%d\n",anoes[z]);
            }
        }


    }
    return 0;
}