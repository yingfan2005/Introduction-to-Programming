#include<stdio.h>
int main()
{
    int x,y,i;
    scanf("%d %d",&x,&y);
    i = 1;
    if(x%2==0)
    {
        printf("%d ",x);
        while(i < y)
        {
            x = x+2;
            printf("%d ",x);
            i ++;
        }
    }
    else if(x%2!=0)
    {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }

    return 0;
}