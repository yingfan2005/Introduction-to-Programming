#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int i;
    scanf("%d",&n);
    getchar();
    char ch[1001];
    int j;
    int k=0;
    int z;
    int count = 0;
    char tmp;
    for(i=0;i<n;i++)
    {
        fgets(ch,sizeof(ch),stdin);
        count = 0;
        for(j=0;ch[j]!='\0';j++)
        {
            //primeiro passo
            if((ch[j]>=65&&ch[j]<=90)||(ch[j]>=97&&ch[j]<=122))
            {
                ch[j]=ch[j]+3;
            }
            count ++;
        }
        //segundo passo
        int left=0;
        int right=count-2;
        while(left<right)
        {
            tmp = ch[left];
            ch[left]=ch[right];
            ch[right]=tmp;
            left++;
            right--;
        }//jeito bom para fazer inversão

        //terceiro passo
        int comeco = (count-1)/2;
        int end = count-2;
        while(comeco<=end)
        {
            ch[comeco]=(ch[comeco]-1);
            comeco ++;
        }//jeito bom para mudança de conteúdo
        printf("%s\n",ch);

    }

    return 0;
}