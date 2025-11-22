#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int num;
    long long int mid;
    long long int mid_left;
    long long int mid_right;
    double mediana;
    long long int i;
    long long int tmp;
    long long int vetor[3];
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        if(n>3)
        {
        if(i<3)
        {
            scanf("%lld",&num);
            vetor[i]=num; 
        }
        if(i==2)
        {
            if(vetor[0]<=vetor[1]&&vetor[0]<=vetor[2])
            {
                if(vetor[1]<=vetor[2])
                {
                    mid_left = vetor[0];
                    mid = vetor[1];
                    mid_right = vetor[2];
                }
                else if(vetor[1]>=vetor[2])
                {
                    mid_left = vetor[0];
                    mid = vetor[2];
                    mid_right = vetor[1];
                }
            }
            else if(vetor[1]<=vetor[0]&&vetor[1]<=vetor[2])
            {
                if(vetor[0]<=vetor[2])
                {
                    mid_left = vetor[1];
                    mid = vetor[0];
                    mid_right = vetor[2];
                }
                else if(vetor[0]>=vetor[2])
                {
                    mid_left = vetor[1];
                    mid = vetor[2];
                    mid_right = vetor[0];
                }
            }
            else if(vetor[2]<=vetor[0]&&vetor[2]<=vetor[1])
            {
                if(vetor[0]<=vetor[1])
                {
                    mid_left = vetor[2];
                    mid = vetor[0];
                    mid_right = vetor[1];
                }
                else if(vetor[0]>=vetor[1])
                {
                    mid_left = vetor[2];
                    mid = vetor[1];
                    mid_right = vetor[0];
                }
            }
        }
        else if(i>2)
        {
            scanf("%lld",&num);
        if(num>=mid_left&&num<=mid)
        {
            mid_left = num;
        }
        else if(num<=mid&&num>=mid_right)
        {
            mid_right = num;
        } 
        if(n>4)
        {
        if(num>=mid_right)
        {
            mid_left=mid;
            mid=mid_right;
            mid_right=num;
        }
        }  
        }
        }
        else
        {
            if(n==1)
            {
                scanf("%lld",&num);
                mediana = num*1.0;
            }
            else if(n==2)
            {
                scanf("%lld",&num);
                sum = sum + num;
                if(i==1)
                {
                    mediana = sum/2.0;
                }
            }
            else if(n==3)
            {
                scanf("%lld",&num);
                if(i==1)
                {
                    mid_left=num;
                }
                else if(i==2)
                {
                    mediana = mid_left*1.0;
                }
            }
        }
        
    }
    if(n>3)
    {
        if(n%2==0)
    {
        mediana=(mid_left+mid)/2.0;
    }
    else
    {
        mediana=mid_left*1.0;
    }
    }
    printf("%.2lf\n",mediana);
    return 0;
}