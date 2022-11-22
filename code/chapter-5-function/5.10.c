// 5.10 连续输入一批学生的成绩，直到输入的成绩超过10个或不合法（合法成绩 0~100），
// 将有效成绩输入到数组 mark 中，在数组中查找最高分。
// 函数 getmax(array, n) 在有 n 个元素的一维数组 array 中找出并返回最大值

#include <stdio.h>

float getmax(float array[10], int n);

int main()
{
    float a[10],grade;
    int i;
    for (i=0;i<10;i++)
    {
        scanf("%f", &grade);
        if (grade<0||grade>100)
        {
            break;
        }
        a[i]=grade;
    }
    printf("%f\n", getmax(a, sizeof(a)/sizeof(a[0])));
    return 0;
}

float getmax(float array[10], int n)
{
    float max=array[0];
    for (int i=0;i<n;i++)
    {
        if (array[i]>max)
        {
            max=array[i];
        }
    }
    return max;
}

