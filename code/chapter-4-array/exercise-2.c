// 设已有定义语句 int a[10];输入数组各元素的值，将其逆序存入到另一个数组并输出。
#include <stdio.h>

int main()
{
    int a[10];
    int i;
    for (i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }

    int b[10];
    for (i=0;i<10;i++)
    {
        b[i]=a[9-i];
    }
    for (i=0;i<10;i++)
    {
        printf("%d\n", b[i]);
    }
    return 0;
}