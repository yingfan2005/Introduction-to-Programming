#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    char ch[201];
    int x;
    for(x=0;x<n;x++)
    {
        scanf("%[^\n]",ch);
        getchar();
        char*p=ch;
        int arr[26]={0};
        int num = 0;
        int i;
        int j;
        int max=0;
        char c;
            while(*p!='\0')
        {
            if(*p>='A'&&*p<='Z')
            {
                *p=*p+('a'-'A');
            }
            num=*p-'a';
            arr[num]++;
            p++;
        }
        for(i=0;i<26;i++)
        {
            if(arr[i]>=max)
            {
                max=arr[i];
            }
        }
        for(j=0;j<26;j++)
        {
            if(arr[j]==max)
            {
                c='a'+j;
                printf("%c",c);
            }
        }
        printf("\n");
    }
    


    return 0;
}