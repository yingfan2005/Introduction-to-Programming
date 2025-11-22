#include<stdio.h>
int main ()
{
    float num1,num2,num3,num4,a,b,c,d,min,s2,s3,max;
    scanf("%f",&num1);
    scanf("%f",&num2);
    scanf("%f",&num3);
    scanf("%f",&num4);
    a=num1;
    b=num2;
    c=num3;
    d=num4; 
    if(a>=b&&a>=c&&a>=d)
    {
        max = a;
        if(b>=c&&b>=d)
        {
            s3 = b;
            if(c>=d)
            {
                s2=c;
                min=d;
            }
            else
            {
                s2 = d;
                min=c;
            }
        }
        else if(c>=b&&c>=d)
        {
            s3 = c;
            if(b>=d)
            {
                s2=b;
                min=d;
            }
            else
            {
                s2=d;
                min=b;
            }
        }
        else if(d>=b&&d>=c)
        {
            s3 = d;
            if(b>=c)
            {
                s2=b;
                min=c;
            }
            else
            {
                s2 = c;
                min=b;
            }
        }

    }
    else if(b>=a&&b>=c&&b>=d)
    {
        max = b;
        if(a>=c&&a>=d)
        {
            s3 = a;
            if(c>=d)
            {
                s2=c;
                min=d;
            }
            else
            {
                s2 = d;
                min=c;
            }
        }
        else if(c>=a&&c>=d)
        {
            s3 = c;
            if(a>=d)
            {
                s2=a;
                min=d;
            }
            else
            {
                s2=d;
                min=a;
            }
        }
        else if(d>=a&&d>=c)
        {
            s3 = d;
            if(a>=c)
            {
                s2=a;
                min=c;
            }
            else
            {
                s2 = c;
                min=a;
            }
        }
    }
    else if(c>=a&&c>=b&&c>=d)
    {
        max = c;
        if(a>=b&&a>=d)
        {
            s3 = a;
            if(b>=d)
            {
                s2=b;
                min=d;
            }
            else
            {
                s2 = d;
                min=b;
            }
        }
        else if(b>=a&&b>=d)
        {
            s3 = b;
            if(a>=d)
            {
                s2=a;
                min=d;
            }
            else
            {
                s2=d;
                min=a;
            }
        }
        else if(d>=a&&d>=b)
        {
            s3 = d;
            if(a>=b)
            {
                s2=a;
                min=b;
            }
            else
            {
                s2 = b;
                min=a;
            }
        }
    }
    else if(d>=a&&d>=b&&d>=c)
    {
        max = d;
        if(a>=c&&a>=b)
        {
            s3 = a;
            if(c>=b)
            {
                s2=c;
                min=b;
            }
            else
            {
                s2 = b;
                min=c;
            }
        }
        else if(c>=a&&c>=b)
        {
            s3 = c;
            if(a>=b)
            {
                s2=a;
                min=b;
            }
            else
            {
                s2=b;
                min=a;
            }
        }
        else if(b>=a&&b>=c)
        {
            s3 = b;
            if(a>=c)
            {
                s2=a;
                min=c;
            }
            else
            {
                s2 = c;
                min=a;
            }
        }
    }
    printf("%.2f, %.2f, %.2f, %.2f\n",min,s2,s3,max);
  
    return 0;
}