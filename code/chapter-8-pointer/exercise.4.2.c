#include <stdio.h>

void sort(int a[], int l);

int main()
{
    int a[5];
    for (int i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    sort(a, 5);

    for (int i=0;i<5;i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}


void sort(int a[], int l)
{
    for (int i=0;i<l-1;i++)
    {
        int k=i;
        for (int j=i+1;j<l;j++)
        {
            if (a[k]>a[j])
            {
                k=j;               
            }
        }
        if (k!=i)
        {
            int t=a[k];
            a[k]=a[i];
            a[i]=t;
        }
    }
}