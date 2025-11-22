#include<stdio.h>
int main ()
{
    int num,par,impar;
    double mp,mi,ci,cp;
    par = 0;
    impar = 0;
    cp = 0;
    ci = 0;
    while(1)
    {
        scanf("%d",&num);
        if(num!=0)
        {
            if (num > 0)
            {
                if(num%2==0)
                {
                    par=par+num;
                    cp ++;
                }
                else if(num%2!=0)
                {
                    impar=impar+num;
                    ci ++;
                }
            }
            else if(num < 0)
            {
                num = num*(-1);
                if(num%2==0)
                    {
                        par=par-num;
                        cp ++;
                    }
                    else if(num%2!=0)
                    {
                        impar=impar-num;
                        ci ++;
                    }
            }    
        }
        else
        {

            break;
        }
    }
    if(cp!=0&&ci!=0)
    {
    mp = par/cp;
    mi = impar/ci;

    }
    else if(cp==0&&ci!=0)
    {
        mp = par/(cp+1);
        mi = impar/ci;
    }
    else if(cp!=0&&ci==0)
    {
        mp = par/cp;
        mi = impar/(ci+1);
    }
    else if(cp==0&&ci==0)
    {
        mp = par/(cp+1);
        mi = impar/(ci+1);
    }
    printf("MEDIA PAR: %.6lf\n",mp);
    printf("MEDIA IMPAR: %.6lf\n",mi);
    return 0;
}