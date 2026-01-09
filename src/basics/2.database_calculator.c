#include <stdio.h>      // 标准输入输出库，提供printf等函数
#include <limits.h>     // 整型数据类型的极限值
#include <float.h>      // 浮点型数据类型的极限值
#include <stdbool.h>    // C99标准引入的布尔类型支持
/*================================================================
  第一部分：基本数据类型详解
  说明：C语言提供了多种基本数据类型，用于存储不同类型的数据
================================================================*/

void demo_basic_types(void) {
    printf("\n");
    printf("================================================\n");
    printf("第一部分：基本数据类型详解\n");
    printf("================================================\n\n");

    /*
     * 1. 字符类型 (Character Types)
     *   用途：存储单个字符，如字母、数字、符号等
     *   存储：在内存中以ASCII码值存储
     *   注意：char实际上是小整数类型，可以参与算术运算
     */
    printf("1. 字符类型 (Character Types):\n");
    printf("   - char: 基本字符类型，通常1字节\n");
    printf("   - signed char: 有符号字符型，可表示负数\n");
    printf("   - unsigned char: 无符号字符型，只表示非负数\n\n");

    /* 示例代码 */
    char c = 'A';                       // 字符常量用单引号
    signed char sc = -128;              // 有符号字符可存储负数
    unsigned char uc = 255;             // 无符号字符范围0-255

    printf("   示例演示:\n");
    printf("   char c = '%c' (ASCII码值: %d)\n", c, c);
    printf("   signed char sc = %d\n", sc);
    printf("   unsigned char uc = %u\n\n", uc);

    /*
     * 2. 整型 (Integer Types)
     *   用途：存储整数，包括正整数、负整数和零
     *   分类：按大小分 short, int, long, long long
     *         按符号分 signed(默认), unsigned
     *   注意：不同系统上类型大小可能不同
     */
    printf("2. 整型 (Integer Types):\n");
    printf("   - short: 短整型，通常2字节\n");
    printf("   - int: 整型，通常4字节\n");
    printf("   - long: 长整型，通常4或8字节\n");
    printf("   - long long: 长长整型，通常8字节\n\n");

    /* 示例代码 */
    short s = 32767;                    // short最大值
    unsigned short us = 65535;          // unsigned short最大值
    int i = 2147483647;                 // int最大值
    unsigned int ui = 4294967295U;      // unsigned int最大值，U后缀
    long l = 2147483647L;               // long，L后缀
    long long ll = 9223372036854775807LL; // long long，LL后缀

    printf("   示例演示:\n");
    printf("   short s = %hd\n", s);
    printf("   unsigned short us = %hu\n", us);
    printf("   int i = %d\n", i);
    printf("   unsigned int ui = %u\n", ui);
    printf("   long l = %ld\n", l);
    printf("   long long ll = %lld\n\n", ll);

    /*
     * 3. 浮点型 (Floating-point Types)
     *   用途：存储带小数点的数字
     *   分类：float(单精度), double(双精度), long double(扩展精度)
     *   特点：使用科学计数法存储，有精度限制
     *   注意：浮点数比较时要注意精度误差
     */
    printf("3. 浮点型 (Floating-point Types):\n");
    printf("   - float: 单精度浮点数，通常4字节，精度约6-7位小数\n");
    printf("   - double: 双精度浮点数，通常8字节，精度约15-16位小数\n");
    printf("   - long double: 扩展精度浮点数，大小和精度与系统相关\n\n");

    /* 示例代码 */
    float f = 3.1415926f;               // float类型，f后缀
    double d = 3.141592653589793;       // double类型
    long double ld = 3.14159265358979323846L; // long double类型，L后缀

    printf("   示例演示:\n");
    printf("   float f = %.7f\n", f);
    printf("   double d = %.15f\n", d);
    printf("   long double ld = %.19Lf\n\n", ld);

    /*
     * 4. 布尔型 (Boolean Type) - C99标准引入
     *   用途：存储逻辑值 true 或 false
     *   注意：C语言中布尔值实际上是整数类型
     *         true = 1, false = 0
     *         任何非零值在逻辑上都被视为true
     */
    printf("4. 布尔型 (Boolean Type) - C99标准:\n");
    printf("   - bool: 布尔类型，需要包含<stdbool.h>\n");
    printf("   - true: 真值，实际值为1\n");
    printf("   - false: 假值，实际值为0\n\n");

    /* 示例代码 */
    bool is_true = true;                // 布尔真值
    bool is_false = false;              // 布尔假值
    bool non_zero = 10;                 // 非零值在布尔上下文中为true

    printf("   示例演示:\n");
    printf("   bool is_true = %d\n", is_true);
    printf("   bool is_false = %d\n", is_false);
    printf("   bool non_zero = %d (任何非零值在逻辑上都是true)\n\n", non_zero);

    /*
     * 5. void类型
     *   用途：表示"无类型"或"空类型"
     *   应用：1. 函数无返回值时使用void
     *         2. 函数无参数时使用void
     *         3. 通用指针类型void *
     */
    printf("5. void类型:\n");
    printf("   - 函数无返回值: void function_name()\n");
    printf("   - 函数无参数: int function_name(void)\n");
    printf("   - 通用指针: void *ptr (可以指向任何类型)\n\n");
}

