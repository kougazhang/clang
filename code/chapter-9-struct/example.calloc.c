#include <stdio.h>
#include <stdlib.h>

struct student
{
    int data;
    struct student *stu;
};

int main()
{
    struct student *p;
    p=(struct student*)calloc(2, sizeof(struct student));
    free(p);
    return 0;
}