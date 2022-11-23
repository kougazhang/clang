#include <stdio.h>

void yh(int n);

int main()
{
    int n;
    scanf("%d", &n);
    yh(n);
}

void yh(int n)
{
    int a[n][n+2];
    a[0][0]=1;
    a[1][0]=1;
    a[1][1]=2;
    a[1][2]=1;
    int i,j;
    for (i=2;i<n;i++)
    {
        for (j=0;j<i+2;j++)
        {
            if (j==0 || j==i+1)
            {
                a[i][j]=1;
            } else {
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
        }
    }
    
    int k=1;
    for (i=0;i<n;i++)
    {
        if (i>0)
        {
            k=i+2;
        }
        for (j=0;j<k;j++)
        {
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }
}