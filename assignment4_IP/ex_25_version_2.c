#include<stdio.h>


    void str_segment(const char* txt,const char * del,int * init,int * len)
    {
        int d;
        *init = 0;
        *len=0;
        while(txt[*init]!='\0')
        {
            d=0;
            while(del[d]!='\0')
            {
                if(txt[*init]==del[d])
                {
                    break;
                }
                d++;
            }
            if(del[d]!='\0')
        {
            (*init)++;
        }
        else
        {
            break;
        }
        }
        if(txt[*init]=='\0')
        {
            *init=-1;
            return;
        }
        *len=*init;
        while(txt[*len]!='\0')
        {
            d=0;
            while(del[d]!='\0')
            {
                if(txt[*len]==del[d])
                {
                    break;
                }
                d++;
            }
            if(del[d]!='\0')
            {
                break;
            }
            (*len)++;
        }
        *len=*len-*init;
    }
int main()
{
    int k,size;
    char txt[2049]="ola mundo";
    char str[128];    
    char *ptxt=txt;
    int i;
    scanf("%[^\n]%*c",txt);
    while(*ptxt!='\0')
    {
        str_segment(txt," .,!?()[]{}",&k,&size);
    if(k==-1)
    {
        break;
    }
    for(i=0;i<size;i++)
    {
        str[i]=ptxt[k+1];
    }
    str[i]='\0';
    printf("%s\n",str);
    ptxt=ptxt+size;    
    printf("Inicio:%d\n",k);
    printf("Tamanho:%d\n",size);


    }
}
