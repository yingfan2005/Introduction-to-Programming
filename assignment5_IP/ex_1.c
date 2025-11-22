#include<stdio.h>
int main()
{
    double matriz[2][2];
    int i;
    int j;
    double res=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%lf",&matriz[i][j]);
        }
    }
    res+=((matriz[0][0])*(matriz[1][1])e);

    res-=((matriz[0][1])*(matriz[1][0]));
    printf("%.2lf\n",res);
    
    

    return 0;
}