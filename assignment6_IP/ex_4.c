#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct Vetor
{
    double a1,a2,a3,a4,norma;
};
typedef struct Vetor v;
int main()
{
    int n;
    scanf("%d",&n);
    v *matriz;
    matriz=(v *)calloc(n,sizeof(v));
    int i;
    int x,y;
    double tmp;
    for(i=0;i<n;i++)
    {
        scanf("%lf%lf%lf%lf",&matriz[i].a1,&matriz[i].a2,&matriz[i].a3,&matriz[i].a4);
        matriz[i].norma=sqrt((matriz[i].a1)*(matriz[i].a1)+(matriz[i].a2)*(matriz[i].a2)+(matriz[i].a3)*(matriz[i].a3)+(matriz[i].a4)*(matriz[i].a4));
        //printf("%.2lf\n",matriz[i].norma);
    }
    for(x=0;x<n-1;x++)
        {
            for(y=x+1;y<n;y++)
            {
                if((matriz[x].norma)>(matriz[y].norma))
                {
                    tmp=(matriz[x].norma);
                    (matriz[x].norma)=(matriz[y].norma);
                    (matriz[y].norma)=tmp;
                    tmp=(matriz[x].a1);
                    (matriz[x].a1)=(matriz[y].a1);
                    (matriz[y].a1)=tmp;
                     tmp=(matriz[x].a2);
                    (matriz[x].a2)=(matriz[y].a2);
                    (matriz[y].a2)=tmp;
                     tmp=(matriz[x].a3);
                    (matriz[x].a3)=(matriz[y].a3);
                    (matriz[y].a3)=tmp;
                     tmp=(matriz[x].a4);
                    (matriz[x].a4)=(matriz[y].a4);
                    (matriz[y].a4)=tmp;

                }
            }
        }
        for(x=0;x<n;x++)
        {
            printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n",matriz[x].a1,matriz[x].a2,matriz[x].a3,matriz[x].a4,matriz[x].norma);
        }
    free(matriz);
    return 0;
}