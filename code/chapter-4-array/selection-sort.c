#include <stdio.h>

int main()
{
    int i,j,k;
    float a[5],t;

    for (i=0;i<5;i++)
    {
        scanf("%f", &a[i]);
    }

    for (i=0;i<4;i++)
    {
        k=i;
        for (j=i+1;j<5;j++)
        {
            if (a[k]>a[j])
            {
                k=j;
            }
        }
        if (k!=i)
        {
            t=a[k];a[k]=a[i];a[i]=t;
        }
    }

    for (i=0;i<5;i++)
    {
        printf("%6.2f", a[i]);
    }
}