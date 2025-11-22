#include<stdio.h>
int main()
{
    int num,i,count;
    i = 1;
    count = 0;
    scanf("%d",&num);
    if(num>0)
    {
        for(i=1;i<=num;i++)
        {
            if((num%i)==0)
            {
                count ++;
            }
        }
    if((count-2)==0)
    {
        printf("PRIMO\n");
    }
    else if((count-2)!=0)
    {
        printf("NAO PRIMO\n");
    }
    }
    else if(num<0)
    {
        printf("Numero invalido!\n");
    }
    else if(num==0)
    {
        printf("NAO PRIMO\n");
    }
    return 0;
}