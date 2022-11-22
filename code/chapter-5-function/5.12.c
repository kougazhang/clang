#include <stdio.h>

double qn(double, int);

int main()
{
    double x,sum;
    scanf("%lf", &x);

    int i;
    sum=0;
    for (i=0;i<10;i++)
    {
        sum += qn(x, i);
    }
    printf("%f\n", sum);
    return 0;
}

double qn(double x, int n)
{
    if (n==0)
    {
        return 1;
    } else if (n==1)
    {
        return x;
    } else 
    {
        return 2*x*qn(x,n-1)-qn(x, n-2);
    }
}