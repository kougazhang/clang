#include <stdio.h>
#include <string.h>

int main()
{
    char a[11]="hello ";
    char b[]="world";
    strlwr(a);
    strupr(b);
    strcat(a,b);
    puts(a);
    return 0;
}