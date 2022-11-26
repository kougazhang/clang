#include <stdio.h>

int main()
{
    FILE *fread, *fwrite;
    char src[128], dst[128];
    printf("read path:\n");
    gets(src);
    printf("write path:\n");
    gets(dst);

    fread=fopen(src, "r");
    fwrite=fopen(dst, "w");

    while (!feof(fread))
    {
        char ch=fgetc(fread);
        if (ch!='\0')
        {
            fputc(ch,fwrite);
        }
    }

    fclose(fread);
    fclose(fwrite);
}