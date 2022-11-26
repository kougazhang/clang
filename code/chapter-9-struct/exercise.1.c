#include <stdio.h>

struct student
{
    int num;
    char name[64];
    float grade;
};

int main()
{
    struct student a[3]={
        {1, "jack", 88},
        {2, "coocoo", 72.1},
        {3, "dudu", 65.2},
    };

    float sum=0;
    for (int i=0;i<3;i++)
    {
        sum+=a[i].grade;
    }
    printf("avg: %6.3f\n", sum/3);
}