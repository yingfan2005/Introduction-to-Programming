#include<stdio.h>
#include<stdlib.h>
typedef char nome_c[1000+1];
typedef char nome_a[1000+1];
struct curso
{
    int codigo;
    float valor;
    nome_c nome_curso;
};
typedef struct curso Curso;
struct aluno
{
    nome_a nome_aluno;
    int codigo;
    int credito;
};
typedef struct aluno Aluno;
int main()
{
    int n,m;
    int i,j;
    scanf("%d",&n);
    getchar();//Attention
    Curso *p;
    p=(Curso *)calloc(n,sizeof(Curso));
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i].codigo);
        scanf("%f",&p[i].valor);
        getchar();
        scanf("%[^\n]",p[i].nome_curso);
        getchar();
    }
    scanf("%d",&m);
    getchar();
    Aluno *a;
    a=(Aluno *)calloc(m,sizeof(Aluno));
    for(i=0;i<m;i++)
    {
       scanf("%[^\n]",a[i].nome_aluno);
       scanf("%d",&a[i].codigo);
       scanf("%d",&a[i].credito);
       getchar();
       for(j=0;j<n;j++)
       {
        if((a[i].codigo)==(p[j].codigo))
        {
            break;
        }
       }
       printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n",a[i].nome_aluno,p[j].nome_curso,a[i].credito,p[j].valor,((a[i].credito)*(p[j].valor)));

    }

    free(p);
    free(a);
    return 0;
}