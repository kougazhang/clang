#include <stdio.h>

void swap(int* x, int* y);

int main()
{
    int a[5];
    int i,j,k;
    
    for (i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }

    for (i=0;i<4;i++)
    {
        k=i;
        for(j=i+1;j<5;j++)
        {
            if (a[k]>a[j])
            {
                k=j;
            }
        }
        if (i!=k)
        {
            swap(&a[i], &a[k]);
        }
    }

    for (i=0;i<5;i++)
    {
        printf("%d\n", a[i]);
    }
}

void swap(int* x, int* y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
}