#include<stdio.h>
int main ()
{
    long matricula;
    double NF,MP,ML,NT,np1,np2,np3,np4,np5,np6,np7,np8,l1,l2,l3,l4,l5,tf;
    int ch;
    while(1)
    {
        scanf("%ld",&matricula);
        if(matricula!=-1)
        {
            scanf("%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %d",&np1,&np2,&np3,&np4,&np5,&np6,&np7,&np8,&l1,&l2,&l3,&l4,&l5,&tf,&ch);
            MP = (np1+np2+np3+np4+np5+np6+np7+np8)/8;
            ML = (l1+l2+l3+l4+l5)/5;
            NT = tf;
            NF = 0.7*MP+0.15*ML+0.15*NT;
            if (NF>=6 && ch > 96)
            {
                printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: APROVADO\n",matricula,NF);
            }
            else if (NF<6 && ch >= 96)
            {
                printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n",matricula,NF);
            }
            else if(NF>=6 && ch < 96)
            {
                printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n",matricula,NF);
            }
            else if(NF < 6 && ch < 96)
            {
                printf("Matricula: %ld, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n",matricula,NF);
            }
        }
       else
       {
        break;
       }
    }


    return 0;
}