# 第 8 章 指针

## 8.1 指针的基本知识

在 C 语言中，一种数据类型或数据结构往往都占有一组连续的内存单元。指针是该数据结构的首地址。

指针变量的定义：

```
// 存储类型见第 6 章
// 初始地址值为变量的地址，一般使用 `&变量名` 表示.
存储类型 数据类型 *指针变量名 = 初始地址值;

// 例如：
int n=6;
int *p=&n;
```

指针变量的运算：
- 指针加减一个整数 n，表示：指针向左或向右移动 n 个该指针类型的单位。
- 两个指针相减，表示：两个指针之间的距离
- 两个指针相加：没有意义，非法操作！！！

## 8.5 函数指针

函数指针作为函数参数时，采用如下写法：

```
// (*myfunc)，其中的 * 不要理解为求值运算，这只是规定的一种写法
int compute(int (*myfunc)(int), int, int);
```

函数指针作为返回值：

```
// 函数名前加了 “*”号，表示这个函数的返回值是指针。
类型 *函数名(参数列表)
```

[函数指针作为返回值的 Case](8.22.c)!

## 8.6 指针数组

指针数组：指向同一个数据类型的指针构成的一个数组。

表现形式：

```
// 类型标识符 *数组[数组长度];
// 举例：
int *a[19];
char *b[20]; 
```

实际应用：

- [指针二维数组](verification.1.12.c)
- [指针字符串](8.22.c)

## 8.8 实例剖析

[8.29 编写函数，对传递进来的两个整型量计算它们的和与积后，通过参数返回](8.29.c)!

## 习题 P194

### 一 选择题

1. B (`&` 是对一个变量取地址)!
2. A ([verification](verification.1.2.c), 相加单位即下标)!
3. D
4. A [verification](verification1.4.c)!
5. 错题。最后一行应更正为：`printf("%d %d %d\n", *ptr1, *ptr2, *ptr1-*ptr2);` [verification](verification.1.5,c); 第一行 `*ptr2=&n` 则答案为：D
6. B [verification](verification.1.6.c)
7. A [verification](verification.1.7.c)
8. D [verification](verification.1.8.c)
9. B 
10. 错题 [verification](verification.1.10.c)
11. D [verification](verification.1.11.c)
12. B [verification](verification.1.12.c)

### 二. 程序填空
1. C
2. C
3. D
4. D

### 三. 程序阅读题
1. 