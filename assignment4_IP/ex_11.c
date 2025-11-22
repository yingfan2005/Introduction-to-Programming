#include<stdio.h>
int main()
{
    long long int n;
    scanf("%Ld",&n);
    long long int i;
    int num;
    int arr[101]={0};//iniciar com 0
    int maior_frequencia=0;
    int n_repetido_menor;
    int j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        arr[num]++;
    }
    for(j=0;j<101;j++)
    {
        if(arr[j]>maior_frequencia)
        {
            maior_frequencia=(arr[j]);
            n_repetido_menor=j;
        }
        else if(arr[j]==maior_frequencia)
        {
            if(j<n_repetido_menor)
            {
                n_repetido_menor=j;
            }
        }
    }
    printf("%d\n",n_repetido_menor);
    printf("%d\n",maior_frequencia);

    return 0;
}
//a ideia de usar posição de vetor como contador é muito legalll