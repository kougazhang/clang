// 设已有定义语句 int a[2][3]; 输入数组各元素的值，将其行列互换后存入另一个二维数组并输出。
#include <stdio.h>

int main()
{
    int a[2][3];
    int i,j;
    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int b[3][2];
    for (i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            b[i][j]=a[j][i];
        }
    }

    for (i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }
    for (i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%6d", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}