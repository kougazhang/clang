#include <stdio.h>
#include <string.h>

int main() {
    char s1[100];
    gets(s1);
    
    char s2[100];
    gets(s2);

    int res = strcmp(s1, s2);
    printf("res: %d\n", res);
}