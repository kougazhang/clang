#include <stdio.h>

int calc(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", calc(n));
    return 0;
}

int calc(int n)
{
    if (n>1)
    {
        return n+calc(n-1);
    }
    return 1;
}