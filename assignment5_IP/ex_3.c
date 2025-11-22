#include<stdio.h>
int main()
{
    long int n;
    scanf("%ld",&n);
    long int x;
    long int y;
    long int matriz[n][n];
    long int z;
    long int a=n-1;
    for(x=0;x<n;x++)
    {
        for(y=0;y<n;y++)
        {
            scanf("%ld",&matriz[x][y]);
        }
    }
    for(z=0;z<n;z++)
    {
        printf("%ld\n",matriz[z][a]);
        a--;
    }
    

    return 0;
}