// 5.3 输入两个数，求其中较大者输出
#include <stdio.h>

float max(float, float);

int main()
{
    float a,b;
    scanf("%f", &a);
    scanf("%f", &b);
    printf("bigger one:%.2f\n", max(a,b));
    return 0;
}

float max(float a, float b)
{
    if (a>b)
    {
        return a;
    }
    return b;
}
