#include<stdio.h>
#include<string.h>
int main()
{
    int vezes;
    scanf("%d",&vezes);
    int i;
    int B;
    int E;
    int j;
    int m;
    int tamanho;
    char ch[6];
    int y;
    for(i=0;i<vezes;i++)
    {
        scanf("%d %d",&B,&E);
        //ordem original
        for(j=B;j<=E;j++)
        {
            sprintf(ch,"%d",j);
            printf("%s",ch);
            
        }
        for(m=E;m>=B;m--)
        {
            sprintf(ch,"%d",m);
            //printf("%ld",strlen(ch));
            tamanho=strlen(ch);
            //ch[tamanho]='\0';
            for(y=tamanho-1;y>=0;y--)
            {
                printf("%d",ch[y]-48);
            }

        }
        printf("\n");
    }
    return 0;
}