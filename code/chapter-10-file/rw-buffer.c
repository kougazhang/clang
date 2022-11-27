#include <stdio.h>

int main()
{
    char path[128];
    gets(path);
    
    FILE *fp=fopen(path, "w");
    float a[30]={
        1.22,
        1.23,
        1.24,
        1.25,
        1.26,
        1.27,
        1.28,
        1.29,
        1.211,
    };
    for (int i=0;i<30;i++)
    {
        fwrite(&a[i], 4, 1, fp);
    }
    fclose(fp);
}