#include <stdio.h>

int main()
{
    char src[128],dst[128];
    FILE *fread,*fwrite;
    printf("input read file path:\n");
    gets(src);
    printf("input write file path:\n");
    gets(dst);

    fread=fopen(src, "r");
    fwrite=fopen(dst, "w");
    
    char a[16];
    fgets(a, 8, fread);
    fputs(a, fwrite);
    
    fclose(fread);
    fclose(fwrite);
}