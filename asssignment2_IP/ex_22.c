#include<stdio.h>
int main ()
{
    int num,a,b,c,x,y,z;
    scanf("%d",&num);
    if(num>0)
    {
        for(a=1;a<=num;a++)
        {
            x = a*a;
            for(b=1;b<a;b++)
            {
                y = b*b;
                for(c=a-1;c>0;c--)
                {
                    z = c*c;
                    if(x==(y+z)&&b<=c)
                    {
                        printf("hipotenusa = %d, catetos %d e %d\n",a,b,c);
                    }
                }
            }
        }
    }


    return 0;
}