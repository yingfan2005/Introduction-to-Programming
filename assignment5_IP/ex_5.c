#include<stdio.h>
int main()
{
    int matriz[6][6];
    int i;
    int j;
    int m;
    int n;
    int pri_ele;
    int sum=0;
    int max;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }
    for(m=0;m<4;m++)
    {
        for(n=0;n<4;n++)
        {
            sum=0;
            if(m==0&&n==0)
            {
                pri_ele=matriz[m][n];
                sum=matriz[m][n]+matriz[m][n+1]+matriz[m][n+2]+matriz[m+1][n+1]+matriz[m+2][n]+matriz[m+2][n+1]+matriz[m+2][n+2];
                max = sum;
            }
            pri_ele=matriz[m][n];
            sum=matriz[m][n]+matriz[m][n+1]+matriz[m][n+2]+matriz[m+1][n+1]+matriz[m+2][n]+matriz[m+2][n+1]+matriz[m+2][n+2];
            if(sum>=max)
            {
                max=sum;
            }
        }
    }
    printf("%d\n",max);
    return 0;
}