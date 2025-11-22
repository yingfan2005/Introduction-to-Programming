#include<stdio.h>
int my_strlen(char* ch)
{
    int c=0;
    while(*ch!='\0')
    {
        c ++;
        ch ++;
    }
    return c;
}
int Led(int s)
{
    if(s==1)
    {
        return 2;
    }
    else if(s==2||s==3||s==5)
    {
        return 5;
    }
    else if(s==4)
    {
        return 4;
    }
    else if(s==6||s==9||s==0)
    {
        return 6;
    }
    else if(s==7)
    {
        return 3;
    }
    else if(s==8)
    {
        return 7;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int num;
    int quant;
    int j;
    int count = 0;
    char ch[101];
    for(i=0;i<n;i++)
    {
        count = 0;
        scanf("%s",ch);
        quant=my_strlen(ch);
        for(j=0;j<quant;j++)
        {
            char b = ch[j]-'0';
            int s = b;
            count = count + Led(s);
        }
        printf("%d leds\n",count);
    
    }
    return 0;
}
//usar string para casos que tem entrada de números grandes.