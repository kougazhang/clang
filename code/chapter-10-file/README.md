# 第 10 章 文件

## 基础信息

文件：文件是存储在外部存储介质上数据的有序集合，是操作系统数据管理的单位。

同样的信息，保存为二进制比文本文件更节省空间。

![file](file.png)

缓冲文件系统与非缓冲文件系统

![buffer](buffer.png)

## 文件指针

在 “stdio.h” 文件中定义了文件类型 FILE 结构体：

```
struct _iobuf
{
    char *_ptr; // 索引数据流内容的位置指针
    int _cnt; // 当前的定位标志
    char *_base; // 缓冲区基准位置
    int _flag; // 文件操作方式
    int _file; // 文件代号
    int charbuf; // 字符缓冲信息
    int _bufsiz; // 缓冲区大小
    char *_tmpfname; // 临时文件名
}

// FILE 不是结构体变量的名称，而是类型名！
typedef struct _iobuf FILE;
```

对文件操作前，用户必须先定义文件类型指针变量，格式为：

```
FILE *结构体指针变量名;

// 举例：
FILE *fp;
```

## 文件操作

打开文件:
```
FILE *fp;
fp=fopen(文件名，文件的使用方式);

// 举例：
FILE *fp;
fp=fopen("a.txt", "r");
```

文件使用方式：
- "r" 以只读方式打开一个文件
- "w" 只写
- "+" 读写
- "a" 追加
- "b" 打开二进制

关闭文件:
-  `fclose(文件指针)`
- 正常关闭文件，`fclose` 返回 0
- 关闭失败，返回 `EOF`

[例10.1](10.1.c)

## 文件读写

- 以字符为单位的读写：`fputc(ch, fp)`, `fgetc(fp)`
- 以字符串为单位的读写：`fputs(str, fp)`, `fgets(str, n, fp)`
- 判断到达文件尾函数：`feof()`
- 格式方式读写文件：`fprintf()`, `fscanf()`
- 以数据块为单位读写：`fwrite()`, `fread()`
- 文件的定位函数：`rewind()`, `fseek()`, `ftell()`

以字符为单位的读写：`fputc(ch, fp)`, `fgetc()`

```
// 写文件
fputc('a', fp);

// 读文件
ch=fgetc(fp);
```

`feof(fp)`, 测试文件是否到达了文件结尾，到达结尾返回 0，否则返回非 0.

[例10.2](10.2.c)

---

以字符串为单位的读写：`fputs()`, `fgets()`

[read-write-string]