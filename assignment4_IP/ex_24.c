#include<stdio.h>
#include<string.h>
#include<math.h>
long int string2int(const char*str)
{
    const char *p=str;
    const char *r=str;
    int len=0;
    int res=0;
    while(*p!='\0')
    {
        len ++;
        p++;
    }
    int pot=len-1;
    int j;
    if(*r!='-')
    {
        for(j=0;j<len;j++)
    {
        res = res+(((int)(*r)-48) * pow(10,pot));
        r++;
        pot--;
    }
    }
    else
    {
        pot = len-2;
        r++;
        for(j=1;j<len;j++)
        {
            res = res+(((int)(*r)-48) * pow(10,pot));
            r++;
            pot--;
        }
    }
    return res;
}
int main()
{
    char str[129];
    while(scanf("%s",str)!=EOF)
    {
        int tamanho=strlen(str);
        long int number;
        number=string2int(str);
        if(str[0]!='-')
        {
            printf("%ld %ld\n",number,number*2);
        }
        else
        {
            printf("-%ld -%ld\n",number,number*2);
        }
    }
    return 0;
}