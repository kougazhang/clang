#include <stdio.h>

void reverse(int a[2][2]);

int main()
{
    int a[2][2];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    reverse(a);
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%6d", a[i][j]);         
        }
        printf("\n");
    }
    return 0;
}

void reverse(int a[2][2])
{
    int t;
    for (int i=0;i<2;i++)
    {
        for (int j=i;j<2;j++)
        {
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;           
        }
    }
}