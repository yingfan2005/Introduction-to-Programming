#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int matriz[1000][1000];
    int i,j;
    int x,y;
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }
    for(x=0;x<n;x++)
    {
        for(y=0;y<m;y++)
        {
            if(matriz[x][y]==1111)
            {
                //if((x==0&&y==0)||(x==0&&y==m-1)||(x==n-1&&y==0)||(x==n-1&&y==m-1))
                if(x==0&&y!=0&&y!=m-1)
                {
                    
                        if(matriz[x][y-1]==0&&matriz[x][y+1]==0&&matriz[x+1][y]==8)
                        {
                            count++;
                        }
                    
                }
                else if(x==n-1&&y!=0&&y!=m-1)
                {
                    
                        if(matriz[x-1][y]==4&&matriz[x][y-1]==0&&matriz[x][y+1]==0)
                        {
                            count ++;
                        }
                    
                }
                else if(y==0&&x!=0&&x!=n-1)
                {
                    
                        if(matriz[x-1][y]==4&&matriz[x+1][y]==8&&matriz[x][y+1]==0)
                        {
                            count ++;
                        }
                    
                }
                else if(y==m-1&&x!=0&&x!=n-1)
                {
                    
                        if(matriz[x-1][y]==4&&matriz[x+1][y]==8&&matriz[x][y-1]==0)
                        {
                            count ++;
                        }
                }
                else if(x==0&&y==0)
                {
                    if(matriz[x][y+1]==0&&matriz[x+1][y]==8)
                    {
                        count++;
                    }
                }
                else if(x==0&&y==m-1)
                {
                    if(matriz[x][y-1]==0&&matriz[x+1][y]==8)
                    {
                        count ++;
                    }
                }
                else if(y==0&&x==n-1)
                {
                    if(matriz[x-1][y]==4&&matriz[x][y+1]==0)
                    {
                        count++;
                    }
                }
                else if(y==m-1&&x==n-1)
                {
                    if(matriz[x-1][y]==4&&matriz[x][y-1]==0)
                    {
                        count++;
                    }
                }
                else
                {
                    if(matriz[x][y-1]==0&&matriz[x][y+1]==0&&matriz[x-1][y]==4&&matriz[x+1][y]==8)
                    {
                        count ++;
                    }
                }
            }
            if(count==1)
            {
                break;
            }
        }
        if(count==1)
        {
            break;
        }
    }
    if(count==1)
    {
        printf("%d %d\n",x,y);
    }
    else
    {
        printf("WALLY NAO ESTA NA MATRIZ\n");
    }

    return 0;
}