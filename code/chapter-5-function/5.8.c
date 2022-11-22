// 用递归法计算阶乘
#include <stdio.h>

long ff(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%ld\n", ff(n));
}

// 阶乘的规律：n!=n*(n-1)*...*1
long ff(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return n * ff(n-1);
}