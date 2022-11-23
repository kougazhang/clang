#include <stdio.h>

void upper(char a[]);

int main()
{
    char a[100];
    gets(a);
    upper(a);
    puts(a);
    return 0;
}

void upper(char a[])
{
    char distance='a'-'A';
    for (int i=0;a[i]!='\0';i++)
    {
        if ('a'<=a[i]&&a[i]<='z')
        {
            a[i]=a[i]-distance;
        }
    }
}