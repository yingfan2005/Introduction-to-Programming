#include<stdio.h>
#include<string.h>
int achar_string(char *target,char *p)
{
    int count=0;
    char* inicio= p;
    int rep=0;
    char *m;
    int i =strlen(target);
    int x = 1;
    while(*p!='\0')
    {
        m=target;
        if((*p==*m)&&(*(p+i)==' '||*(p+i)=='.'||*(p+i)==','||*(p+i)=='!'||*(p+i)=='?'||*(p+i)==')'||*(p+i)==']'||*(p+i)=='}'||*(p+i)=='\0')&&(p==inicio||*(p-1)==' '||*(p-1)=='.'||*(p-1)==','||*(p-1)=='!'||*(p-1)=='?'||*(p-1)=='('||*(p-1)=='['||*(p-1)=='{'))
        {
            
            while(*p==*m&&*m!='\0')
            {
                count++;
                p++;
                m++;
            }
            if(count==strlen(target))
        {
            rep++;
        }
        }
        else
        {
            p++;
            count=0;
        }
    }
    
    
    return rep;
    
}
int main()
{
    char ch[2049];
    scanf("%[^\n]",ch);
    getchar();
    char*p=ch;
    int quant_string=0;
    int z;
    char target[2049];
    int flag=0;
    while(*p!='\0')
    {
        if((*p==' '||*p=='.'||*p==','||*p=='!'||*p=='?'||*p==')'||*p==']'||*p=='}')&&*(p-1)!=' '&&*(p-1)!='.'&&*(p-1)!=','&&*(p-1)!='!'&&*(p-1)!='?'&&*(p-1)!=')'&&*(p-1)!=']'&&*(p-1)!='}')
        {
            
            quant_string++;

        }
        p++;
    }
    if(*(p-1)!=' '&&*(p-1)!='.'&&*(p-1)!=','&&*(p-1)!='!'&&*(p-1)!='?'&&*(p-1)!=')'&&*(p-1)!=']'&&*(p-1)!='}')
    {
        quant_string++;
    }//para casso que termina com '\0'
    int arr[quant_string];
    //printf("%d\n",quant_string);
    p=ch;
    for(z=0;z<quant_string;z++)
    {
        int m =0;
        while(z>=0)
        {
            if(*p!=' '&&*p!='.'&&*p!=','&&*p!='!'&&*p!='?'&&*p!=')'&&*p!=']'&&*p!='}')
            {
            target[m]=*p;
            m++;
            p++;
            flag=1;
            }
            else 
            {
                p++;
            }
            if(flag==1&&*p==' '||*p=='.'||*p==','||*p=='!'||*p=='?'||*p==')'||*p==']'||*p=='}')
            {
                target[m]='\0';
                flag=0;
                break;
            }
        }
        arr[z]=achar_string(target,ch);
        printf("(%s)%d\n",target,arr[z]);
        p++;
    }
    return 0;
}