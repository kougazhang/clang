#include <stdio.h>

int main()
{
    int a[10] = {
        1,2,3,4,5,6,7,8,9,10
    };
    int *p=a;
    printf("%p,%d,%d\n", p+5,*(p+5),a[5]);
    return 0;
}