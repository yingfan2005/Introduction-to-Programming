#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n][n];
    int B[n][n];
    int trA=0;
    int i,j;
    int x,y;
    int q,w;
    int r,s;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
            if(i==j)
            {
                trA+=(A[i][j]);
            }
        }
    }
    for(r=0;r<n;r++)
    {
        for(s=0;s<n;s++)
        {
            B[r][s]=A[s][r];
        }
    }
    for(x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
            (A[x][y])=((A[x][y])*trA);
            (A[x][y])+=(B[x][y]);
        }
    }
    for(q=0;q<n;q++)
    {
        for(w=0;w<n;w++)
        {
            printf("%d ",A[q][w]);
        }
        printf("\n");
    }

    return 0;
}