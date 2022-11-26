#include <stdio.h>

int main()
{
    FILE *fr, *fw;
    char spath[128], wpath[128];
    printf("read path:\n");
    gets(spath);
    printf("write path:\n");
    gets(wpath);

    fr=fopen(spath, "r");
    fw=fopen(wpath, "w");

    while (!feof(fr))
    {
        char ch=fgetc(fr);
        if (ch!='\0')
        {
            fputc(ch,fw);
        }
    }

    fclose(fr);
    fclose(fw);
}