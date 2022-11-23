#include <stdio.h>

// 求 Fibonacci 数列的前 30 项并输出 （每行输出 5 个数字）

int main() {
    int fib[30] = {1, 1};
    for (int i=2;i<30;i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for (int i=0;i<30;i+=5) {
        printf("%d %d %d %d %d\n", fib[i],fib[i+1],fib[i+2],fib[i+3],fib[i+4]);
    }
}