#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char a[100];
    gets(a);

    int len=strlen(a);
    char t;
    for (i=0;i<len/2;i++)
    {
        t=a[i];a[i] = a[len-1-i];a[len-1-i]=t;
    }
    puts(a);
    return 0;
}