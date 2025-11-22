#include<stdio.h>
#include<stdlib.h>
struct fracao
{
    int num;
    char c;
    int den;
};
typedef struct fracao fracao;
fracao le_fracao(void)
{
    fracao f;
    scanf("%d%c%d%*c",&f.num,&f.c,&f.den);
    return f;//tem return!!!
}
int main()
{
    int n;
    scanf("%d",&n);
    int i;
    int m;
    for(i=0;i<n;i++)
    {
        scanf("%d%*c",&m);
        int j;
        int q,w;
        double * x;
        x=(double *)calloc(50,sizeof(double));
        int *y;
        y=(int *)calloc(50,sizeof(int));
        int *z;
        z=(int *)calloc(50,sizeof(int));
        int flag=0;
        for(j=0;j<m;j++)
        {
            fracao fra=le_fracao();
            double num=fra.num;
            y[j]=num;
            double den=fra.den;
            z[j]=den;
            double res=num/den;
            x[j]=res;
        }
        printf("Caso de teste %d\n",i+1);
        for(q=0;q<m-1;q++)
        {
            for(w=q+1;w<m;w++)
            {
                if(x[q]==x[w])
                {
                    printf("%d/%d equivalente a %d/%d\n",y[q],z[q],y[w],z[w]);
                    flag=1;
                }
            }
        }
        if(flag==0)
        {
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
        free(x);
        free(y);
        free(z);
    }
    return 0;
}