/*================================================================
  第二部分：类型大小和取值范围
  说明：了解数据类型的大小和范围对于编写正确的程序至关重要
================================================================*/

void demo_type_sizes_ranges(void) {
    printf("\n");
    printf("================================================\n");
    printf("第二部分：类型大小和取值范围\n");
    printf("================================================\n\n");

    /*
     * sizeof 运算符
     *   功能：返回数据类型或变量占用的字节数
     *   用法：sizeof(type) 或 sizeof(variable)
     *   注意：sizeof是编译时运算符，不是函数
     *         返回值类型是size_t（无符号整型）
     */
    printf("1. 使用sizeof运算符查看类型大小（单位：字节）:\n");
    printf("   sizeof运算符可以确定数据类型在内存中的大小\n");
    printf("   注意：不同系统、不同编译器可能有不同的大小\n\n");

    printf("   基本数据类型大小:\n");
    printf("   char          = %2zu bytes\n", sizeof(char));
    printf("   short         = %2zu bytes\n", sizeof(short));
    printf("   int           = %2zu bytes\n", sizeof(int));
    printf("   long          = %2zu bytes\n", sizeof(long));
    printf("   long long     = %2zu bytes\n", sizeof(long long));
    printf("   float         = %2zu bytes\n", sizeof(float));
    printf("   double        = %2zu bytes\n", sizeof(double));
    printf("   long double   = %2zu bytes\n\n", sizeof(long double));

    /*
     * 整型取值范围
     *   这些常量定义在 limits.h 头文件中
     *   了解取值范围可以避免溢出错误
     */
    printf("2. 整型数据类型的取值范围:\n");
    printf("   这些常量定义在<limits.h>头文件中\n");
    printf("   了解取值范围对于防止溢出非常重要\n\n");

    printf("   字符类型范围:\n");
    printf("   CHAR_MIN = %d (最小有符号字符值)\n", CHAR_MIN);
    printf("   CHAR_MAX = %d (最大有符号字符值)\n", CHAR_MAX);
    printf("   UCHAR_MAX = %u (最大无符号字符值)\n\n", UCHAR_MAX);

    printf("   短整型范围:\n");
    printf("   SHRT_MIN = %d (最小短整型值)\n", SHRT_MIN);
    printf("   SHRT_MAX = %d (最大短整型值)\n", SHRT_MAX);
    printf("   USHRT_MAX = %u (最大无符号短整型值)\n\n", USHRT_MAX);

    printf("   整型范围:\n");
    printf("   INT_MIN = %d (最小整型值)\n", INT_MIN);
    printf("   INT_MAX = %d (最大整型值)\n", INT_MAX);
    printf("   UINT_MAX = %u (最大无符号整型值)\n\n", UINT_MAX);

    printf("   长整型范围:\n");
    printf("   LONG_MIN = %ld (最小长整型值)\n", LONG_MIN);
    printf("   LONG_MAX = %ld (最大长整型值)\n", LONG_MAX);
    printf("   ULONG_MAX = %lu (最大无符号长整型值)\n\n", ULONG_MAX);

    /*
     * 浮点型取值范围
     *   这些常量定义在 float.h 头文件中
     *   浮点数使用IEEE 754标准表示
     */
    printf("3. 浮点型数据类型的取值范围和精度:\n");
    printf("   这些常量定义在<float.h>头文件中\n");
    printf("   浮点数使用科学计数法存储，有精度限制\n\n");

    printf("   浮点型范围:\n");
    printf("   FLT_MIN  = %e (float最小正规范化值)\n", FLT_MIN);
    printf("   FLT_MAX  = %e (float最大值)\n", FLT_MAX);
    printf("   DBL_MIN  = %e (double最小正规范化值)\n", DBL_MIN);
    printf("   DBL_MAX  = %e (double最大值)\n\n", DBL_MAX);

    printf("   浮点型精度:\n");
    printf("   FLT_DIG  = %d (float的十进制精度位数)\n", FLT_DIG);
    printf("   DBL_DIG  = %d (double的十进制精度位数)\n\n", DBL_DIG);
}

/*================================================================
  第三部分：运算符详解
  说明：运算符用于对数据进行各种操作和计算
================================================================*/

