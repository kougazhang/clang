#include <stdio.h>

int search(int list[], int n, int x);

int main()
{
    int i,x,a[10],res;
    for (int i=0;i<10;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("input:\n");
    scanf("%d", &x);
    res=search(a,10,x);
    printf("%d", res);
    return 0;
}


int search(int list[], int n, int x)
{
    for (int i=0;i<n;i++)
    {
        if (list[i]==x)
        {
            return i;
        }
    }
    return -1;
}