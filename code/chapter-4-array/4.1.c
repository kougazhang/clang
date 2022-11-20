#include <stdio.h>

// 输入 10 位学生的成绩，求出平均分，并输出这 10 位学生的数学成绩及所有学生的平均成绩

int main() {
    float score[10],sum = 0;
    printf("请输入 10 位学生的数学成绩：\n");
    for (int i=0;i<10;i++) {
        scanf("%f", &score[i]);
        sum += score[i]; // 计算总成绩
    }
    printf("这 10 位学生的数学成绩为：\n");
    for (int i=0;i<10;i++) {
        printf("%f\n", score[i]);
    }
    printf("平均成绩为:%f\n", sum/10);
}