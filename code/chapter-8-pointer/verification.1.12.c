#include <stdio.h>

int main()
{
    int a[12]={1,2,3,4,5,6,7,8,9,10,11,12},*p[4],i;
    for (i=0;i<4;i++)
    {
        p[i]=&a[i*3];
    }
    printf("%p\n", p[3]);
    printf("%p\n", &a[9]);
    printf("%d\n", (&a[9])[2]);
    printf("%d\n", *((&a[9])+2));
    printf("%d\n", p[3][2]);
}