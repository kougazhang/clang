#include <stdio.h>
#include <stdlib.h>

int main()
{
    char path[128];
    gets(path);

    FILE *fp=fopen(path, "r");
    
    for (int i=0;i<10;i++)
    {
        fseek(fp,-i,2);
        printf("%c\n", fgetc(fp));        
    }

    fclose(fp);
    return 0;
}