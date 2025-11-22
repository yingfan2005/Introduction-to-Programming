    #include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    char* determinar_prefixo(int tamanho,char* ch)
    {
        if(tamanho<=0||ch==NULL)
        {
            return NULL;
        }

            int tamanho_string;
            int t=strlen(ch);
            if(tamanho<t)
        {
            tamanho_string=tamanho;
        }
        else
        {
            tamanho_string=t;
        }
            char*prefixo=(char*)malloc(tamanho_string+1);
            if(prefixo==NULL)
            {
                return NULL;
            }
            strncpy(prefixo,ch,tamanho_string);
            prefixo[tamanho_string]='\0';
            return prefixo;
        
            
        
    }
    int main()
    {
        int n;
        scanf("%d",&n);
        getchar();
        int i;
        int tamanho;
        char ch[500];
        for(i=0;i<n;i++)
        {
            scanf("%d ",&tamanho);//muito imortanteeeeee,o enunciad pede para colocar o espaço
            fgets(ch,sizeof(ch),stdin);
            ch[strcspn(ch, "\n")] = '\0';
            char* prefixo=determinar_prefixo(tamanho,ch);
            if(prefixo!=NULL)
            {
                printf("%s\n",prefixo);
                free(prefixo);
            }
            else
            {
                printf("\n");
            }
        }
        return 0;
    }
