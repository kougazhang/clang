#include <stdio.h>
#include <string.h>

int main()
{
    char a[12] = "hello";
    char b[6] = "world";
    strcat(a, b);
    puts(a);
    return 0;
}