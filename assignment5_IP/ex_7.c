#include<stdio.h>
int main()
{
    int n;
    char b,f;
    scanf("%d %c %c",&n,&b,&f);
    char matriz[99][99];
    int i,j;
    int count=0;
    int z;
    if(n%2!=0&&n>0)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                matriz[i][j]=' ';
            }
        }
        i=0;
        j=n/2;
        while(i<=n/2&&j>=0)
        {
            matriz[i][j]=b;
            i++;
            j--;
        }
        i=0;
        j=n/2;
        while(i<=n/2&&j<=n-1)
        {
            matriz[i][j]=b;
            i++;
            j++;
        }
        i=n-1;
        j=n/2;
        while(i>=n/2&&j>=0)
        {
            matriz[i][j]=b;
            i--;
            j--;
        }
        i=n-1;
        j=n/2;
        while(i>=n/2&&j<=n-1)
        {
            matriz[i][j]=b;
            i--;
            j++;
        }
        i=1;
        while(i<n-1)
        {
            for(j=0;j<n;j++)
            {
                if(matriz[i][j]==b)
                {
                    z=j;
                    while(1)
                    {
                        matriz[i][z+1]=f;
                        z++;
                        if(matriz[i][z+1]==b&&z>j)
                        {
                            break;
                        }
                    }
                    break;
                }
            }
            i++;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%c ",matriz[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Dimensao invalida!\n");
    }
    return 0;
}