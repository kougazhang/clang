// 5.11 读入一批正整数（以零或负数为结尾标志），输出其中的素数
#include <stdio.h>

int prime(int n);

int main()
{
    int a[100];
    int i,cur,num;
    num=0;
    for (i=0;i<100;i++)
    {
        scanf("%d", &cur);
        if (cur<=0)
        {
            break;
        }
        a[i]=cur;
        num++;
    }
    for (i=0;i<num;i++)
    {
        if (prime(a[i]))
        {
            printf("%d\n", a[i]);
        }
    }
}

int prime(int n)
{
    int res,i;
    res=0;
    for (i=1;i<n;i++)
    {
        if (n%i==0)
        {
            res++;
        }
    }
    if (res==1)
    {
        return 1;
    }
    return 0;
}