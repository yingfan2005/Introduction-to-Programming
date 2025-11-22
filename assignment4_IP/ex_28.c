#include<stdio.h>
#include<math.h>
int my_strlen(const char*m)
{
    int count = 0;
    while(*m!='\0')
    {
        count ++;
        m++;
    }
    return count;
}
int achar_ponto(const char *n)
{
    while(*n!='\0')
    {
        if(*n=='.')
        {
            return 1;
            break;
        }
        n++;
    }
    if(*n=='\0')
    {
        return 0;
    }

}

double string2double(const char* str)
{
    const char*p=str;
    const char *f=str;
    const char*j=str;
    int parte_fracionaria=0;
    int parte_int=0;
    int x;
    double alvo=0;
    int size;
    int v;
    int digitos;
    int y;
    int r;
    size=my_strlen(p);
    //printf("%d\n",size);
    if(*p=='-')
    {
        size = size-1;
        p++;
        f++;
    }
    int z = size;
    x = achar_ponto(p);
    //printf("%d\n",x);
    if(x==0)
    {
        while(size>1)
        {
            alvo = (alvo+(*p-48)*pow(10,(size-1)))*1.0;
            p++;
            size--;
        }
        alvo =(alvo+(*p-48))*1.0;
    }
    else
    {
        while(*p!='.')
        {
            parte_int++;
            p++;
        }
        //printf("%d\n",parte_int);
        parte_fracionaria=((z-parte_int)-1);
        //printf("%d\n",parte_fracionaria);
        digitos=parte_int+parte_fracionaria;
        r=digitos;
        //printf("%d\n",r);
        for(y=0;y<=digitos;y++)
        {
            if(*f!='.')
            {
                if(r>1)
                {
                    alvo = (alvo+(*f-48)*pow(10,r-1))*1.0;
                    r--;
                }
                else
                {
                    alvo=(alvo+(*f-48))*1.0;
                }
            }
            f++;
        }
        //printf("%d\n",alvo);
        alvo=alvo/pow(10,parte_fracionaria)*1.0;

    }
    if(*j=='-')
    {
        return alvo*(-1);
    }
    else
    {
        return alvo;
    }
}
int main()
{
    char str[129];
    double num;
    while(scanf("%s",str)!=EOF)
    {
        getchar();
        num = string2double(str);
        printf("%.3lf %.3lf\n",num,num+num);
    }
    return 0;
}