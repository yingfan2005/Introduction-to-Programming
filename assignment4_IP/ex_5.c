#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    char ch[10001];//attention
    int letras = 0;
    int vogais = 0;
    int consoantes = 0;
    int j;
    for(i=0;i<=n;i++)
    {
        fgets(ch,sizeof(ch),stdin);
        letras = 0;
        vogais = 0;
        consoantes = 0;
        for(j=0;ch[j]!='\0';j++)
        {
            if((ch[j]>=65&&ch[j]<=90)||ch[j]>=97&&ch[j]<=122)
            {
                letras ++;
                if(ch[j]==65||ch[j]==69||ch[j]==73||ch[j]==79||ch[j]==85||ch[j]==97||ch[j]==101||ch[j]==105||ch[j]==111||ch[j]==117)
                {
                    vogais ++;
                }
                else
                {
                    consoantes ++;
                }
            }
        }
       if(i>0)//attention
       {
        printf("Letras = %d\n",letras);
        printf("Vogais = %d\n",vogais);
        printf("Consoantes = %d\n",consoantes);
       }
    }
    return 0;
}