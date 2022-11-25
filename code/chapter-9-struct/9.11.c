#include <stdio.h>

// 每个枚举常量对应一个整数值，一般情况下从 0 开始。
// enum weekday
// {
    // Mon, Tue, Wed, Thu, Fri, Sat, Sun
// };
// 也可以指定对应的值
enum weekday
{
    Mon=5, Tue=10, Wed, Thu, Fri, Sat, Sun
};

int main()
{
    enum weekday a,b,c;
    a=Mon,
    b=Tue,
    c=Wed;
    printf("%d %d %d\n", a, b, c);
}