void demo_operators(void) {
    printf("\n");
    printf("================================================\n");
    printf("第三部分：运算符详解\n");
    printf("================================================\n\n");

    int a = 10, b = 3;  // 定义两个整型变量用于演示

    /*
     * 1. 算术运算符 (Arithmetic Operators)
     *   功能：执行基本的数学运算
     *   注意：整数除法的结果是整数，小数部分被截断
     *         取模运算只能用于整数
     */
    printf("1. 算术运算符 (Arithmetic Operators):\n");
    printf("   用于执行基本的数学运算\n");
    printf("   测试值: a = %d, b = %d\n\n", a, b);

    printf("   a + b = %d  (加法: 两个数相加)\n", a + b);
    printf("   a - b = %d  (减法: 第一个数减去第二个数)\n", a - b);
    printf("   a * b = %d  (乘法: 两个数相乘)\n", a * b);
    printf("   a / b = %d  (除法: 整数除法，结果取整)\n", a / b);
    printf("   a %% b = %d  (取模: 求余数，a除以b的余数)\n\n", a % b);

    printf("   注意: \n");
    printf("   - 整数除法会截断小数部分: 10/3 = 3，不是3.333\n");
    printf("   - 取模运算%%只能用于整数类型\n");
    printf("   - 浮点数除法会得到小数结果\n\n");

    /*
     * 2. 关系运算符 (Relational Operators)
     *   功能：比较两个值的大小关系
     *   结果：返回布尔值（1表示真，0表示假）
     */
    printf("2. 关系运算符 (Relational Operators):\n");
    printf("   用于比较两个值的大小关系\n");
    printf("   返回布尔值: 1表示真，0表示假\n\n");

    printf("   a == b? %d (相等: 如果a等于b则为真)\n", a == b);
    printf("   a != b? %d (不等: 如果a不等于b则为真)\n", a != b);
    printf("   a > b?  %d (大于: 如果a大于b则为真)\n", a > b);
    printf("   a < b?  %d (小于: 如果a小于b则为真)\n", a < b);
    printf("   a >= b? %d (大于等于: 如果a大于或等于b则为真)\n", a >= b);
    printf("   a <= b? %d (小于等于: 如果a小于或等于b则为真)\n\n", a <= b);

    /*
     * 3. 逻辑运算符 (Logical Operators)
     *   功能：执行逻辑运算，常用于条件判断
     *   注意：C语言使用短路求值
     */
    printf("3. 逻辑运算符 (Logical Operators):\n");
    printf("   用于组合多个条件\n");
    printf("   测试值: x = 5, y = 10, z = 15\n\n");

    int x = 5, y = 10, z = 15;

    printf("   (x < y) && (y < z) = %d (逻辑与: 两个条件都为真时结果为真)\n",
           (x < y) && (y < z));
    printf("   (x > y) || (y < z) = %d (逻辑或: 至少一个条件为真时结果为真)\n",
           (x > y) || (y < z));
    printf("   !(x < y) = %d (逻辑非: 取反，真变假，假变真)\n\n", !(x < y));

    printf("   短路求值特性:\n");
    printf("   - 对于&&：如果第一个操作数为假，不会计算第二个操作数\n");
    printf("   - 对于||：如果第一个操作数为真，不会计算第二个操作数\n\n");

    /*
     * 4. 赋值运算符 (Assignment Operators)
     *   功能：将值赋给变量
     *   复合赋值：简化运算和赋值的组合
     */
    printf("4. 赋值运算符 (Assignment Operators):\n");
    printf("   用于给变量赋值\n\n");

    int num = 10;
    printf("   基本赋值: num = %d\n", num);

    num += 5;  // num = num + 5
    printf("   复合赋值: num += 5  => num = %d\n", num);

    num -= 3;  // num = num - 3
    printf("   复合赋值: num -= 3  => num = %d\n", num);

    num *= 2;  // num = num * 2
    printf("   复合赋值: num *= 2  => num = %d\n", num);

    num /= 4;  // num = num / 4
    printf("   复合赋值: num /= 4  => num = %d\n\n", num);

    printf("   其他复合赋值运算符:\n");
    printf("   %%= (取模赋值), &= (位与赋值), |= (位或赋值)\n");
    printf("   ^= (位异或赋值), <<= (左移赋值), >>= (右移赋值)\n\n");

    /*
     * 5. 自增自减运算符 (Increment/Decrement Operators)
     *   功能：将变量值增加1或减少1
     *   前自增/减：先增减，后使用
     *   后自增/减：先使用，后增减
     */
    printf("5. 自增自减运算符 (Increment/Decrement Operators):\n");
    printf("   用于将变量值增加1或减少1\n\n");

    int count = 5;
    printf("   初始值: count = %d\n", count);

    int pre_inc = ++count;  // 前自增：先加1，再赋值
    printf("   前自增: pre_inc = ++count = %d, count = %d\n", pre_inc, count);

    count = 5;  // 重置
    int post_inc = count++;  // 后自增：先赋值，再加1
    printf("   后自增: post_inc = count++ = %d, count = %d\n\n", post_inc, count);

    printf("   前自增/减与后自增/减的区别:\n");
    printf("   - 前自增(++i): 先增加i的值，然后使用增加后的值\n");
    printf("   - 后自增(i++): 先使用i的当前值，然后增加i的值\n");
    printf("   - 在循环和复杂表达式中要特别注意\n\n");

    /*
     * 6. 位运算符 (Bitwise Operators)
     *   功能：对整数的二进制位进行操作
     *   应用：底层编程、权限控制、优化等
     */
    printf("6. 位运算符 (Bitwise Operators):\n");
    printf("   对整数的二进制位进行操作\n");
    printf("   测试值: m = 60 (二进制: 00111100), n = 15 (二进制: 00001111)\n\n");

    unsigned char m = 60, n = 15;

    printf("   m & n = %u (按位与: 两个位都为1时结果为1)\n", m & n);
    printf("       00111100\n");
    printf("     & 00001111\n");
    printf("     ----------\n");
    printf("       00001100 = 12\n\n");

    printf("   m | n = %u (按位或: 两个位有一个为1时结果为1)\n", m | n);
    printf("       00111100\n");
    printf("     | 00001111\n");
    printf("     ----------\n");
    printf("       00111111 = 63\n\n");

    printf("   m ^ n = %u (按位异或: 两个位不同时结果为1)\n", m ^ n);
    printf("       00111100\n");
    printf("     ^ 00001111\n");
    printf("     ----------\n");
    printf("       00110011 = 51\n\n");

    printf("   ~m = %u (按位取反: 0变1，1变0)\n", (unsigned char)~m);
    printf("   m << 2 = %u (左移2位: 相当于乘以4)\n", m << 2);
    printf("   m >> 2 = %u (右移2位: 相当于除以4)\n\n", m >> 2);

    printf("   位运算的应用:\n");
    printf("   - 检查奇偶性: (num & 1) == 0 ? 偶数 : 奇数\n");
    printf("   - 快速乘除2的幂: num << n (乘以2^n), num >> n (除以2^n)\n");
    printf("   - 权限控制: 使用不同的位表示不同的权限\n\n");

    /*
     * 7. 条件运算符 (Conditional Operator) - 三目运算符
     *   语法：条件 ? 表达式1 : 表达式2
     *   功能：根据条件选择两个表达式之一
     */
    printf("7. 条件运算符 (Conditional Operator) - 三目运算符:\n");
    printf("   语法: 条件 ? 表达式1 : 表达式2\n");
    printf("   功能: 如果条件为真，返回表达式1的值，否则返回表达式2的值\n\n");

    int score = 85;
    char *result = (score >= 60) ? "及格" : "不及格";
    printf("   示例: 分数 = %d, 结果 = %s\n", score, result);

    // 另一个示例
    int max = (a > b) ? a : b;
    printf("   找最大值: max = (a > b) ? a : b = %d\n\n", max);

    /*
     * 8. 逗号运算符 (Comma Operator)
     *   功能：从左到右依次计算各个表达式
     *   结果：返回最后一个表达式的值
     */
    printf("8. 逗号运算符 (Comma Operator):\n");
    printf("   从左到右依次计算各个表达式，返回最后一个表达式的值\n\n");

    int p = (a = 3, b = 4, a + b);
    printf("   示例: p = (a = 3, b = 4, a + b) = %d\n", p);
    printf("   此时 a = %d, b = %d\n\n", a, b);

    printf("   逗号运算符的主要用途:\n");
    printf("   - for循环的初始化部分: for(i=0, j=10; i<j; i++, j--)\n");
    printf("   - 在表达式中执行多个操作\n\n");

    /*
     * 9. sizeof运算符
     *   功能：返回数据类型或变量的大小（字节数）
     *   注意：sizeof是编译时运算符，不是函数
     */
    printf("9. sizeof运算符:\n");
    printf("   返回数据类型或变量的大小（单位：字节）\n\n");

    printf("   sizeof(int) = %zu\n", sizeof(int));
    printf("   sizeof(a) = %zu (变量a的大小)\n", sizeof(a));
    printf("   sizeof 10 = %zu (常量10的大小)\n\n", sizeof(10));

    printf("   sizeof与数组:\n");
    int arr[10];
    printf("   int arr[10];\n");
    printf("   sizeof(arr) = %zu (整个数组的大小)\n", sizeof(arr));
    printf("   sizeof(arr[0]) = %zu (数组一个元素的大小)\n", sizeof(arr[0]));
    printf("   数组元素个数 = sizeof(arr) / sizeof(arr[0]) = %zu\n\n",
           sizeof(arr) / sizeof(arr[0]));
}

