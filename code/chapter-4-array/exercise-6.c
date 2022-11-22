// 编写程序，自己实现 strcat() 函数。
#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    char b[50];
    gets(a);
    gets(b);

    int i=0;
    int alen=strlen(a);
    int blen=strlen(b)+1;
    for (i=0;i<blen;i++)
    {
        a[alen++]=b[i];
    }
    puts(a);    
    return 0;
}