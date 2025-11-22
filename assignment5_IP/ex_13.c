#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int matriz[10][10];
    int i,j;
    int count=0;
    int x,y;
    int z,w;
    int s=0;
    int diferenca=0;
    int g,k;
    if(n>0&&n<=10)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&matriz[i][j]);
            }
        }
        //para diagonal principal
        for(x=0;x<n;x++)
        {
            for(y=0;y<n;y++)
            {
                if(matriz[x][y]==matriz[y][x])
                {
                    count++;
                }
            }
        }
        s=0;
        g=n-1;
        k=n-1;
        for(z=0;z<n;z++)
        {
            k=n-1;
            for(w=0;w<n;w++)
            {
                if(matriz[z][w]==matriz[k][g])
                {
                    s++;
                }
                k--;
            }
            g--;
        }

        if(count==(n*n)&&s==(n*n))
        {
            printf("bissimetrica\n");
        }
        else
        {
            printf("nao bissimetrica\n");
        }


    }
    else
    {
        printf("dimensao invalida\n");
    }
    return 0;
}