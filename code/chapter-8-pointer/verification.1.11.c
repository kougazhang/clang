#include <stdio.h>

int main()
{
    int *point,a=4;
    point=&a;
    printf("%p,%p,%p", &a, &*point, point);
}