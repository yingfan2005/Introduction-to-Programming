    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>
    struct Cidade
    {
        int quant_mor;
        int quant_con;
        int por_mor;
    };
    typedef struct Cidade cidade;
    void Ordenar(int*p,int n)
    {
        int i,j;
        int tmp;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(p[i]>p[j])
                {
                    tmp=p[i];
                    p[i]=p[j];
                    p[j]=tmp;
                }
            }
        }
    }
    int main()
    {
        int n;
        int count=1;
        while(1)
        {
            scanf("%d",&n);
            if(n==0)
            {
                break;
            }
            else
            {
                int i=0;
                int j;
                int target;
                int x,y;
                int sum=0;
                int sum_con=0;
                int sum_mor=0;
                int*a=NULL;
                cidade*p=NULL;
                p=(cidade*)calloc(n,sizeof(cidade));
                a=(int*)calloc(n,sizeof(int));
                for(i=0;i<n;i++)
                {
                    scanf("%d%d",&x,&y);
                    p[i].quant_mor=x;
                    p[i].quant_con=y;
                    p[i].por_mor=y/x;
                    sum_con+=y;
                    sum_mor+=x;
                }
                for(i=0;i<n;i++)
                {
                    a[i]+=p[i].por_mor;
                    //printf("%d\n",a[i]);
                }
                Ordenar(a,n);
                i=0;
                j=0;
                printf("Cidade# %d:\n",count);
                while(i<n)
                {
                    sum=0;
                    target=a[i];
                    for(j=0;j<n;j++)
                    {
                        if(p[j].por_mor==target)
                        {
                            sum+=p[j].quant_mor;
                            i++;
                        }
                    }
                    printf("%d-%d ",sum,target);
                }
                printf("\n");
                printf("Consumo medio: %.2f m3.\n",(float)sum_con/sum_mor);
                printf("\n");
                free(p);
                free(a);
                count++;
            }
     
        }
     
        return 0;
    }