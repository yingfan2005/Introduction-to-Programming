#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n;
    int *x;
    scanf("%d",&n);
    x=&n;
    getchar();
    int i;
    for(i=0;i<n;i++)
    {
        char ch[500+1];
        char *y;
    scanf("%[^\n]",ch);
    getchar();
    y=ch;
    printf("%d %s\n",*x,y);
    }

    return 0;
}