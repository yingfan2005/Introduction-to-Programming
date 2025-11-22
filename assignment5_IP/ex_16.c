#include<stdio.h>
#include<stdlib.h>
int main()
{
    int matriz[6][6]={0,63,210,190,-1,190,
                      63,0,160,150,95,10,
                      210,160,0,10,1,10,
                      190,150,10,0,10,20,
                      10,95,7,21,0,80,
                      190,2,-1,41,80,0};
    int n;
    scanf("%d",&n);
    int* p=(int*)malloc(n*sizeof(int));
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    int m;
    int inicio=*p;
    int fim=*(p+1);
    int dis=0;
    int flag=0;
    for(m=0;m<n-1;m++)
    {
        inicio=*p;
        fim=*(p+1);
        if(matriz[inicio][fim]!=-1)
        {
            dis+=matriz[inicio][fim];
            flag=1;
        }
        else
        {
            printf("rota invalida!\n");
            flag=0;
            break;
        }
        p++;
    }
    if(flag=1)
    {
        printf("%d\n",dis);
    }

    


    return 0;
}