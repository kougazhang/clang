#include <stdio.h>

int main()
{
    int a[12]={0},*p,**pp,j;
    for (j=0;j<3;j++)
    {
        p[j]=&a[j*4];
        pp=p;
    }
    printf("%d\n", pp[0][1]);
}