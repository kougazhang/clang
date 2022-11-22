// 5.9 输入10个整数，使用选择排序法进行排序
#include <stdio.h>

void sort(int a[], int l);

int main()
{
    int i;
    int a[5];
    for (i=0;i<5;i++)
    {
        scanf("%d", &a[i]);
    }
    
    sort(a, 5);

    for (i=0;i<5;i++)
    {
        printf("%6d", a[i]);
    }
    return 0;
}

void sort(int a[], int l)
{
    int i,j,k,t;
    
    for (i=0;i<l-1;i++)
    {
        k=i;
        for (j=i+1;j<l;j++)
        {
            if (a[k]>a[j])
            {
                k=j;
            }
        }
        if (k!=i)
        {
            t=a[i];a[i]=a[k];a[k]=t;
        }
    }
}