#include<stdio.h>
int main()
{
    int d,m,a,count_dias,x;
    count_dias = 0;
    scanf("%d%d%d",&d,&m,&a);
    if((a%4==0&&a%100!=0)||a%400==0)
    {
            for(x=1;x<=m;x++)
        {
            if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
            {
                count_dias = count_dias + 31;
            }
            else
            {
                if(x==2)
                {
                    count_dias = count_dias + 29;
                }
                else
                {
                    count_dias = count_dias + 30;
                }
            }
        }
    
        if(m==2)
        {
            count_dias = count_dias-29+d;
        }
        else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        {
            count_dias = count_dias-31+d;
        }
        else
        {
            count_dias = count_dias - 30 + d;
        }
        
        
    }
    else
    {
        for(x=1;x<=m;x++)
        {
            if(x==1||x==3||x==5||x==7||x==8||x==10||x==12)
            {
                count_dias = count_dias + 31;
            }
            else
            {
                if(x==2)
                {
                    count_dias = count_dias + 28;
                }
                else
                {
                    count_dias = count_dias + 30;
                }
            }
        }
        if(m==2)
        {
            count_dias = count_dias-28+d;
        }
        else if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
        {
            count_dias = count_dias-31+d;
        }
        else
        {
            count_dias = count_dias - 30 + d;
        }
    }
    printf("NUMERO DE DIAS E %d\n",count_dias);

    return 0;
}