#include<stdio.h>
int main()
{
    int comeco,fim,i,num,n_fatorial,a,q,s,p_fatorial,n_menos_p_fatorial,b,c;
    scanf("%d%d",&comeco,&fim);
    //loop para as linhas
    for(i=comeco;i<=fim;i++)
    {
        n_fatorial = 1;
        for(a=1;a<=i;a++)
        {
            n_fatorial=n_fatorial*a;
           // printf("%d\n",n_fatorial);
        }
        //quantidade de elementos em cada linha
        for(s=0;s<=i;s++)
        {
            p_fatorial = 1;
            for(q=1;q<=s;q++)
            {
                p_fatorial=p_fatorial*q;

            }
            b = i - s;
            n_menos_p_fatorial=1;
            for(c=1;c<=b;c++)
            {
                n_menos_p_fatorial=n_menos_p_fatorial*c;
            }
            num=n_fatorial/(p_fatorial*n_menos_p_fatorial);
            if(s==0)
            {
                printf("%d",num);
            }
            else
            {
                printf(",%d",num);
            }
        }
        printf("\n");
    
    }

    return 0;
}