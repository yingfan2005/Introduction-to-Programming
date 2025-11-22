#include<stdio.h>
int my_strlen(char* ch)
{
    int count = 0;
    while(*ch!='\0')
    {
        count ++;
        ch ++;
    }
    return count;
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int tamanho;
    char ch[5];
    char ch1;
    char ch2;
    char ch3;
    int j;
    int c = 0;
    for(i=0;i<n;i++)
    {
        scanf("%s",ch);
        tamanho=my_strlen(ch);
        if(tamanho==3)
        {
            ch1=ch[0];
            ch2=ch[1];
            ch3=ch[2];
            if((ch1=='o'&&ch2=='n')||(ch1=='o'&&ch3=='e')||(ch2=='n'&&ch3=='e'))
            {
                printf("1\n");
            }
            else if((ch1=='t'&&ch2=='w')||(ch1=='t'&&ch3=='o')||(ch2=='w'&&ch3=='o'))
            {
                printf("2\n");
            }
        }
        else if(tamanho==5)
        {
           for(j=0;j<5;j++)
           {
            if(ch[j]=='t'||ch[j]=='h'||ch[j]=='r'||ch[j]=='e')
            {
                c++;
            }
           }
           if(c>=4)
           {
            printf("3\n");
           }
        }
    }
    return 0;
}