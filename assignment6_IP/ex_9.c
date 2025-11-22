#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct fracao
{
    int a;
    char ch;
    int b;
    double res;
};
typedef struct fracao fra;
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    int i;
    int count;
    int q=0;
    int w=0;
    char *x;
    char *y;
    int e;
    int f;
    int z;
    for(i=0;i<n;i++)
    {
        z=0;
        char c[10000+1];
        count=0;
        q=0;
        scanf("%[^\n]",c);
        getchar();
        x=c;
        y=c;
        while(*x!='\0')
        {
            if(*x=='/')
            {
                count++;
            }
            x++;
        }
        fra*p=NULL;
        p=(fra *)calloc(count,sizeof(fra));
        int j=0;
        while(j<count-1)
        {
            char *ch1=NULL;
            ch1=(char*)calloc(20,1);
            q=0;
           while(*y!='/')
            {
                ch1[q]=*y;
                q++;
                y++;
            }
            ch1[q]='\0';
            //printf("%s\n",ch1);
            if(*y=='/')
            {
                p[j].a=atoi(ch1);
                p[j].ch='/';
                y++;
            }
            //printf("%d\n",p->a);
            char *ch2=NULL;
            ch2=(char *)calloc(20,1);
            w=0;
            while(*y!=' ')
            {
                ch2[w]=*y;
                y++;
                w++;
            }
            ch2[w]='\0';
            //printf("%s\n",ch2);
            if(*y==' ')
            {
                p[j].b=atoi(ch2);
                y++;
            }
            //printf("%d\n",p->b);
            p[j].res=((double)(p[j].a)/(p[j].b));
            //printf("%lf\n",p[j].res);
            //printf("%d %c %d %lf\n",p[j].a,p[j].ch,p[j].b,p[j].res);
            j++;
            free(ch1);
            free(ch2);
        }
            char *ch1=NULL;
            ch1=(char*)calloc(20,1);
            q=0;
           while(*y!='/')
            {
                ch1[q]=*y;
                q++;
                y++;
            }
            ch1[q]='\0';
            //printf("%s\n",ch1);
            if(*y=='/')
            {
                p[j].a=atoi(ch1);
                p[j].ch='/';
                y++;
            }
            char *ch2=NULL;
            ch2=(char *)calloc(20,1);
            w=0;
            while(*y!='\0')
            {
                ch2[w]=*y;
                y++;
                w++;
            }
            ch2[w]='\0';
            //printf("%s\n",ch2);
            if(*y=='\0')
            {
                p[j].b=atoi(ch2);
            }
            p[j].res=((double)(p[j].a)/(p[j].b));
            //printf("%lf\n",p[j].res);
            //printf("%d %c %d %lf\n",p[j].a,p[j].ch,p[j].b,p[j].res);
            free(ch1);
            free(ch2);
            printf("Caso de teste %d\n",i+1);
            for(e=0;e<count-1;e++)
            {
                for(f=e+1;f<count;f++)
                {
                    if(p[e].res==p[f].res)
                    {
                        z++;
                        printf("%d%c%d equivalente a %d%c%d\n",p[e].a,p[e].ch,p[e].b,p[f].a,p[f].ch,p[f].b);
                    }
                }
            }
            if(z==0)
            {
                printf("Nao ha fracoes equivalentes na sequencia\n");
            }
            free(p);
    }
    return 0;
}