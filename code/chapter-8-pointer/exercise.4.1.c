#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}

void swap(int *x, int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}