/*================================================================
  第四部分：类型转换详解
  说明：C语言中不同类型数据运算时需要进行类型转换
================================================================*/

void demo_type_conversion(void) {
    printf("\n");
    printf("================================================\n");
    printf("第四部分：类型转换详解\n");
    printf("================================================\n\n");

    /*
     * 1. 隐式类型转换 (自动类型转换)
     *   发生时机：不同类型数据混合运算时
     *   转换规则：向更宽、精度更高的类型转换
     */
    printf("1. 隐式类型转换 (自动类型转换):\n");
    printf("   当不同类型的数据进行运算时，C语言会自动进行类型转换\n\n");

    printf("   隐式转换规则（从低到高）:\n");
    printf("   char/short → int → unsigned int → long → unsigned long\n");
    printf("   → long long → unsigned long long → float → double → long double\n\n");

    // 示例1：整数提升 (Integer Promotion)
    printf("   示例1: 整数提升 (Integer Promotion)\n");
    char ch1 = 100;
    char ch2 = 50;
    int result = ch1 + ch2;  // char自动提升为int
    printf("   char(%d) + char(%d) = int(%d)\n", ch1, ch2, result);
    printf("   char类型在运算时自动提升为int类型\n\n");

    // 示例2：混合类型运算
    printf("   示例2: 混合类型运算\n");
    int i_val = 10;
    float f_val = 3.5f;
    double d_val = 2.8;

    double complex_result = i_val + f_val + d_val;
    printf("   int(%d) + float(%.1f) + double(%.1f) = double(%.1f)\n",
           i_val, f_val, d_val, complex_result);
    printf("   表达式中所有操作数都转换为最宽的类型（这里是double）\n\n");

    /*
     * 2. 显式类型转换 (强制类型转换)
     *   语法：(目标类型)表达式
     *   用途：明确指定类型转换，避免隐式转换的问题
     */
    printf("2. 显式类型转换 (强制类型转换):\n");
    printf("   语法: (目标类型)表达式\n");
    printf("   用途: 明确指定类型转换，避免隐式转换的问题\n\n");

    // 示例1：浮点数转整数
    printf("   示例1: 浮点数转整数（截断小数部分）\n");
    double d_convert = 123.456;
    int i_convert = (int)d_convert;
    printf("   double d = %.3f\n", d_convert);
    printf("   int i = (int)d = %d (小数部分被截断)\n\n", i_convert);

    // 示例2：避免整数除法问题
    printf("   示例2: 避免整数除法问题\n");
    int total = 7, count = 2;

    double average_wrong = total / count;           // 错误：整数除法
    double average_correct = (double)total / count; // 正确：强制转换

    printf("   total = %d, count = %d\n", total, count);
    printf("   错误: total / count = %.1f (整数除法，结果截断)\n", average_wrong);
    printf("   正确: (double)total / count = %.1f (浮点数除法)\n\n", average_correct);

    // 示例3：类型转换注意事项
    printf("   示例3: 类型转换的注意事项\n");
    printf("   - 大类型转小类型可能丢失数据（如long转int）\n");
    printf("   - 浮点数转整数会丢失小数部分\n");
    printf("   - 无符号和有符号转换可能改变值的含义\n");
    printf("   - 转换可能影响性能，应避免不必要的转换\n\n");

    /*
     * 3. 赋值时的类型转换
     *   规则：右侧表达式类型转换为左侧变量类型
     *   注意：可能发生数据丢失或精度损失
     */
    printf("3. 赋值时的类型转换:\n");
    printf("   规则: 右侧表达式类型自动转换为左侧变量类型\n\n");

    int int_var;
    float float_var;
    double double_var;

    int_var = 3.14;          // 浮点数转整数，小数部分丢失
    printf("   int_var = 3.14;    // int_var = %d (小数部分丢失)\n", int_var);

    float_var = 10;          // 整数转浮点数，添加小数部分
    printf("   float_var = 10;    // float_var = %.1f\n", float_var);

    double_var = 3.14f;      // float转double
    printf("   double_var = 3.14f; // double_var = %.2f\n\n", double_var);

    /*
     * 4. 函数调用时的类型转换
     *   规则：实参类型转换为形参类型
     */
    printf("4. 函数调用时的类型转换:\n");
    printf("   规则: 实参类型自动转换为形参声明类型\n\n");

    printf("   示例:\n");
    printf("   函数声明: void process_float(float f);\n");
    printf("   函数调用: process_float(10);\n");
    printf("   转换: int 10 自动转换为 float 10.0\n\n");
}

