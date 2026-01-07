# 📋 C 语言语法速查表

> 快速查阅 C 语言核心语法和常用函数，适用于日常编程和面试复习

---

## 📚 目录
- [1. 基本结构](#1-基本结构)
- [2. 数据类型](#2-数据类型)
- [3. 运算符](#3-运算符)
- [4. 控制结构](#4-控制结构)
- [5. 函数](#5-函数)
- [6. 数组](#6-数组)
- [7. 字符串](#7-字符串)
- [8. 指针](#8-指针)
- [9. 结构体](#9-结构体)
- [10. 文件操作](#10-文件操作)
- [11. 预处理器](#11-预处理器)
- [12. 常用标准库函数](#12-常用标准库函数)

---

## 1. 基本结构

### 最小C程序
```c
#include <stdio.h>

int main(void) {
    printf("Hello World!\n");
    return 0;
}
```

### 程序组成
```c
// 预处理指令
#include <stdio.h>    // 包含头文件
#define PI 3.14159    // 宏定义

// 全局变量
int global_var = 100;

// 函数声明
int add(int a, int b);

// main函数 - 程序入口
int main() {
    // 局部变量
    int x = 10;
    
    // 函数调用
    int sum = add(x, 20);
    
    // 返回值
    return 0;
}

// 函数定义
int add(int a, int b) {
    return a + b;
}
```

---

## 2. 数据类型

### 基本数据类型
| 类型 | 大小(字节) | 格式说明符 | 范围 |
|------|-----------|-----------|------|
| `char` | 1 | `%c` | -128 到 127 |
| `unsigned char` | 1 | `%c` | 0 到 255 |
| `int` | 4 | `%d` | -2,147,483,648 到 2,147,483,647 |
| `unsigned int` | 4 | `%u` | 0 到 4,294,967,295 |
| `short` | 2 | `%hd` | -32,768 到 32,767 |
| `long` | 4/8 | `%ld` | 平台相关 |
| `float` | 4 | `%f` | 1.2E-38 到 3.4E+38 |
| `double` | 8 | `%lf` | 2.3E-308 到 1.7E+308 |
| `void` | - | - | 无类型 |

### 类型限定符
```c
const int a = 10;     // 常量
volatile int b;       // 易变变量
register int c;       // 建议寄存器存储
static int d;         // 静态变量
extern int e;         // 外部变量
```

### 类型转换
```c
// 隐式转换
int i = 10;
float f = i;          // int → float

// 显式转换（强制转换）
float x = 3.14;
int y = (int)x;       // float → int

// sizeof 运算符
printf("int size: %zu\n", sizeof(int));
```

---

## 3. 运算符

### 算术运算符
```c
+    // 加法
-    // 减法  
*    // 乘法
/    // 除法
%    // 取模（余数）
++   // 自增
--   // 自减
```

### 关系运算符
```c
==   // 等于
!=   // 不等于
>    // 大于
<    // 小于
>=   // 大于等于
<=   // 小于等于
```

### 逻辑运算符
```c
&&   // 逻辑与
||   // 逻辑或
!    // 逻辑非
```

### 位运算符
```c
&    // 按位与
|    // 按位或
^    // 按位异或
~    // 按位取反
<<   // 左移
>>   // 右移
```

### 赋值运算符
```c
=    // 赋值
+=   // 加后赋值
-=   // 减后赋值  
*=   // 乘后赋值
/=   // 除后赋值
%=   // 取模后赋值
&=   // 位与后赋值
|=   // 位或后赋值
^=   // 位异或后赋值
<<=  // 左移后赋值
>>=  // 右移后赋值
```

### 其他运算符
```c
&    // 取地址
*    // 指针解引用
.    // 结构体成员访问
->   // 结构体指针成员访问
?:   // 三元条件运算符
,    // 逗号运算符
```

### 运算符优先级（从高到低）
1. `() [] -> .`
2. `! ~ ++ -- + - * & (type) sizeof`
3. `* / %`
4. `+ -`
5. `<< >>`
6. `< <= > >=`
7. `== !=`
8. `&`
9. `^`
10. `|`
11. `&&`
12. `||`
13. `?:`
14. `= += -= *= /= %= &= ^= |= <<= >>=`
15. `,`

---

## 4. 控制结构

### 条件语句
```c
// if-else
if (condition) {
    // 代码块
} else if (condition2) {
    // 代码块
} else {
    // 代码块
}

// 三元运算符
result = (a > b) ? a : b;

// switch-case
switch (expression) {
    case constant1:
        // 代码
        break;
    case constant2:
        // 代码
        break;
    default:
        // 代码
}
```

### 循环语句
```c
// while 循环
while (condition) {
    // 循环体
}

// do-while 循环
do {
    // 循环体（至少执行一次）
} while (condition);

// for 循环
for (initialization; condition; increment) {
    // 循环体
}

// 嵌套循环
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        // 代码
    }
}
```

### 跳转语句
```c
break;        // 跳出循环或switch
continue;     // 跳过本次循环剩余部分
return value; // 从函数返回
goto label;   // 跳转到标签（慎用）

// 示例
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break;    // 当 i=5 时退出循环
    }
    if (i % 2 == 0) {
        continue; // 跳过偶数
    }
    printf("%d ", i); // 只打印奇数
}
```

---

## 5. 函数

### 函数定义
```c
// 函数原型（声明）
int add(int a, int b);

// 函数定义
int add(int a, int b) {
    return a + b;
}

// 无返回值函数
void print_hello(void) {
    printf("Hello!\n");
}

// 带默认参数值（C99起支持变参宏模拟）
#define PRINT(value, format) printf(format, value)
```

### 参数传递
```c
// 值传递
void modify_value(int x) {
    x = 100;  // 不影响原变量
}

// 指针传递（实现引用传递效果）
void modify_pointer(int *x) {
    *x = 100; // 修改原变量
}

// 数组传递（实际传递指针）
void process_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}
```

### 递归函数
```c
// 阶乘函数
int factorial(int n) {
    if (n <= 1) {
        return 1;  // 基准情况
    }
    return n * factorial(n - 1);  // 递归调用
}

// 斐波那契数列
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
```

### 函数指针
```c
// 定义函数指针类型
typedef int (*MathFunc)(int, int);

// 使用函数指针
int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int main() {
    MathFunc func;
    
    func = add;
    printf("Add: %d\n", func(5, 3));
    
    func = multiply;
    printf("Multiply: %d\n", func(5, 3));
    
    return 0;
}
```

---

## 6. 数组

### 一维数组
```c
// 声明和初始化
int numbers[5];                    // 声明大小为5的数组
int nums[5] = {1, 2, 3, 4, 5};     // 初始化
int arr[] = {1, 2, 3, 4, 5};       // 自动确定大小

// 访问元素
numbers[0] = 10;                   // 第一个元素
int x = numbers[4];                // 最后一个元素

// 遍历数组
for (int i = 0; i < 5; i++) {
    printf("%d ", numbers[i]);
}
```

### 多维数组
```c
// 二维数组
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

// 访问元素
int value = matrix[1][2];  // 获取第二行第三列：6

// 遍历二维数组
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", matrix[i][j]);
    }
    printf("\n");
}

// 三维数组
int cube[2][3][4];
```

### 数组作为函数参数
```c
// 传递一维数组
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

// 传递二维数组
void print_matrix(int rows, int cols, int mat[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
```

---

## 7. 字符串

### 字符串基础
```c
// 字符串声明和初始化
char str1[] = "Hello";           // 自动添加 '\0'
char str2[20] = "World";
char str3[] = {'H', 'i', '\0'};  // 手动添加终止符

// 字符串输入输出
char name[50];
printf("Enter name: ");
scanf("%s", name);               // 读取字符串（无空格）
printf("Hello, %s\n", name);

// gets() 和 fgets()（推荐使用 fgets）
fgets(name, sizeof(name), stdin); // 安全读取
```

### 常用字符串函数
```c
#include <string.h>

char str1[20] = "Hello";
char str2[20] = "World";
char result[50];

// 字符串长度
int len = strlen(str1);          // 5

// 字符串复制
strcpy(result, str1);            // result = "Hello"

// 字符串连接
strcat(result, " ");             // result = "Hello "
strcat(result, str2);            // result = "Hello World"

// 字符串比较
int cmp = strcmp(str1, str2);    // 负值：str1 < str2

// 查找字符
char *ptr = strchr(str1, 'l');   // 查找第一个'l'

// 查找子串
ptr = strstr("Hello World", "World");

// 字符串分割
char str[] = "apple,banana,cherry";
char *token = strtok(str, ",");
while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, ",");
}
```

### 字符串处理示例
```c
// 反转字符串
void reverse_string(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// 检查回文字符串
int is_palindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}
```

---

## 8. 指针

### 指针基础
```c
int x = 10;
int *ptr = &x;      // ptr 指向 x

printf("x = %d\n", x);          // 输出: 10
printf("&x = %p\n", &x);        // 输出: x的地址
printf("ptr = %p\n", ptr);      // 输出: x的地址
printf("*ptr = %d\n", *ptr);    // 输出: 10

// 修改值
*ptr = 20;          // 等价于 x = 20
printf("x = %d\n", x);  // 输出: 20
```

### 指针运算
```c
int arr[5] = {10, 20, 30, 40, 50};
int *ptr = arr;

printf("*ptr = %d\n", *ptr);       // 10
ptr++;                             // 移动到下一个元素
printf("*ptr = %d\n", *ptr);       // 20

// 指针比较
if (ptr == &arr[1]) {
    printf("指向第二个元素\n");
}

// 指针差值
int *ptr1 = &arr[0];
int *ptr2 = &arr[3];
printf("元素个数差: %ld\n", ptr2 - ptr1);  // 3
```

### 指针与数组
```c
int arr[5] = {1, 2, 3, 4, 5};

// 以下等价
printf("%d\n", arr[2]);     // 3
printf("%d\n", *(arr + 2)); // 3
printf("%d\n", 2[arr]);     // 3（不推荐）

// 遍历数组的三种方式
// 1. 下标法
for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
}

// 2. 指针法
for (int *p = arr; p < arr + 5; p++) {
    printf("%d ", *p);
}

// 3. 指针偏移法
for (int i = 0; i < 5; i++) {
    printf("%d ", *(arr + i));
}
```

### 多级指针
```c
int x = 10;
int *p = &x;      // 一级指针
int **pp = &p;    // 二级指针
int ***ppp = &pp; // 三级指针

printf("x = %d\n", x);         // 10
printf("*p = %d\n", *p);       // 10
printf("**pp = %d\n", **pp);   // 10
printf("***ppp = %d\n", ***ppp); // 10
```

### 指针与函数
```c
// 返回指针的函数
int* find_max(int arr[], int size) {
    int *max = &arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            max = &arr[i];
        }
    }
    return max;
}

// 函数指针
int add(int a, int b) { return a + b; }
int multiply(int a, int b) { return a * b; }

int main() {
    // 声明函数指针
    int (*func_ptr)(int, int);
    
    func_ptr = add;
    printf("Add: %d\n", func_ptr(5, 3));
    
    func_ptr = multiply;
    printf("Multiply: %d\n", func_ptr(5, 3));
    
    return 0;
}
```

### 特殊指针
```c
// void 指针（通用指针）
int x = 10;
float y = 3.14;
void *ptr;

ptr = &x;
printf("%d\n", *(int*)ptr);  // 需要类型转换

ptr = &y;
printf("%.2f\n", *(float*)ptr);

// NULL 指针
int *ptr = NULL;
if (ptr == NULL) {
    printf("指针为空\n");
}

// 野指针（避免使用）
int *wild_ptr;  // 未初始化，指向随机地址
```

---

## 9. 结构体

### 结构体定义
```c
// 定义结构体类型
struct Student {
    int id;
    char name[50];
    float gpa;
};

// 使用 typedef 简化
typedef struct {
    int x;
    int y;
} Point;

// 声明结构体变量
struct Student stu1;
Point p1;

// 初始化
struct Student stu2 = {1001, "Alice", 3.8};
Point p2 = {10, 20};

// 访问成员
stu1.id = 1002;
strcpy(stu1.name, "Bob");
stu1.gpa = 3.5;
```

### 结构体指针
```c
struct Student stu = {1001, "Alice", 3.8};
struct Student *ptr = &stu;

// 访问成员的三种方式
printf("ID: %d\n", stu.id);           // 直接访问
printf("ID: %d\n", (*ptr).id);        // 通过指针
printf("ID: %d\n", ptr->id);          // 箭头运算符（推荐）

// 动态分配结构体
struct Student *dynamic_stu = (struct Student*)malloc(sizeof(struct Student));
if (dynamic_stu != NULL) {
    dynamic_stu->id = 1003;
    strcpy(dynamic_stu->name, "Charlie");
    dynamic_stu->gpa = 3.9;
    
    // 使用后释放内存
    free(dynamic_stu);
}
```

### 结构体数组
```c
struct Student class[3] = {
    {1001, "Alice", 3.8},
    {1002, "Bob", 3.5},
    {1003, "Charlie", 3.9}
};

// 遍历结构体数组
for (int i = 0; i < 3; i++) {
    printf("Student %d: %s (GPA: %.1f)\n", 
           class[i].id, class[i].name, class[i].gpa);
}
```

### 结构体嵌套
```c
typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    int id;
    char name[50];
    Date birthday;
    Date enrollment_date;
} Student;

Student stu = {
    1001,
    "Alice",
    {15, 8, 2000},
    {1, 9, 2020}
};

printf("Birthday: %d/%d/%d\n", 
       stu.birthday.day, 
       stu.birthday.month, 
       stu.birthday.year);
```

### 联合体（Union）
```c
union Data {
    int i;
    float f;
    char str[20];
};

union Data data;
data.i = 10;
printf("data.i = %d\n", data.i);

data.f = 3.14;
printf("data.f = %.2f\n", data.f);  // 此时 data.i 的值被覆盖

strcpy(data.str, "Hello");
printf("data.str = %s\n", data.str);  // 前两个值被覆盖
```

### 枚举（Enum）
```c
// 定义枚举类型
enum Weekday {
    MONDAY,     // 0
    TUESDAY,    // 1
    WEDNESDAY,  // 2
    THURSDAY,   // 3
    FRIDAY,     // 4
    SATURDAY,   // 5
    SUNDAY      // 6
};

// 指定值
enum Status {
    SUCCESS = 0,
    ERROR = -1,
    PENDING = 1
};

// 使用枚举
enum Weekday today = WEDNESDAY;

switch (today) {
    case MONDAY:
        printf("It's Monday\n");
        break;
    case WEDNESDAY:
        printf("It's Wednesday\n");
        break;
    // ...
}
```

---

## 10. 文件操作

### 文件打开模式
| 模式 | 描述 |
|------|------|
| `"r"` | 只读（文件必须存在） |
| `"w"` | 只写（创建或清空文件） |
| `"a"` | 追加（创建或追加到末尾） |
| `"r+"` | 读写（文件必须存在） |
| `"w+"` | 读写（创建或清空文件） |
| `"a+"` | 读写（创建或追加） |
| `"rb"` | 二进制只读 |
| `"wb"` | 二进制只写 |

### 基本文件操作
```c
#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    
    // 写入文件
    file = fopen("data.txt", "w");
    if (file != NULL) {
        fprintf(file, "Hello, File!\n");
        fprintf(file, "This is line 2.\n");
        fclose(file);
    }
    
    // 读取文件
    file = fopen("data.txt", "r");
    if (file != NULL) {
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }
        fclose(file);
    }
    
    return 0;
}
```

### 常用文件函数
```c
// 打开关闭文件
FILE *fp = fopen("file.txt", "r");
fclose(fp);

// 字符读写
int ch = fgetc(fp);      // 读取一个字符
fputc('A', fp);          // 写入一个字符

// 字符串读写
char buffer[100];
fgets(buffer, 100, fp);  // 读取一行
fputs("Hello", fp);      // 写入字符串

// 格式化读写
fprintf(fp, "%d %s", 100, "text");
fscanf(fp, "%d %s", &num, str);

// 二进制读写
size_t fread(void *ptr, size_t size, size_t count, FILE *stream);
size_t fwrite(void *ptr, size_t size, size_t count, FILE *stream);

// 文件定位
fseek(fp, offset, SEEK_SET);  // 从开头移动
fseek(fp, offset, SEEK_CUR);  // 从当前位置移动
fseek(fp, offset, SEEK_END);  // 从末尾移动
long pos = ftell(fp);         // 获取当前位置
rewind(fp);                   // 回到文件开头

// 错误检查
if (feof(fp)) {
    printf("到达文件末尾\n");
}
if (ferror(fp)) {
    printf("文件错误\n");
}
clearerr(fp);  // 清除错误标志
```

### 文件操作示例
```c
// 复制文件
void copy_file(const char *src, const char *dest) {
    FILE *src_file = fopen(src, "rb");
    FILE *dest_file = fopen(dest, "wb");
    
    if (src_file && dest_file) {
        char buffer[4096];
        size_t bytes;
        
        while ((bytes = fread(buffer, 1, sizeof(buffer), src_file)) > 0) {
            fwrite(buffer, 1, bytes, dest_file);
        }
        
        fclose(src_file);
        fclose(dest_file);
        printf("文件复制成功\n");
    }
}

// 统计文件行数
int count_lines(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) return -1;
    
    int count = 0;
    char ch;
    
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }
    
    // 如果最后一行没有换行符，也算一行
    if (count > 0 || ftell(file) > 0) {
        fseek(file, -1, SEEK_END);
        ch = fgetc(file);
        if (ch != '\n') {
            count++;
        }
    }
    
    fclose(file);
    return count;
}
```

---

## 11. 预处理器

### 宏定义
```c
// 对象宏
#define PI 3.14159
#define MAX_SIZE 100
#define BUFFER_SIZE 1024

// 函数宏
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define PRINT_MSG(msg) printf("Message: %s\n", msg)

// 多行宏
#define SWAP(a, b) do { \
    typeof(a) temp = a; \
    a = b; \
    b = temp; \
} while(0)

// 取消宏定义
#undef PI
```

### 条件编译
```c
// #ifdef / #ifndef
#ifdef DEBUG
    printf("Debug mode enabled\n");
#endif

#ifndef VERSION
    #define VERSION "1.0"
#endif

// #if / #elif / #else
#if defined(WIN32)
    // Windows 特定代码
    #include <windows.h>
#elif defined(__linux__)
    // Linux 特定代码
    #include <unistd.h>
#else
    #error "Unsupported platform"
#endif

// 编译期断言
#if __STDC_VERSION__ < 201112L
    #error "C11 or later required"
#endif
```

### 预定义宏
```c
printf("File: %s\n", __FILE__);     // 当前文件名
printf("Line: %d\n", __LINE__);     // 当前行号
printf("Date: %s\n", __DATE__);     // 编译日期
printf("Time: %s\n", __TIME__);     // 编译时间
printf("Function: %s\n", __func__); // 当前函数名

// C标准版本
#ifdef __STDC__
    printf("ANSI C compliant\n");
#endif

#ifdef __STDC_VERSION__
    printf("C Standard version: %ld\n", __STDC_VERSION__);
#endif
```

### 包含文件
```c
#include <stdio.h>    // 系统头文件（尖括号）
#include "myheader.h" // 用户头文件（双引号）

// 防止头文件重复包含
#ifndef MYHEADER_H
#define MYHEADER_H

// 头文件内容

#endif
```

---

## 12. 常用标准库函数

### 输入输出函数（stdio.h）
```c
// 格式化输出
printf("格式", 参数);          // 标准输出
fprintf(文件指针, "格式", 参数); // 文件输出
sprintf(字符串, "格式", 参数);   // 字符串输出
snprintf(字符串, 大小, "格式", 参数); // 安全版本

// 格式化输入
scanf("格式", &参数);          // 标准输入
fscanf(文件指针, "格式", &参数); // 文件输入
sscanf(字符串, "格式", &参数);   // 字符串输入

// 字符输入输出
int getchar(void);            // 读取一个字符
int putchar(int c);           // 输出一个字符
int fgetc(FILE *stream);      // 从文件读取字符
int fputc(int c, FILE *stream); // 向文件写入字符

// 字符串输入输出
char *gets(char *str);        // 读取一行（不安全）
char *fgets(char *str, int n, FILE *stream); // 安全读取
int puts(const char *str);    // 输出字符串
int fputs(const char *str, FILE *stream); // 向文件写入字符串

// 文件操作
FILE *fopen(const char *filename, const char *mode);
int fclose(FILE *stream);
int feof(FILE *stream);       // 检查文件结束
int ferror(FILE *stream);     // 检查错误
void clearerr(FILE *stream);  // 清除错误标志
```

### 字符串函数（string.h）
```c
// 长度计算
size_t strlen(const char *str);

// 字符串复制
char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t n); // 安全版本

// 字符串连接
char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);

// 字符串比较
int strcmp(const char *str1, const char *str2);
int strncmp(const char *str1, const char *str2, size_t n);

// 字符串查找
char *strchr(const char *str, int c);     // 查找字符
char *strrchr(const char *str, int c);    // 反向查找字符
char *strstr(const char *haystack, const char *needle); // 查找子串

// 字符串分割
char *strtok(char *str, const char *delim);

// 内存操作（可用于字符串）
void *memcpy(void *dest, const void *src, size_t n);
void *memmove(void *dest, const void *src, size_t n);
int memcmp(const void *ptr1, const void *ptr2, size_t n);
void *memset(void *ptr, int value, size_t num);
```

### 数学函数（math.h）
```c
#include <math.h>

// 基本运算
double sqrt(double x);      // 平方根
double pow(double x, double y); // 幂运算
double exp(double x);       // e的x次方
double log(double x);       // 自然对数
double log10(double x);     // 常用对数

// 三角函数
double sin(double x);       // 正弦
double cos(double x);       // 余弦
double tan(double x);       // 正切
double asin(double x);      // 反正弦
double acos(double x);      // 反余弦
double atan(double x);      // 反正切

// 取整函数
double ceil(double x);      // 向上取整
double floor(double x);     // 向下取整
double round(double x);     // 四舍五入

// 绝对值
double fabs(double x);      // 浮点绝对值
int abs(int x);             // 整数绝对值
long labs(long x);          // 长整数绝对值

// 其他
double fmod(double x, double y); // 浮点取模
```

### 内存管理函数（stdlib.h）
```c
#include <stdlib.h>

// 动态内存分配
void *malloc(size_t size);     // 分配内存
void *calloc(size_t num, size_t size); // 分配并清零
void *realloc(void *ptr, size_t new_size); // 重新分配
void free(void *ptr);          // 释放内存

// 示例
int *arr = (int*)malloc(10 * sizeof(int));
if (arr != NULL) {
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    free(arr);  // 必须释放
}

// 系统相关
void exit(int status);         // 退出程序
int system(const char *command); // 执行系统命令
```

### 时间函数（time.h）
```c
#include <time.h>

// 获取当前时间
time_t current_time = time(NULL);
printf("Seconds since 1970: %ld\n", current_time);

// 时间转换
struct tm *time_info = localtime(&current_time);
printf("Year: %d\n", time_info->tm_year + 1900);
printf("Month: %d\n", time_info->tm_mon + 1);
printf("Day: %d\n", time_info->tm_mday);
printf("Hour: %d\n", time_info->tm_hour);

// 格式化时间
char time_str[100];
strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", time_info);
printf("Formatted time: %s\n", time_str);

// 程序计时
clock_t start = clock();
// 执行一些操作...
clock_t end = clock();
double cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
printf("CPU time used: %f seconds\n", cpu_time_used);
```

### 随机数函数（stdlib.h）
```c
#include <stdlib.h>
#include <time.h>

// 初始化随机数种子
srand(time(NULL));

// 生成随机数
int random_num = rand();                 // 0 到 RAND_MAX
int dice = (rand() % 6) + 1;             // 1 到 6
float random_float = (float)rand() / RAND_MAX; // 0.0 到 1.0

// 生成指定范围的随机数
int random_range(int min, int max) {
    return min + rand() % (max - min + 1);
}
```

---

## 📝 实用代码片段

### 1. 交换两个变量的值
```c
// 使用临时变量
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 不使用临时变量（仅限整数）
void swap_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
```

### 2. 判断奇偶数
```c
int is_even(int n) {
    return (n & 1) == 0;  // 位运算方法
    // 等价于: return n % 2 == 0;
}
```

### 3. 获取数组大小
```c
// 对于静态数组
int arr[10];
int size = sizeof(arr) / sizeof(arr[0]);

// 宏定义版本
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
```

### 4. 求最大值/最小值
```c
// 宏定义版本
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

// 函数版本（避免重复计算）
int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}
```

### 5. 清屏函数（跨平台）
```c
void clear_screen(void) {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
```

### 6. 安全输入函数
```c
int get_int_input(const char *prompt, int min, int max) {
    int value;
    char buffer[100];
    
    while (1) {
        printf("%s", prompt);
        
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            continue;
        }
        
        if (sscanf(buffer, "%d", &value) == 1
