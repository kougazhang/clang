#include <stdio.h>

float f(int x, int n);

int main()
{
    int x, n;
    scanf("%d", &x);
    scanf("%d", &n);
    printf("%f", f(x, n));
    return 0;
}

float f(int x, int n)
{
    int flag=1;
    float res=0;
    for (int i=1;i<=n;i+=2)
    {
        int deno=x;
        for (int j=0;j<i;j++)
        {
            deno*=x;       
        }
        float base=1;
        for (int j=1;j<=i;j++)
        {
            base*=j;              
        }
        res += flag*(deno/base);
        flag*=-1;
    }
    return res;
}