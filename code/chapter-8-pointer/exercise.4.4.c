#include <stdio.h>

void strmcpy(char s[], char t[], int m);

int main()
{
    char s[100],t[100];
    gets(t);
    int m;
    scanf("%d", &m);
    strmcpy(s, t, m);
    puts(s);
    return 0;
}


void strmcpy(char s[], char t[], int m)
{
    int j=0;
    for(int i=m;t[i]!='\0';i++)
    {
        s[j++]=t[i];
    }   
}