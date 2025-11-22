#include<stdio.h>
int main()
{
    float matriz[2][2];
    int x;
    int y;
    int i;
    int j;
    float res=0;
    for(x=0;x<2;x++)
    {
        for(y=0;y<2;y++)
        {
            scanf("%f",&matriz[x][y]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(i==0&&j==0)
            {
                res=matriz[0][0]*matriz[0][0]+matriz[0][1]*matriz[1][0]*1.0;
                printf("%.3f ",res);
            }
            else if(i==0&&j==1)
            {
                res=matriz[0][0]*matriz[0][1]+matriz[0][1]*matriz[1][1]*1.0;
                printf("%.3f\n",res);
            }
            else if(i==1&&j==0)
            {
                res=matriz[1][0]*matriz[0][0]+matriz[1][1]*matriz[1][0]*1.0;
                printf("%.3lf ",res);
            }
            else if(i==1&&j==1)
            {
                res=matriz[1][0]*matriz[0][1]+matriz[1][1]*matriz[1][1]*1.0;
                printf("%.3f\n",res);
            }
        }
    }
    return 0;
}