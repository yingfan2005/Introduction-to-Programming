    #include<stdio.h>
    #include<string.h>
    #define MAX_WORDS 200
    #define MAX_WORD_LEN 64+1
    int str_split(char*str,char m[][MAX_WORD_LEN],char*sep)
    {
        int i=0;
        int x;
        int flag=1;
        int count=0;
        int y;
        int z=1;
        int tam=strlen(sep);
        char *s=sep;//reiniciar 
        while(*str!='\0')
        {
            for(x=0;x<MAX_WORD_LEN;x++)
            {
                flag=1;
                count=0;
                while(flag)
                {
                    count=0;
                    s=sep;
                    for(y=0;y<tam;y++)
                    {
                        if(*str!=*s)
                        {
                            count++;
                            s++;
                        }
                    }
                    if(count==tam)
                    {
                        //printf("%d ",i);
                        //printf("%d ",x);
                        m[i][x]=*str;
                        //printf("%c ",*str);
                        if(*(str+1)!='\0')
                        {
                            str++;
                        }
                        else
                        {
                            m[i][x+1]='\0';
                            i++;
                            str++;
                        }
                        
                        break;
                    }
                    else
                    {
                        if(*(str+1)!='\0')
                        {
                            str++;
                            flag=0;
                        }
                        else
                        {
                            m[i][x]='\0';
                            flag=0;
                        }
                    }
                }
                if(flag==0)
                {
                    m[i][x]='\0';
                    z=1;
                    while(z)
                    {
                        count=0;
                    s=sep;
                    for(y=0;y<tam;y++)
                    {
                        if(*str!=*s)
                        {
                            count++;
                            s++;
                        }
                    }
                    if(count==tam)
                    {
                        i++;
                        z=0;
                    }
                    else
                    {
                        str++;
                    }
                    }
                    
                }
                if(m[i][x]=='\0')
                {
                    break;
                }
            }
        }

        return i;
    }
    int main()
    {
        char str[12801];
        char sep[8];
        scanf("%[^\n]",str);
        getchar();
        scanf("%[^\n]",sep);
        getchar();
        char m[MAX_WORDS][MAX_WORD_LEN];
        int palavra=0;
        int max=0;
        int repeat=0;
        palavra=str_split(str,m,sep);
        int x,y;
        for(x=0;x<palavra;x++)
        {
            if(strlen(m[x])!=0)
            {
                printf("(%d)%s\n",(int)strlen(m[x]),m[x]);//imprimir cada linha
            }
            if(strlen(m[x])>=max)
            {
                max=strlen(m[x]);
            }
            
        }
        if(strlen(m[1])!=0)
        {
            for(x=0;x<palavra;x++)
        {
            if(strlen(m[x])==max)
            {
                repeat++;
            }
        }
        }
       if(repeat>0)
       {
         printf("%d\n",repeat);
       }
        return 0;
    }