#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    gets(a);

    int i,num,letter,others;
    num=letter=others=0;
    char c;
    for (i=0;i<strlen(a);i++)
    {
        c=a[i];   
        if (('a'<=c && c<='z') || ('A'<=c && c<='Z'))
        {
            letter++;
        } else if ('0'<=c && c<= '9')
        {
            num++;
        } else 
        {
            others++;
        }
    }
    printf("letter:%d, num:%d, others:%d", letter, num, others);
}