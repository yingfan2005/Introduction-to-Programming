#include<stdio.h>
#include<math.h>
/*int main()
{
    int n;
    int quant_dois;
    int i;
    int p;
    int j=0;
    int 
    while(scanf("%d",&n)!=EOF)
    {
        while(1)
        {

        }
        for(i=quant_dois;i>=0;i--)
        {
            p=pow(2,i);
            printf("%d",n/p);
            if(n/p!=0)
            {
                n = n-p;
            }
        }
        printf("\n");
    }
    return 0;
}*/
int Quant(int n)
{
    int j=0;
    int p_atual;
    int p_pro;
    while(1)
    {
        p_atual = pow(2,j);
        p_pro=pow(2,(j+1));
        if(n>=p_atual&&n<p_pro)
        {
            return j;
            break;
        }
        if(n==0)
        {
            return 0;
        }
        j ++;
        
    }
}
int main()
{
    int n;
    int qt_dois;
    int i;
    int pot;
    while(scanf("%d",&n)!=EOF)
    {
        qt_dois=Quant(n);
        //printf("%d\n",qt_dois);
        for(i=qt_dois;i>=0;i--)
        {
            pot=pow(2,i);
            //printf("%d\n",pot);
            printf("%d",n/pot);
            if(n/pot!=0)
            {
                n = n-pot;
            }
            
        }
        printf("\n");

    }
    return 0;
}