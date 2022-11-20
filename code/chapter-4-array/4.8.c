#include <stdio.h>
#include <string.h>

int main()
{
    char max[100],a[100],b[100],c[100];
    gets(a);gets(b);gets(c);

    if (strcmp(a,b)>=0) 
    {
        strcpy(max, a);
    } else 
    {
        strcpy(max, b);
    }

    if (strcmp(max, c)>=0)
    {
        puts(max);
    } else
    {
        puts(c);
    }
}