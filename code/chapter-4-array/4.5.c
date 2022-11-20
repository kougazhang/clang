// 题目：二维数组 6*6, 找到其中绝对值最大的元素，输出其行列下标
#include <stdio.h>

int abs(int n);

int main()
{
    int N=3;
    int a[N][N];
    int i,j,mi,mj;

    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int max=a[0][0];
    for (i=0;i<N;i++)
    {
        for (j=0;j<N;j++)
        {
            if (abs(a[i][j])>abs(max))
            {
                max=a[i][j];
                mi=i;
                mj=j;
            }
        }
    }
    printf("绝对值最大是 %d, 行下标是 %d, 列下标是 %d", max, mi, mj);
}

int abs(int n)
{
    if (n<0)
    {
        return -n;
    } 
    return n;
}