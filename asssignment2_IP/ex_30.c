/*#include<stdio.h>
int N_Fatorial(int n)
{
    int a = 0;
    int b = 1;
    for(a=n;a>0;a--)
    {
        b = b * a;
    }
    return b;
}
int P_Fatorial(int n)
{
    int z = 0;
    for(z=n;z>=0;z--)
    {
        
    }
}
int main ()
{
    int i,n,p,p_fatorial,n_fatorial,n_menos_p_fatorial,x,comeco,fim;
    scanf("%d %d",&comeco,&fim);
    p_fatorial= 1;
    for(n=comeco;n<=fim;n++)
    {
        n_fatorial=N_Fatorial(n);
        p_fatorial = P_Fatorial(n);
        for(p=0;p<=n;p++)
    {


    }
    printf("\n");
    }
    return 0;
}*/
#include<stdio.h>
int N_Fatorial(int n)
{
    int i,s;
    s = 1;
    for(i=1;i<=n;i++)
    {
        s = s*i;
    }
    return s;
}
int P_Fatorial(int p)
{
    int a,b;
    b = 1;
    for(a=1;a<=p;a++)
    {
        b = b*a;
    }
    return b;
}
int N_Menos_P_Fatorial(int n,int p)
{
    int c,x,y;
    c = n - p;
    y = 1;
    for(x=1;x<=c;x++)
    {
        y = y*x;
    }
    return y;

}
int main ()
{
    int inicio,fim,n,p,n_fatorial,p_fatorial,n_menos_p_fatorial,res;
    scanf("%d %d",&inicio,&fim);
    for(n=inicio;n<=fim;n++)
    {
        for(p=0;p<=n;p++)
        {
            if(n==p)
            {
                printf("1");
            }
            else if(p==0)
            {
                printf("1,");
            }
            
            else
            {
                n_fatorial=N_Fatorial(n);
                p_fatorial=P_Fatorial(p);
                n_menos_p_fatorial=N_Menos_P_Fatorial(n,p);
                res=n_fatorial/(p_fatorial*n_menos_p_fatorial);
                printf("%d,",res);
            }
        }
        printf("\n");
    }

    return 0;
}