#include <stdio.h>

void compute(int m, int n, int *sum, int *product);

int main()
{
    int m,n,sum,product;
    scanf("%d", &m);
    scanf("%d", &n);
    compute(m,n,&sum,&product);
    printf("sum:%d, product:%d", sum, product);
    return 0;
}


void compute(int m, int n, int *sum, int *product)
{
    *sum=m+n;
    *product=m*n;
}