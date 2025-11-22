#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char pais[24][15]={
        "brasil",
        "alemanha",
        "austria",
        "coreia",
        "espanha",
        "grecia",
        "estados-unidos",
        "inglaterra",
        "australia",
        "portugal",
        "suecia",
        "turquia",
        "argentina",
        "chile",
        "mexico",
        "antardida",
        "canada",
        "irlanda",
        "belgica",
        "italia",
        "libia",
        "siria",
        "marrocos",
        "japao"
    };
    char fala[24][23]={
        "Feliz Natal!",
        "Frohliche Weihnachten!",
        "Frohe Weihnacht!",
        "Chuk Sung Tan!",
        "Feliz Navidad!",
        "Kala Christougena!",
        "Merry Christmas!",
        "Merry Christmas!",
        "Merry Christmas!",
        "Feliz Natal!",
        "God Jul!",
        "Mutlu Noeller",
        "Feliz Navidad!",
        "Feliz Navidad!",
        "Feliz Navidad!",
        "Merry Christmas!",
        "Merry Christmas!",
        "Nollaig Shona Dhuit!",
        "Zalig Kerstfeest!",
        "Buon Natale!",
        "Buon Natale!",
        "Milad Mubarak!",
        "Milad Mubarak!",
        "Merii Kurisumasu!"
    };
    char input[100];
    while(scanf("%s",input)!=EOF)
    {
    int i;
    int flag=0;
    for(i=0;i<24;i++)
    {
        if(strcmp(pais[i],input)==0)
        {
            printf("%s\n",fala[i]);
            flag=1;
            break;

        }
    }
    if(flag==0)
    {
        printf("-- NOT FOUND --\n");
    }
    }
    return 0;
}