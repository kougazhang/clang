// 计算 x 的立方
#include <stdio.h>

float cube(float);

int main()
{
    float x;
    scanf("%f", &x);
    printf("%f\n", cube(x));
    return 0;
}

float cube(float x)
{
    return x*x*x;
}