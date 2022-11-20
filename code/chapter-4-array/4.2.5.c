#include <stdio.h>

int main()
{
    int a[5][5];
    int i,j;

    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            if (i==j || (i+j==4))
            {
                a[i][j]=1;
            } else {
                a[i][j]=2;
            }
        }
    }

    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}