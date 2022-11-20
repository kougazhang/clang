#include <stdio.h>

int main()
{
    int i,j;
    float a[5],t;

    for (i=0;i<5;i++)
    {
        scanf("%f", &a[i]);
    }

    for (i=0;i<4;i++)
    {
        for (j=0;j<4-i;j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j];a[j]=a[j+1];a[j+1]=t;
            }
        }
    }

    for (i=0;i<5;i++)
    {
        printf("%6.2f", a[i]);
    }
}