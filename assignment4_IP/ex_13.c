#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* endereco(int num,char* ch)
{
   int k;
   char s[500];
   char* m;
   if(num==0||ch==NULL)
   {
    return NULL;
   }
   else 
   {
    for(k=0;k<num;k++)
    {
        s[k]=*ch;
        ch++;
    }
    s[num]='\0';//terminar o string
    m = s;
    return m;
    free(m);
   }
}
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int i;
    char ch[500];
    int num;
    char*p;
    int j;
    //int tamanho;
    for(i=0;i<n;i++)
    {
        scanf("%d ",&num);
        getchar();
        fgets(ch,sizeof(ch),stdin);
        //tamanho = strlen(ch);
        //printf("%d\n",tamanho);
        p=endereco(num,ch);
        if(p!=NULL)
        {
            printf("%s",p);
            if(i<n-1)
            {
                printf("\n");
            }
        }
        else
        {
            printf("\n");
        }
        
    }
    return 0;
}