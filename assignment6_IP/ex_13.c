#include<stdio.h>
#include<math.h>
struct complex
{
    float real;
    float imaginaria;
};
typedef struct complex complex;
struct RaizEqu2
{
    complex raiz1;
    complex raiz2;

};
typedef struct RaizEqu2 raizequ2;
raizequ2 calcula_raiz_equ_2(float a,float b,float c)
{
    raizequ2 raiz;
    float res=b*b-4*a*c;
    float z;
    if(res>=0)
    {
        res=sqrt(res);
        res=res/(2*a);
        z=(-1)*b/(2*a);
        raiz.raiz1.imaginaria=0;
        raiz.raiz1.real=z+res;
        raiz.raiz2.imaginaria=0;
        raiz.raiz2.real=z-res;
    }
    else
    {
        res=res*(-1);
        res=sqrt(res);
        res=res/(2*a);
        z=(-1)*b/(2*a);
        raiz.raiz1.imaginaria=res;
        raiz.raiz1.real=z;
        raiz.raiz2.imaginaria=res*(-1);
        raiz.raiz2.real=z;
    }
    return raiz;

}
void complex_print(complex raiz)
{
    complex c=raiz;
    if(c.real!=0)
    {
        if(c.imaginaria!=0)
        {
            if(c.imaginaria!=1&&c.imaginaria!=-1)
            {
                printf("%.2f%+.2fi\n",c.real,c.imaginaria);
            }
            else
            {
                if(c.imaginaria==1)
                {
                    printf("%.2lf+i\n",c.real);
                }
                else if(c.imaginaria==(-1))
                {
                    printf("%.2f-i\n",c.real);
                }
            }
        }
        else
        {
            printf("%.2f\n",c.real);
        }
    }
    else
    {
        if(c.imaginaria!=0)
        {
            if(c.imaginaria!=1&&c.imaginaria!=(-1))
            {
                printf("%.2fi\n",c.imaginaria);
            }
            else
            {
                if(c.imaginaria==1)
                {
                    printf("i\n");
                }
                else if(c.imaginaria==(-1))
                {
                    printf("-i\n");
                }
            }
        }
        else
        {
            printf("0.00\n");
        }
    }
}
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    raizequ2 r;
    r=calcula_raiz_equ_2(a,b,c);
    printf("x1 = ");
    complex_print(r.raiz1);
    printf("x2 = ");
    complex_print(r.raiz2);
    return 0;
}