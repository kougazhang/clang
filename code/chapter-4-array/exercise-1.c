// 1. 编写程序，输入 30 个学生的成绩，要求统计并输出优秀（大于85）、通过（60~84）和不及格（小于60）的学生人数。
#include <stdio.h>

int main()
{
    float cur;
    int i,good,passed,unpassed;
    good=passed=unpassed=0;
    for (i=0;i<3;i++)
    {
        scanf("%f", &cur);
        if (cur>=85)
        {
            good++;
        } else if (60<=cur&&cur<=84)
        {
            passed++;
        } else
        {
            unpassed++;
        }
    }
    printf("good:%d,passed:%d,unpassed:%d\n", good, passed, unpassed);
    return 0;
}