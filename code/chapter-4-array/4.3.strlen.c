#include <stdio.h>
#include <string.h>

int main()
{
    char s[80];
    gets(s);
    puts(s);
    printf("it's length: %lu\n", strlen(s));
}