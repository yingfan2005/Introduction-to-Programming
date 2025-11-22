#include<stdio.h>
#include<string.h>
int main()
{
    int vezes;
    scanf("%d",&vezes);
    char stringA[10000];
    char stringB[10000];
    int x;
    for(x=0;x<vezes;x++)
    {
    scanf("%s %s",stringA,stringB);
    long long int tamanho=strlen(stringA);
    long long int i;
    long long int operacoes=0;
    for(i=0;i<tamanho;i++)
    {
        if(stringA[i]!=stringB[i])
        {
            if(stringA[i]<stringB[i])
            {
                operacoes+=(stringB[i]-stringA[i]);
            }
            else if(stringA[i]>stringB[i])
            {
                operacoes+=(('z'-stringA[i]+stringB[i]-'a')+1);
            }
        }
    }
    printf("%lld\n",operacoes);
    }

    return 0;
}