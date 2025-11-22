#include<stdio.h>
#include<math.h>
int main ()
{
    char angulo;
    double grau,grau2;
    double sen,cosseno;
    scanf("%c%lf",&angulo,&grau);
    if(angulo=='c')
    {
        if(grau>=0&&grau<=90)
        {
            grau2=grau/180;
            cosseno = cos(grau2*3.14);
            printf("%d\n",(int)grau);
            printf("%.3lf\n",cosseno);
            printf("SINAL IGUAL\n");
        }
        else if(grau>90&&grau<=180)
        {
            grau = 180 - grau;
            grau2=grau/180;
            cosseno = cos(grau2*3.14);
            printf("%d\n",(int)grau);
            printf("%.3lf\n",cosseno);
            printf("SINAL INVERTIDO\n");
            
        }
        else if(grau>180&&grau<=270)
        {
            grau = grau - 180;
            grau2=grau/180;
            cosseno = cos(grau2*3.14);
            printf("%d\n",(int)grau);
            printf("%.3lf\n",cosseno);
            printf("SINAL INVERTIDO\n");
        }
        else if(grau>270&&grau<=360)
        {
            grau = 360 - grau;
            grau2=grau/180;
            cosseno = cos(grau2*3.14);
            printf("%d\n",(int)grau);
            printf("%.3lf\n",cosseno);
            printf("SINAL IGUAL\n");

        }
    }
    else if(angulo=='s')
    {
        if(grau>=0&&grau<=90)
        {
            grau2=grau/180;
            sen = sin(grau2*3.14);
            printf("%d\n",(int)grau);
            printf("%.3lf\n",sen);
            printf("SINAL IGUAL\n");
        }
        else if(grau>90&&grau<=180)
        {
            grau = 180 - grau;
            grau2=grau/180;
            sen = sin(grau2*3.14);
            printf("%d\n",(int)grau);
            printf("%.3lf\n",sen);
            printf("SINAL IGUAL\n");
            
        }
        else if(grau>180&&grau<=270)
        {
            grau = grau - 180;
            grau2=grau/180;
            sen = sin(grau2*3.14);
            printf("%d\n",(int)grau);
            printf("%.3lf\n",sen);
            printf("SINAL INVERTIDO\n");
        }
        else if(grau>270&&grau<=360)
        {
            grau = 360 - grau;
            grau2=grau/180;
            sen = sin(grau2*3.14);
            printf("%d\n",(int)grau);
            printf("%.3lf\n",sen);
            printf("SINAL IGUAL\n");

        }

    }


    return 0;
}