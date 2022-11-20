#include <stdio.h>

int main()
{
    float a[2][3];
    int i,j;

    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%f", &a[i][j]);
        }
    }

    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%6.2f", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}