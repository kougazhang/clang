#include <stdio.h>

void space(int x);

int main()
{
    int x;
    scanf("%d", &x);
    space(x);
    return 0;
}

void space(int x)
{
    for (i=0;i<x;i++)
    {
        printf(" ");
    }
    printf("\n");
}