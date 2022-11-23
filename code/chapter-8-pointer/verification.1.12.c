#include <stdio.h>

int main()
{
    int a[12],*p[4],i;
    for (i=0;i<4;i++)
    {
        p[i]=&a[i*3];
    }
    printf("%d\n", p[3][2]);
}