#include <stdio.h>

struct s
{
    int a;
    float b;
} data[2], *p;

int main()
{
    p=data;
    // 错误
    // printf("%d", p->data.a); 
    
    printf("%d", (*p).a); 

    // p = &data.a;
    return 0;
}