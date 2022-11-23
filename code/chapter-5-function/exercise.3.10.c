#include <stdio.h>

double fact(int n);
double cal(double e);

int main()
{
    // 计算阶乘
    // int n;
    // scanf("%d", &n);
    // printf("%f\n", fact(n));

}

// 计算阶乘
double fact(int n)
{
    if (n<=1)
    {
        return 1.0;
    }
    return n*fact(n-1);
}