#include <stdio.h>

void fibo(int n);

int main()
{
    int n;
    scanf("%d", &n);
    fibo(n);
}

void fibo(int n)
{
    int j,k,t,cur;
    j=k=1;
    for (int i=i;i<n+1;i++)
    {
        if (i<2){
            printf("%d %d\n", i, 1);
        } else {
            cur=j+k;
            printf("%d %d\n", i, cur);
            j=k;
            k=cur;
        }   
    }
}