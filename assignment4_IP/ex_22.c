#include<stdio.h>
#include<string.h>

void str_clean(char *strp,char *clrp)
{
    char *w=strp;
    char *u=clrp;
    char *wn=strp;
    char *m=strp;
    int tamanho_clrp=0;
    int tamanho_strp=0;
    int i;
    int j;
    int y;
    int tamanho_novo;
    int z;
    int count=0;
    while(*clrp!='\0')
    {
        tamanho_clrp ++;
        clrp++;
    }//tamanho de clr;
    //printf("%d\n",tamanho_clrp);
    while(*m!='\0')
    {
        tamanho_strp++;
        m++;
    }//tamanho de str;
    //printf("%d\n",tamanho_strp);
    for(i=0;i<tamanho_clrp;i++)
    {
        w=wn;
        for(j=0;j<tamanho_strp;j++)
        {
            if(*u==*w)
            {
                *w='?';
                count ++;
            }
            w++;
        }
        u++;
    }//achar os caracteres que sao para serem eliminados 
    char *o=strp;
    tamanho_novo=tamanho_strp-count;
    //printf("%d\n",tamanho_novo);
    char new[tamanho_novo+1];
    int q=0;
    for(y=0;y<=tamanho_strp;y++)
    {
        if(*o!='?')
        {
            new[q]=*o;
            q++;
        }
        if(y==tamanho_strp)
        {
            new[q]='\0';
        }
        o++;
    }//criar um vetor novo para receber os caracteres sem pegar os que serão eliminados
    z=0;
    while(new[z]!='\0')
    {
        *strp=new[z];
        z++;
        strp++;
    }//colocar os novos caracteres na str original
    while(*strp!='\0')
    {
        *strp=' ';
        strp++;
    }//preencher o restante do espaço com espaço
    



}
int main()
{
    char str[257];
    char clr[257];
    scanf("%[^\n]%*c",str);
    scanf("%[^\n]%*c",clr);
    str_clean(str,clr);
    printf("%s\n",str);
    return 0;
}