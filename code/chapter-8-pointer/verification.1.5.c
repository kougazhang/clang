#include <stdio.h>

int main()
{
    int m=1,n=2,*ptr1=&m,*ptr2=&n;
    ptr1=ptr2;
    ptr2=&m;
    printf("%d %d %d\n", *ptr1, *ptr2, *ptr1-*ptr2);
    return 0;
}