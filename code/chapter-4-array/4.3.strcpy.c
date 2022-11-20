#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char b[]="hello world";
    strcpy(a, b);
    puts(a);
}