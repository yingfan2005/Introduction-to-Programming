#include<stdio.h>
#include<stdlib.h>
typedef char Nome[200+1];
struct Aluno
{
    int mat,dia,mes,ano;
    Nome nome;
};
typedef struct Aluno aluno;
int ComparaDataNasc(aluno *p,aluno *t)
{
    //printf("%d %d\n",soma1,soma2);
    if(p->ano<t->ano)
    {
        return 1;
    }
    else if(p->ano==t->ano)
    {
        if(p->mes<t->mes)
    {
        return 1;
    }
    else if(p->mes==t->mes)
    {
        if(p->dia<=t->dia)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    }
    else
    {
        return 0;
    }
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    aluno *p=NULL;
    p=(aluno *)calloc(n,sizeof(aluno));
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i].mat);
        scanf("%d",&p[i].dia);
        getchar();
        scanf("%d",&p[i].mes);
        getchar();
        scanf("%d",&p[i].ano);
        getchar();
        scanf("%[^\n]",p[i].nome);
        getchar();
    }
    int *x=NULL;
    x=(int *)calloc(n,sizeof(int));
    int *z=NULL;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            x[j]+=ComparaDataNasc(&p[i],&p[j]);
        }
    }
    for(i=n;i>0;i--)
    {
        for(j=0;j<n;j++)
        {
            if(x[j]==i)
            {
                printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n",p[j].mat,p[j].nome,p[j].dia,p[j].mes,p[j].ano);
            }
        }
    }
    free(p);
    free(x);
    return 0;
}