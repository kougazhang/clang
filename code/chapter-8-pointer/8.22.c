#include <stdio.h>

int main()
{
    int i;
    char *month(int n);
    scanf("%d", &i);
    
    printf("%s\n", month(i));
    printf("%c\n", *(month(i)));
    return 0;
}

char *month(int n)
{
    static char *name[]={
        "ERROR",
        "Jan",
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec"
    };
    return ((1<=n&&n<=12)?name[n]:name[0]);
}