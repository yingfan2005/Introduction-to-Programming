#include<stdio.h>
#include<math.h>
int tamanho(char* ch)
{
    int count=0;
    while(*ch != '\0')
    {
        count ++;
        ch ++;
    }
    return count;
}
int main()
{
    char m[10];
    char n[10];
    int t1;
    int t2;
    int i;
    int j;
    int num1=0;
    int num2=0;
    int pot;
    int x;
    int y;
    int sum1;
    int tam=0;
    int sum2;
    int q;
    int w=0;
    int f;
    int k;
    int l;
    int ret;
    while(1)
    {
        scanf("%s",m);
        scanf("%s",n);
        if(m[0]=='0'&&n[0]=='0')
        {
            break;
        }
        t1 = tamanho(m);
        //printf("%d\n",t1);
        t2 = tamanho(n);
        //printf("%d\n",t2);
        num1 = 0;
        k = t1-1;
        for(i=0;i<t1;i++)
        {
            pot=pow(10,k);
            x=m[i]-'0';
            num1 = num1+(x*pot);
            k --;
        }
        num2 = 0;
        l = t2 - 1;
        for(j=0;j<t2;j++)
        {

            pot=pow(10,l);
            y=n[j]-'0';
            num2 = num2+(y*pot);
            l --;
        }
        sum1 = num1 + num2;
        sum2 = sum1;
        //printf("%d\n",sum1);
        w= 0;
        while(sum1)
        {
           sum1 = sum1/10;
           w ++; 
        }
        for(f=w-1;f>=0;f--)
        {
            ret=sum2/(pow(10,f));
            if(ret!=0)
            {
                printf("%d",ret);
            }
            sum2 = sum2-(ret*(pow(10,f)));
        }
        printf("\n");

    }

    return 0;
}