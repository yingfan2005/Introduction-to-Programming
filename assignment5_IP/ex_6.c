#include<stdio.h>
int main()
{
    int l,a,lb,valor;
    scanf("%d%d%d%d",&l,&a,&lb,&valor);
    int matriz[a][l];
    int i,j;
    int g,h;
    for(i=0;i<a;i++)
    {
        for(j=0;j<l;j++)
        {
            if(i<lb)
            {
                matriz[i][j]=valor;
            }
            else if(i>=a-lb&&i<a)
            {
                matriz[i][j]=valor;
            }
            else if(j<lb)
            {
                matriz[i][j]=valor;
            }
            else if(j>=l-lb&&j<l)
            {
                matriz[i][j]=valor;
            }
            else
            {
                matriz[i][j]=0;
            }
        }
    }
    printf("P2\n");
    printf("%d %d\n",l,a);
    printf("255\n");
    for(g=0;g<a;g++)
    {
        for(h=0;h<l;h++)
        {
            printf("%d ",matriz[g][h]);
        }
        printf("\n");
    }

    return 0;
}