/*================================================================
  第五部分：常量和枚举
  说明：常量和枚举使程序更易读、更易维护
================================================================*/

void demo_constants_enums(void) {
    printf("\n");
    printf("================================================\n");
    printf("第五部分：常量和枚举\n");
    printf("================================================\n\n");

    /*
     * 1. 各种类型的常量表示
     */
    printf("1. 各种类型的常量表示:\n\n");

    printf("   整数常量:\n");
    printf("   十进制: 123\n");
    printf("   八进制: 0173 (以0开头)\n");
    printf("   十六进制: 0x7B (以0x或0X开头)\n");
    printf("   长整型后缀: 123L 或 123l\n");
    printf("   无符号后缀: 123U 或 123u\n\n");

    printf("   浮点数常量:\n");
    printf("   普通形式: 3.14\n");
    printf("   科学计数法: 3.14e2 = 314.0\n");
    printf("   单精度后缀: 3.14f 或 3.14F\n");
    printf("   双精度后缀: 3.14 (默认)\n");
    printf("   长双精度后缀: 3.14L 或 3.14l\n\n");

    printf("   字符常量:\n");
    printf("   普通字符: 'A'\n");
    printf("   转义字符: \n");
    printf("     \\\\n  换行符\n");
    printf("     \\\\t  制表符\n");
    printf("     \\\\\\\\  反斜杠\n");
    printf("     \\\\\\\"  双引号\n");
    printf("     \\\\\\'  单引号\n");
    printf("   八进制字符: '\\\\101' (ASCII 65 = 'A')\n");
    printf("   十六进制字符: '\\\\x41' (ASCII 65 = 'A')\n\n");

    printf("   字符串常量:\n");
    printf("   \"Hello, World!\"\n");
    printf("   注意: 字符串以空字符'\\\\0'结尾\n\n");

    /*
     * 2. const关键字 - 定义常量变量
     */
    printf("2. const关键字 - 定义常量变量:\n");
    printf("   语法: const 类型 变量名 = 值;\n");
    printf("   特点: 定义后不能修改\n\n");

    const int MAX_SIZE = 100;
    const double PI = 3.141592653589793;
    const char *MESSAGE = "Hello, C Programming!";

    printf("   示例:\n");
    printf("   const int MAX_SIZE = %d;\n", MAX_SIZE);
    printf("   const double PI = %.15f;\n", PI);
    printf("   const char *MESSAGE = \"%s\";\n\n", MESSAGE);

    printf("   const的作用:\n");
    printf("   - 提高代码可读性：有意义的名称代替魔法数字\n");
    printf("   - 提高代码可维护性：修改值只需改一处\n");
    printf("   - 防止意外修改：编译器会检查\n\n");

    /*
     * 3. 枚举类型 (enum)
     */
    printf("3. 枚举类型 (enum):\n");
    printf("   用途: 定义一组相关的命名常量\n");
    printf("   优点: 提高代码可读性和类型安全性\n\n");

    // 定义枚举类型
    enum Weekday {
        MONDAY,      // 默认值: 0
        TUESDAY,     // 1
        WEDNESDAY,   // 2
        THURSDAY,    // 3
        FRIDAY,      // 4
        SATURDAY,    // 5
        SUNDAY       // 6
    };

    enum Color {
        RED = 1,     // 指定值
        GREEN,       // 2 (前一个值+1)
        BLUE = 5,    // 指定值
        YELLOW,      // 6
        PURPLE       // 7
    };

    enum Weekday today = WEDNESDAY;
    enum Color favorite = BLUE;

    printf("   枚举示例1: 星期\n");
    printf("   enum Weekday { MONDAY, TUESDAY, WEDNESDAY, ... };\n");
    printf("   MONDAY=%d, TUESDAY=%d, WEDNESDAY=%d\n",
           MONDAY, TUESDAY, WEDNESDAY);
    printf("   今天: today = WEDNESDAY = %d\n\n", today);

    printf("   枚举示例2: 颜色（指定值）\n");
    printf("   enum Color { RED=1, GREEN, BLUE=5, YELLOW, PURPLE };\n");
    printf("   RED=%d, GREEN=%d, BLUE=%d, YELLOW=%d, PURPLE=%d\n",
           RED, GREEN, BLUE, YELLOW, PURPLE);
    printf("   最喜欢的颜色: favorite = BLUE = %d\n\n", favorite);

    /*
     * 4. #define预处理器常量
     */
    printf("4. #define预处理器常量:\n");
    printf("   语法: #define 标识符 值\n");
    printf("   特点: 预处理时进行文本替换，没有类型检查\n\n");

#define MAX_STUDENTS 50
#define WELCOME_MSG "Welcome to C Programming"
#define SQUARE(x) ((x) * (x))

    printf("   示例:\n");
    printf("   #define MAX_STUDENTS %d\n", MAX_STUDENTS);
    printf("   #define WELCOME_MSG \"%s\"\n", WELCOME_MSG);
    printf("   #define SQUARE(x) ((x) * (x))\n");
    printf("   SQUARE(5) = %d\n\n", SQUARE(5));

    printf("   #define与const的区别:\n");
    printf("   - #define: 预处理指令，无类型，全局替换\n");
    printf("   - const: 有类型，有作用域，编译器检查\n");
    printf("   建议: 优先使用const，需要宏功能时使用#define\n\n");
}

