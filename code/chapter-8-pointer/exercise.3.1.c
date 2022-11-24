#include <stdio.h>

int main()
{
    int k;
    char ch, a[10], *s[10]={"one", "two", "three", "four"};
    k=0;
    while ((ch=getchar())!='\n' && k<9)
    {
        if(ch>'5'&&ch<'8')
        {
            a[k++]=ch;
        }
    }
    a[k]='\0';
    for (k=0;a[k]!='\0';k++)
    {
        printf("%s", s[('9'-a[k])-1]);
    }
}