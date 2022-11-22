// 编写程序，自己实现 strupr() 函数和 strlwr() 函数。
#include <stdio.h>

int main()
{
    char a[100];
    gets(a);
    int i;
    char offsize='a'-'A';
    
    // strupr
    for (i=0;a[i]!='\0';i++) 
    {
        if ('a'<=a[i]&&a[i]<='z')
        {
            a[i]=a[i]-offsize;
        }
    }
    puts(a);

    // strlwr
    char b[100];
    gets(b);
    for (i=0;b[i]!='\0';i++)
    {
        if ('A'<=b[i]&&b[i]<='Z')
        {
            b[i]=b[i]+offsize;
        }
    }
    puts(b);
}