/*================================================================
  第六部分：实际应用示例
  说明：通过实际例子展示数据类型和运算符的应用
================================================================*/

void demo_practical_examples(void) {
    printf("\n");
    printf("================================================\n");
    printf("第六部分：实际应用示例\n");
    printf("================================================\n\n");

    /*
     * 示例1：温度转换
     */
    printf("1. 温度转换程序:\n");
    printf("   摄氏度转华氏度公式: F = C × 9/5 + 32\n\n");

    float celsius = 25.0f;
    float fahrenheit = celsius * 9.0f / 5.0f + 32.0f;
    printf("   摄氏%.1f度 = 华氏%.1f度\n\n", celsius, fahrenheit);

    /*
     * 示例2：计算圆的面积和周长
     */
    printf("2. 计算圆的面积和周长:\n");
    printf("   面积公式: S = π × r²\n");
    printf("   周长公式: C = 2 × π × r\n\n");

    const double PI = 3.1415926535;
    double radius = 5.0;
    double area = PI * radius * radius;
    double circumference = 2 * PI * radius;

    printf("   半径: %.2f\n", radius);
    printf("   面积: %.2f\n", area);
    printf("   周长: %.2f\n\n", circumference);

    /*
     * 示例3：数据类型溢出演示
     */
    printf("3. 数据类型溢出演示:\n");
    printf("   当值超出数据类型范围时发生溢出\n\n");

    unsigned char small_num = 255;
    printf("   unsigned char small_num = %u\n", small_num);
    small_num = small_num + 1;  // 溢出，255 + 1 = 0
    printf("   small_num + 1 = %u (溢出：最大值+1回到0)\n\n", small_num);

    signed char signed_small = 127;
    printf("   signed char signed_small = %d\n", signed_small);
    signed_small = signed_small + 1;  // 溢出，127 + 1 = -128
    printf("   signed_small + 1 = %d (溢出：最大值+1变成最小值)\n\n", signed_small);

    /*
     * 示例4：位运算的实际应用
     */
    printf("4. 位运算的实际应用:\n\n");

    // 应用1：检查奇偶性
    int number = 42;
    printf("   应用1: 检查奇偶性\n");
    printf("   数字%d是%s (使用: number & 1)\n",
           number, (number & 1) ? "奇数" : "偶数");

    // 应用2：快速乘除2的幂
    printf("\n   应用2: 快速乘除2的幂\n");
    printf("   %d * 2 = %d (普通乘法)\n", number, number * 2);
    printf("   %d << 1 = %d (左移一位，相当于×2)\n", number, number << 1);
    printf("   %d / 2 = %d (普通除法)\n", number, number / 2);
    printf("   %d >> 1 = %d (右移一位，相当于÷2)\n\n", number, number >> 1);

    // 应用3：交换两个变量的值（不使用临时变量）
    printf("   应用3: 交换两个变量的值（不使用临时变量）\n");
    int a = 10, b = 20;
    printf("   交换前: a = %d, b = %d\n", a, b);

    a = a ^ b;  // 第一步
    b = a ^ b;  // 第二步
    a = a ^ b;  // 第三步

    printf("   交换后: a = %d, b = %d (使用异或运算)\n\n", a, b);

    /*
     * 示例5：类型转换的实际应用
     */
    printf("5. 类型转换的实际应用:\n\n");

    // 避免整数除法的问题
    int total_score = 350;
    int student_count = 7;

    double average_wrong = total_score / student_count;           // 错误
    double average_correct = (double)total_score / student_count; // 正确

    printf("   计算平均分:\n");
    printf("   总分: %d, 学生数: %d\n", total_score, student_count);
    printf("   错误方法: %d / %d = %.2f (整数除法)\n",
           total_score, student_count, average_wrong);
    printf("   正确方法: (double)%d / %d = %.2f (浮点数除法)\n\n",
           total_score, student_count, average_correct);

    /*
     * 示例6：枚举的实际应用
     */
    printf("6. 枚举的实际应用:\n\n");

    // 使用枚举表示状态
    enum State {
        IDLE,
        RUNNING,
        PAUSED,
        STOPPED
    };

    enum State current_state = RUNNING;

    printf("   程序状态管理:\n");
    printf("   当前状态: ");
    switch(current_state) {
        case IDLE:    printf("空闲"); break;
        case RUNNING: printf("运行中"); break;
        case PAUSED:  printf("暂停"); break;
        case STOPPED: printf("停止"); break;
    }
    printf(" (枚举值: %d)\n\n", current_state);
}

