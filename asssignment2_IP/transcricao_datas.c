#include<stdio.h>
int main ()
{
    int data,dia,mes,ano;
    scanf("%d",&data);
    dia = data/1000000;
    mes = (data-dia*1000000)/10000;
    ano = data-dia*1000000-mes*10000;
    if(mes<=8&&mes%2==0&&dia>0&&dia<=30&&ano>0&&mes!=8)
    {
        switch(mes)
    {
        case 2:
        if(dia<=28)
        {
            printf("%d de fevereiro de %d\n",dia,ano);
            break;
        }
        else if(dia>28)
        {
            printf("Data invalida!\n");
            break;
        }
        break;
        case 4:
        printf("%d de abril de %d\n",dia,ano);
        break;
        case 6:
        printf("%d de junho de %d\n",dia,ano);
        break;
    }
    }
    else if(mes<=7&&mes%2!=0&&dia>0&&dia<=31&&ano>0)
    {
        switch(mes)
        {
            case 1:
            printf("%d de janeiro de %d\n",dia,ano);
            break;
            case 3:
            printf("%d de marco de %d\n",dia,ano);
            break;
            case 5:
            printf("%d de maio de %d\n",dia,ano);
            break;
            case 7:
            printf("%d de julho de %d\n",dia,ano);
            break;
          
        }
    }
    else if(mes==8&&dia<=31&&dia>0&&ano>0)
    {
        printf("%d de agosto de %d\n",dia,ano);
    }
    else if(mes==10&&dia<=31&&dia>0&&ano>0)
    {
        printf("%d de outubro de %d\n",dia,ano);
    }
    else if(mes==12&&dia<=31&&dia>0&&ano>0)
    {
        printf("%d de dezembro de %d\n",dia,ano);
    }
    else if(mes==9&&dia<=30&&dia>0&&ano>0)
    {
        printf("%d de setembro de %d\n",dia,ano);
    }
    else if(mes==11&&dia<=30&&dia>0&&ano>0)
    {
        printf("%d de novembro de %d\n",dia,ano);
    }

    else 
    {
        printf("Data invalida!\n");
    }

    return 0;
}