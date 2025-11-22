#include<stdio.h>
int main()
{
    int a=0;
    int b=0;
    int i;
    int j;
    int tam;
    int x;
    int num;
    int count = 0;
    int q=0;
    int l;
    int u;
    int m;
    int n;
    int c = 0;
    int y = 0;
    int p;
    int v;
   while(a<=0||a>100)
   {
    scanf("%d",&a);
   }
   while(b<=0||b>100)
   {
    scanf("%d",&b);
   }
    int arr1[a];
    int arr2[b];
    //array a
    for(i=0;i<a;i++)
    {
        tam=i;
        if(i==0)
        {
            scanf("%d",&arr1[i]);
        }
        else
        {
            while(1)
            {
                scanf("%d",&arr1[i]);
                num = arr1[i];
                count = 0;
                for(x=0;x<tam;x++)
                {
                    if(arr1[x]!=num)
                    {
                        count ++;
                    }
                }
                if(count==tam)
                {
                    break;
                }
            }
        }
    }
    //array b
    for(j=0;j<b;j++)
    {
        tam=j;
        if(j==0)
        {
            scanf("%d",&arr2[j]);
        }
        else
        {
            while(1)
            {
                scanf("%d",&arr2[j]);
                num = arr2[j];
                count = 0;
                for(x=0;x<tam;x++)
                {
                    if(arr2[x]!=num)
                    {
                        count ++;
                    }
                }
                if(count==tam)
                {
                    break;
                }
            }
        }
    }
    //imprimir array a
    for(l=0;l<a;l++)
    {
        if(a>1)
        {
            if(l==0)
        {
            printf("(%d,",arr1[l]);
        }
        else if(l==(a-1))
        {
            printf("%d)\n",arr1[l]);
        }
        else
        {
            printf("%d,",arr1[l]);
        }
        }
        else if(a==1)
        {
            printf("(%d)\n",arr1[l]);
        }
    }
    //imprimir array b
    for(u=0;u<b;u++)
    {
        if(b>1)
        {
            if(u==0)
        {
            printf("(%d,",arr2[u]);
        }
        else if(u==(b-1))
        {
            printf("%d)\n",arr2[u]);
        }
        else
        {
            printf("%d,",arr2[u]);
        }
        }
        else if(b==1)
        {
            printf("(%d)\n",arr2[u]);
        }
    }
    //A-B
    printf("(");
    for(m=0;m<a;m++)
    {
        y = 0;
        for(n=0;n<b;n++)
        {
            if(arr1[m]!=arr2[n])
            {
                y ++;
            }
        }
        if(y==b)
        {
            c ++;
            if(c==1)
            {
                printf("%d",arr1[m]);
            }
            else if(c>1)
            {
                printf(",%d",arr1[m]);
            }
        }
    }
    printf(")\n");
    //AxB
    printf("(");
    for(p=0;p<a;p++)
    {
        for(v=0;v<b;v++)
        {
            if(p==(a-1)&&v==(b-1))
            {
                printf("(%dx%d)",arr1[p],arr2[v]);
            }
            else
            {
                printf("(%dx%d),",arr1[p],arr2[v]);
            }
        }
    }
    printf(")\n");



    return 0;
}