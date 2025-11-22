#include<stdio.h>
int main ()
{
    int n1,n2,n3,n4,n5,max,min=0;
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    if(n1>=n2&&n1>=n3&&n1>=n4&&n4>=n5)
    {
        max = n1;
    }
    else if(n2>=n1&&n2>=n3&&n2>=n4&&n2>=n5)
    {
        max = n2;
    }
    else if(n3>=n1&&n3>=n2&&n3>=n4&&n3>=n5)
    {
        max = n3;
    }
    else if(n4>=n1&&n4>=n3&&n4>=n2&&n2>=n5)
    {
        max = n4;
    }
    else if(n5>=n1&&n5>=n3&&n5>=n4&&n5>=n2)
    {
        max = n5;
    }
    if(n1<=n2&&n1<=n3&&n1<=n4&&n4<=n5)
    {
        min = n1;
    }
    else if(n2<=n1&&n2<=n3&&n2<=n4&&n2<=n5)
    {
        min = n2;
    }
    else if(n3<=n1&&n3<=n2&&n3<=n4&&n3<=n5)
    {
        min = n3;
    }
    else if(n4<=n1&&n4<=n3&&n4<=n2&&n2<=n5)
    {
        min = n4;
    }
    else if(n5<=n1&&n5<=n3&&n5<=n4&&n5<=n2)
    {
        min = n5;
    }

    
    printf("MENOR: %d,MAIOR: %d\n",min,max);

    if(n1<n2&&n2<n3&&n3<n4&&n4<n5)
    {
        printf("ORDENADO CRESCENTE\n");
    }
    else if(n1>n2&&n2>n3&&n3>n4&&n4>n5)
    {
        printf("ORDENADO DECRESCENTE\n");
    }
    else
    {
        printf("DESORDENADO\n");
    }
    return 0;
}