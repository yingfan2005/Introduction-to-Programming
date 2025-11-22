#include<stdio.h>
#include<string.h>
int achar_indice(char c,char*ch)
{
    int j;
    char *h;
    h = ch;
    for(j=0;j<500;j++)
    {
        if(*h==c)
        {
            break;
        }
        h++;
    }
    if(j==500)
    {
        return -1;
    }
    else
    {
        return j;//como j comeca com 0,aqui returna j mesmo
    }
    
}
int main()
{
    int n;
    scanf("%d",&n);
    getchar();//consumir o \n depois do numero
    int i;
    char c;
    char ch[500];
    int indice;
    for(i=0;i<n;i++)
    {
        scanf("%c",&c);
        getchar();
        fgets(ch,sizeof(ch),stdin);
        indice=achar_indice(c,ch);
        if(indice==-1)
        {
            printf("Caractere %c nao encontrado.\n",c);
        }
        else
        {
            printf("Caractere %c encontrado no indice %d da string.\n",c,indice);
        }
    }
    return 0;
}