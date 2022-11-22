#include <stdio.h>

int main()
{
    int a[2][3]={
        {1,2,3},
        {4,5,6}
    };
    int b[2][3]={
        {1,2,3},
        {4,5,6}
    };
    int res[2][3];
    int i,j;
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            res[i][j]=a[i][j]+b[i][j];            
        }
    }

    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%4d", res[i][j]);            
        }
        printf("\n");
    }
}