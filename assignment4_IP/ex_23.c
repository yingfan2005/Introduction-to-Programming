#include<stdio.h>
#include<string.h>
int main()
{
    char ch_original[51];
    char ch[51];
    int j;
    int tam;
    int x;
    int flag=1;//maiuscula
    while(scanf("%[^\n]",ch_original)!=EOF)
    {
        getchar();
        char*s=ch_original;
        x=0;
        while(*s!='\0'&&x<50)//para nao acessar memoria indevida
        {
            ch[x]=*s;
            s++;
            x++;
        }
        ch[x]='\0';//terminar o string com '\0'
        tam=strlen(ch_original);
        for(j=0;j<tam;j++)
        {
            if(ch[j]!=' ')
            {
                if(flag)
                {
                    if(ch[j]>='a'&&ch[j]<='z')
                    {
                        ch[j]-=('a'-'A');
                    }
                }
                else
                {
                    if(ch[j]>='A'&&ch[j]<='Z')
                    {
                        ch[j]+=('a'-'A');
                    }
                }
                flag=!flag;
            }
        }
        printf("%s\n",ch);
        flag = 1;
    }
    return 0;
}
//Usar flag!!!