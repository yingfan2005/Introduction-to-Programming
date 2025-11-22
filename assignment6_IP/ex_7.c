#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Ponto
{
    float u,x,y,z;
};
typedef struct Ponto ponto;
int main()
{
    int n;
    int i;
    float soma;
    float res;
    scanf("%d",&n);
    getchar();
    ponto *p=NULL;
    p=(ponto *)calloc(n,sizeof(ponto));
    for(i=0;i<n;i++)
    {
        scanf("%f%f%f%f",&p[i].u,&p[i].x,&p[i].y,&p[i].z);
    }
    for(i=0;i<n-1;i++)
    {
        soma=pow((p[i].u)-p[i+1].u,2)+pow(p[i].x-p[i+1].x,2)+pow(p[i].y-p[i+1].y,2)+pow(p[i].z-p[i+1].z,2);
        res=sqrt(soma);
        printf("%.2f\n",res);
    }
    free(p);
    return 0;
}