/*================================================================
  第七部分：运算符优先级和结合性
  说明：了解运算符优先级可以正确理解复杂表达式
================================================================*/

void demo_operator_precedence(void) {
    printf("\n");
    printf("================================================\n");
    printf("第七部分：运算符优先级和结合性\n");
    printf("================================================\n\n");

    /*
     * 运算符优先级表
     */
    printf("1. 运算符优先级表（从高到低）:\n\n");
    printf("优先级 | 运算符             | 描述           | 结合性\n");
    printf("--------|-------------------|----------------|--------\n");
    printf("   1    | () [] . ->        | 括号，成员访问  | 从左到右\n");
    printf("   2    | ! ~ ++ -- + -     | 单目运算符      | 从右到左\n");
    printf("   3    | * / %%             | 乘除取模       | 从左到右\n");
    printf("   4    | + -               | 加减           | 从左到右\n");
    printf("   5    | << >>             | 位移           | 从左到右\n");
    printf("   6    | < <= > >=         | 关系运算符      | 从左到右\n");
    printf("   7    | == !=             | 相等判断       | 从左到右\n");
    printf("   8    | &                 | 按位与         | 从左到右\n");
    printf("   9    | ^                 | 按位异或       | 从左到右\n");
    printf("  10    | |                 | 按位或         | 从左到右\n");
    printf("  11    | &&                | 逻辑与         | 从左到右\n");
    printf("  12    | ||                | 逻辑或         | 从左到右\n");
    printf("  13    | ?:                | 条件运算符     | 从右到左\n");
    printf("  14    | = += -= *= /= ... | 赋值运算符     | 从右到左\n");
    printf("  15    | ,                 | 逗号运算符     | 从左到右\n\n");

    /*
     * 优先级示例
     */
    printf("2. 优先级示例:\n\n");

    int a = 5, b = 3, c = 2;

    // 示例1：乘除优先级高于加减
    int result1 = a + b * c;      // 5 + 3 * 2 = 5 + 6 = 11
    int result2 = (a + b) * c;    // (5 + 3) * 2 = 8 * 2 = 16

    printf("   示例1: 乘除优先级高于加减\n");
    printf("   a = %d, b = %d, c = %d\n", a, b, c);
    printf("   a + b * c = %d + %d * %d = %d\n", a, b, c, result1);
    printf("   (a + b) * c = (%d + %d) * %d = %d\n\n", a, b, c, result2);

    // 示例2：逻辑与优先级高于逻辑或
    int x = 1, y = 0, z = 1;
    int logical_result = x || y && z;  // 相当于 x || (y && z)

    printf("   示例2: 逻辑与(&&)优先级高于逻辑或(||)\n");
    printf("   x = %d, y = %d, z = %d\n", x, y, z);
    printf("   x || y && z = %d || %d && %d = %d\n", x, y, z, logical_result);
    printf("   相当于: x || (y && z) = %d || (%d && %d) = %d\n\n",
           x, y, z, logical_result);

    /*
     * 结合性示例
     */
    printf("3. 结合性示例:\n\n");

    // 示例1：赋值运算符从右到左结合
    int i, j, k;
    i = j = k = 10;  // 相当于 i = (j = (k = 10))

    printf("   示例1: 赋值运算符从右到左结合\n");
    printf("   i = j = k = 10;\n");
    printf("   执行后: i = %d, j = %d, k = %d\n\n", i, j, k);

    // 示例2：加减运算符从左到右结合
    int result3 = 10 - 5 - 2;  // 相当于 (10 - 5) - 2 = 3

    printf("   示例2: 加减运算符从左到右结合\n");
    printf("   10 - 5 - 2 = %d\n", result3);
    printf("   相当于: (10 - 5) - 2 = 3\n\n");

    // 示例3：条件运算符从右到左结合
    int m = 1, n = 2, p = 3;
    int cond_result = m ? n : p ? 4 : 5;  // 相当于 m ? n : (p ? 4 : 5)

    printf("   示例3: 条件运算符从右到左结合\n");
    printf("   m ? n : p ? 4 : 5 = %d\n", cond_result);
    printf("   相当于: m ? n : (p ? 4 : 5) = %d\n\n", cond_result);

    /*
     * 复杂表达式分析
     */
    printf("4. 复杂表达式分析:\n\n");

    int val1 = 5, val2 = 3, val3 = 2;
    int complex_result = val1++ + val2 * --val3;

    printf("   复杂表达式: val1++ + val2 * --val3\n");
    printf("   初始值: val1 = %d, val2 = %d, val3 = %d\n", 5, 3, 2);
    printf("   计算步骤:\n");
    printf("   1. --val3: val3先减1，val3 = 1\n");
    printf("   2. val2 * val3: 3 * 1 = 3\n");
    printf("   3. val1++: 使用val1当前值5，然后val1加1\n");
    printf("   4. 5 + 3 = 8\n");
    printf("   最终结果: complex_result = %d\n", complex_result);
    printf("   执行后: val1 = %d, val2 = %d, val3 = %d\n\n", 6, 3, 1);

    /*
     * 建议和最佳实践
     */
    printf("5. 建议和最佳实践:\n\n");

    printf("   - 使用括号明确优先级，即使默认优先级正确\n");
    printf("     例如: 使用 (a && b) || c 而不是 a && b || c\n\n");

    printf("   - 避免在一个表达式中混合使用自增/自减运算符\n");
    printf("     例如: 避免 a = b++ + ++c 这样的表达式\n\n");

    printf("   - 复杂的表达式分成多个简单的表达式\n");
    printf("     提高可读性，便于调试\n\n");

    printf("   - 了解常见运算符的优先级\n");
    printf("     特别注意: 单目 > 算术 > 关系 > 逻辑 > 赋值\n\n");
}