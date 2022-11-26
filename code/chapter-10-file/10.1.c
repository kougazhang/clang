#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100];
    printf("path:\n");
    gets(s);

    FILE *fp;
    if ((fp=fopen(s, "r"))==NULL)
    {
        printf("File open error\n");
        exit(1);
    }

    int i=fclose(fp);
    if (i==0)
    {
        printf("OK!");
    }
    else
    {
        puts("File close error");
        exit(1);
    }
}
