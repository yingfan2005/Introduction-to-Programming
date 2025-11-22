#include<stdio.h>
#include<string.h>
/*int main()
{
    char ch[5100];
    char *p = ch;
    char letra_alvo='\0';
    char letra_atual='\0';
    int quant_aliteracao=0;
    int count = 0;
    while(scanf("%[^\n]",ch)!=EOF)
    {
        getchar();
        count = 0;
        p = ch;
        letra_alvo='\0';
        letra_atual='\0';
        quant_aliteracao=0;
       while(*p!='\0')
       {
        if(letra_alvo=='\0')
        {
            letra_alvo=*p;
            letra_atual=*p;
        }
        p++;
        if(*p==' ')
        {
            letra_atual=*(p+1);
            if((int)letra_atual==(int)letra_alvo||(int)letra_atual==(int)letra_alvo+32||(int)letra_atual==(int)letra_alvo-32)
            {
                count ++;
            }
            else
            {
                if(count>0)
                {
                    quant_aliteracao++;
                    letra_alvo=*(p+1);
                }
                else
                {
                    letra_alvo=*(p+1);
                }
            }
        }

       }
       printf("%d\n",quant_aliteracao)


    }
    return 0;
}*/
int main()
{
    char ch[5100];
    char *p = ch;
    char letra_alvo='\0';
    char letra_atual='\0';
    int quant_aliteracao=0;
    int count = 0;
    int nova_palavra;
    int seq_atual=0;
    while(scanf("%[^\n]",ch)!=EOF)
    {
        getchar();
        count = 0;
        p = ch;
        letra_alvo='\0';
        letra_atual='\0';
        quant_aliteracao=0;
        nova_palavra=1;
        seq_atual=0;//importante!!! reiniciar

       while(*p!='\0')
       {
        if(nova_palavra==1)
        {
            letra_atual=*p;
            if(letra_alvo=='\0')
            {
                letra_alvo=letra_atual;
            }
            else if((int)letra_atual==(int)letra_alvo||(int)letra_atual==(int)letra_alvo+32||(int)letra_atual==(int)letra_alvo-32)
            {
                if(seq_atual==0)
                {
                    quant_aliteracao++;
                }
                seq_atual++;
            }
            else
            {
                letra_alvo=letra_atual;
                seq_atual=0;
            }
            nova_palavra=0;
        }
        else if(*p==' ')
        {
            nova_palavra=1;
        }
        p++;
       }
       printf("%d\n",quant_aliteracao);


    }
    return 0;
}