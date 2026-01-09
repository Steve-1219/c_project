#include <stdio.h>
#include <stdlib.h>     // 标准库函数
#include <math.h>       // 数学函数
#include <string.h>     // 字符串函数
#include <time.h>       // 时间函数

/*================================================================
  第一部分：函数概述
  说明：函数是C语言程序的基本模块
================================================================*/

void part1_function_overview(void) {
    printf("\n");
    printf("================================================\n");
    printf("第一部分：函数概述\n");
    printf("================================================\n\n");
    
    printf("函数（Function）的定义：\n");
    printf("函数是完成特定任务的独立代码块，可以重复调用\n\n");
    
    printf("函数的作用：\n");
    printf("1. 代码复用：避免重复编写相同的代码\n");
    printf("2. 模块化：将大问题分解为小问题\n");
    printf("3. 抽象：隐藏实现细节，提供清晰接口\n");
    printf("4. 分工协作：不同程序员可以开发不同函数\n");
    printf("5. 易于维护：修改只需改动一处\n\n");
    
    printf("函数的分类：\n");
    printf("1. 标准库函数：C语言提供的函数（如printf, scanf）\n");
    printf("2. 用户自定义函数：程序员自己编写的函数\n");
    printf("3. 主函数：main()，程序入口点\n");
    printf("4. 库函数：第三方库提供的函数\n\n");
    
    printf("函数的基本组成部分：\n");
    printf("1. 函数声明（原型） - 告诉编译器函数的存在\n");
    printf("2. 函数定义        - 函数的具体实现\n");
    printf("3. 函数调用        - 使用函数\n\n");
    
    printf("函数编程的基本原则：\n");
    printf("- 一个函数只做一件事\n");
    printf("- 函数应该简短（通常不超过一屏）\n");
    printf("- 使用有意义的函数名\n");
    printf("- 良好的注释和文档\n");
    printf("- 参数尽量少\n\n");
}

/*================================================================
  第二部分：函数的声明、定义和调用
  说明：学习如何创建和使用函数
================================================================*/

void part2_function_declaration_definition_call(void) {
    printf("\n");
    printf("================================================\n");
    printf("第二部分：函数的声明、定义和调用\n");
    printf("================================================\n\n");
    
    /*
     * 1. 函数声明（函数原型）
     */
    printf("1. 函数声明（Function Declaration / Prototype）\n\n");
    
    printf("   作用：告诉编译器函数的存在、名称、参数和返回类型\n");
    printf("   位置：通常在文件开头或头文件中\n");
    printf("   语法：返回类型 函数名(参数列表);\n\n");
    
    printf("   示例：\n");
    printf("   int add(int a, int b);          // 声明一个加法函数\n");
    printf("   double calculate_area(double r); // 声明计算面积的函数\n");
    printf("   void print_message(void);       // 声明无返回值无参数的函数\n\n");
    
    printf("   声明的重要性：\n");
    printf("   - 编译器可以检查函数调用是否正确\n");
    printf("   - 可以在函数定义之前调用函数\n");
    printf("   - 提高代码的可读性\n\n");
    
    /*
     * 2. 函数定义
     */
    printf("2. 函数定义（Function Definition）\n\n");
    
    printf("   作用：提供函数的具体实现\n");
    printf("   语法：\n");
    printf("   返回类型 函数名(参数列表) {\n");
    printf("       函数体\n");
    printf("       return 返回值;  // 如果返回类型不是void\n");
    printf("   }\n\n");
    
    // 示例函数定义
    printf("   示例1：简单的加法函数\n");
    // 这里只是演示，实际定义在后面
    printf("   int add(int a, int b) {\n");
    printf("       int sum = a + b;\n");
    printf("       return sum;  // 返回计算结果\n");
    printf("   }\n\n");
    
    printf("   示例2：无返回值函数\n");
    printf("   void print_stars(int count) {\n");
    printf("       for (int i = 0; i < count; i++) {\n");
    printf("           printf(\"*\");\n");
    printf("       }\n");
    printf("       printf(\"\\n\");\n");
    printf("       // 无return语句或只有return;\n");
    printf("   }\n\n");
    
    printf("   函数定义的组成部分：\n");
    printf("   1. 返回类型：函数返回值的类型，void表示无返回值\n");
    printf("   2. 函数名：标识函数的名称\n");
    printf("   3. 参数列表：函数接收的输入，可以为空(void或空括号)\n");
    printf("   4. 函数体：包含实际代码的块\n");
    printf("   5. return语句：返回结果（void函数可省略）\n\n");
    
    /*
     * 3. 函数调用
     */
    printf("3. 函数调用（Function Call）\n\n");
    
    printf("   作用：执行函数中的代码\n");
    printf("   语法：函数名(实际参数);\n\n");
    
    printf("   示例：\n");
    printf("   int result = add(10, 20);       // 调用add函数\n");
    printf("   print_stars(5);                 // 调用print_stars函数\n");
    printf("   double area = calculate_area(3.5); // 调用计算面积的函数\n\n");
    
    printf("   函数调用的过程：\n");
    printf("   1. 程序暂停当前执行，跳转到函数\n");
    printf("   2. 将实际参数传递给形式参数\n");
    printf("   3. 执行函数体中的代码\n");
    printf("   4. 遇到return语句或函数结束，返回到调用处\n");
    printf("   5. 继续执行调用后的代码\n\n");
    
    /*
     * 4. 完整示例演示
     */
    printf("4. 完整示例演示\n\n");
    
    // 先声明函数
    int add(int a, int b);
    void print_stars(int count);
    double calculate_average(double x, double y);
    
    printf("   示例1：加法函数\n");
    int sum = add(25, 37);
    printf("   add(25, 37) = %d\n\n", sum);
    
    printf("   示例2：打印星号函数\n");
    print_stars(8);
    printf("\n");
    
    printf("   示例3：计算平均值函数\n");
    double avg = calculate_average(45.5, 67.8);
    printf("   calculate_average(45.5, 67.8) = %.2f\n\n", avg);
    
    printf("   示例4：嵌套函数调用\n");
    int nested_result = add(add(5, 3), add(10, 2));
    printf("   add(add(5,3), add(10,2)) = %d\n\n", nested_result);
    
    /*
     * 5. 实际定义的函数（前面只是声明）
     */
    printf("5. 函数定义的实际位置\n");
    printf("   注意：在C语言中，函数可以定义在：\n");
    printf("   - main函数之前（简单程序）\n");
    printf("   - main函数之后（需要先声明）\n");
    printf("   - 单独的源文件中（大型项目）\n\n");
}

// 第二部分的函数定义
int add(int a, int b) {
    return a + b;
}

void print_stars(int count) {
    for (int i = 0; i < count; i++) {
        printf("*");
    }
    printf("\n");
}

double calculate_average(double x, double y) {
    return (x + y) / 2.0;
}

/*================================================================
  第三部分：函数参数详解
  说明：理解参数传递机制
================================================================*/

void part3_function_parameters(void) {
    printf("\n");
    printf("================================================\n");
    printf("第三部分：函数参数详解\n");
    printf("================================================\n\n");
    
    /*
     * 1. 形式参数和实际参数
     */
    printf("1. 形式参数和实际参数\n\n");
    
    printf("   形式参数（Formal Parameter / Parameter）：\n");
    printf("   - 函数定义时声明的参数\n");
    printf("   - 在函数内部作为局部变量使用\n");
    printf("   - 示例：void func(int x, int y) 中的x和y\n\n");
    
    printf("   实际参数（Actual Parameter / Argument）：\n");
    printf("   - 函数调用时传递的值\n");
    printf("   - 可以是常量、变量或表达式\n");
    printf("   - 示例：func(10, a+b) 中的10和a+b\n\n");
    
    printf("   参数传递的过程：\n");
    printf("   调用时：实际参数 → 形式参数（值复制）\n");
    printf("   函数内：使用形式参数进行计算\n");
    printf("   返回后：形式参数被销毁\n\n");
    
    /*
     * 2. 参数传递方式：值传递
     */
    printf("2. 参数传递方式：值传递（Call by Value）\n\n");
    
    printf("   C语言默认使用值传递：\n");
    printf("   - 将实际参数的值复制给形式参数\n");
    printf("   - 函数内对参数的修改不影响原变量\n");
    printf("   - 适合传递基本数据类型（int, float, char等）\n\n");
    
    printf("   示例：值传递演示\n");
    
    // 函数声明
    void swap_by_value(int x, int y);
    
    int a = 10, b = 20;
    printf("   交换前：a = %d, b = %d\n", a, b);
    
    swap_by_value(a, b);
    
    printf("   交换后：a = %d, b = %d（原值未改变）\n", a, b);
    printf("   说明：值传递时，函数内的修改不影响原变量\n\n");
    
    /*
     * 3. 参数传递方式：地址传递（通过指针）
     */
    printf("3. 参数传递方式：地址传递（Call by Address/Reference）\n\n");
    
    printf("   通过指针实现地址传递：\n");
    printf("   - 传递变量的地址（指针）\n");
    printf("   - 函数内通过指针修改原变量的值\n");
    printf("   - 适合需要修改原数据或传递大型数据的情况\n\n");
    
    printf("   示例：地址传递演示\n");
    
    // 函数声明
    void swap_by_address(int *x, int *y);
    
    int x = 30, y = 40;
    printf("   交换前：x = %d, y = %d\n", x, y);
    
    swap_by_address(&x, &y);  // 传递地址
    
    printf("   交换后：x = %d, y = %d（原值已改变）\n", x, y);
    printf("   说明：地址传递时，函数内可以通过指针修改原变量\n\n");
    
    /*
     * 4. 数组作为函数参数
     */
    printf("4. 数组作为函数参数\n\n");
    
    printf("   数组作为参数时传递的是数组首地址：\n");
    printf("   - 函数内可以修改数组元素\n");
    printf("   - 需要额外传递数组大小（因为函数内不知道数组长度）\n");
    printf("   - 两种等价写法：int arr[] 或 int *arr\n\n");
    
    printf("   示例：数组参数演示\n");
    
    // 函数声明
    void print_array(int arr[], int size);
    void modify_array(int arr[], int size);
    double get_array_average(int arr[], int size);
    
    int numbers[5] = {10, 20, 30, 40, 50};
    
    printf("   原数组：");
    print_array(numbers, 5);
    
    printf("   修改数组（每个元素加倍）：");
    modify_array(numbers, 5);
    print_array(numbers, 5);
    
    double average = get_array_average(numbers, 5);
    printf("   数组平均值：%.2f\n\n", average);
    
    /*
     * 5. 多维数组作为函数参数
     */
    printf("5. 多维数组作为函数参数\n\n");
    
    printf("   二维数组作为参数必须指定列数：\n");
    printf("   void func(int arr[][4], int rows)  // 正确\n");
    printf("   void func(int arr[3][4])           // 正确\n");
    printf("   void func(int arr[][], int rows)   // 错误！\n\n");
    
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("   示例：二维数组参数\n");
    
    // 函数声明
    void print_matrix(int mat[][3], int rows);
    int sum_matrix(int mat[][3], int rows);
    
    printf("   矩阵内容：\n");
    print_matrix(matrix, 3);
    
    int total = sum_matrix(matrix, 3);
    printf("   矩阵元素总和：%d\n\n", total);
    
    /*
     * 6. 不同参数类型的示例
     */
    printf("6. 不同参数类型的示例\n\n");
    
    printf("   示例1：常量参数\n");
    printf("   void print_const(const char *str) { // str指向的内容不能被修改 }\n\n");
    
    printf("   示例2：默认参数（C语言不支持，但C++支持）\n");
    printf("   // C语言不支持：void func(int x = 10) { ... }\n");
    printf("   // 解决方法：使用函数重载或宏\n\n");
    
    printf("   示例3：可变参数函数\n");
    printf("   #include <stdarg.h>\n");
    printf("   int sum_variable(int count, ...) { // 可以接受可变数量参数 }\n\n");
    
    printf("   示例4：无参数函数\n");
    printf("   void func(void) { ... }  // 明确表示无参数\n");
    printf("   void func() { ... }      // 不推荐，表示参数未指定\n\n");
}

// 第三部分的函数定义
void swap_by_value(int x, int y) {
    printf("   函数内交换前：x = %d, y = %d\n", x, y);
    int temp = x;
    x = y;
    y = temp;
    printf("   函数内交换后：x = %d, y = %d\n", x, y);
}

void swap_by_address(int *x, int *y) {
    printf("   函数内交换前：*x = %d, *y = %d\n", *x, *y);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("   函数内交换后：*x = %d, *y = %d\n", *x, *y);
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void modify_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;  // 每个元素加倍
    }
}

double get_array_average(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

void print_matrix(int mat[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        printf("   ");
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int sum_matrix(int mat[][3], int rows) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            sum += mat[i][j];
        }
    }
    return sum;
}

/*================================================================
  第四部分：函数返回值详解
  说明：理解函数的返回值机制
================================================================*/

void part4_function_return_values(void) {
    printf("\n");
    printf("================================================\n");
    printf("第四部分：函数返回值详解\n");
    printf("================================================\n\n");
    
    /*
     * 1. 返回类型和return语句
     */
    printf("1. 返回类型和return语句\n\n");
    
    printf("   返回类型（Return Type）：\n");
    printf("   - 指定函数返回值的类型\n");
    printf("   - void表示函数不返回值\n");
    printf("   - 可以是任意基本类型、指针、结构体等\n\n");
    
    printf("   return语句：\n");
    printf("   - 结束函数执行\n");
    printf("   - 将控制权返回给调用者\n");
    printf("   - 可选地带回一个值（void函数不需要）\n\n");
    
    printf("   示例：不同返回类型的函数\n");
    
    // 函数声明
    int return_int(void);
    double return_double(void);
    char return_char(void);
    int* return_pointer(void);
    void return_nothing(void);
    
    printf("   return_int() = %d\n", return_int());
    printf("   return_double() = %.2f\n", return_double());
    printf("   return_char() = '%c'\n", return_char());
    printf("   return_nothing() 调用：");
    return_nothing();
    printf("\n");
    
    /*
     * 2. 返回指针的函数
     */
    printf("2. 返回指针的函数\n\n");
    
    printf("   注意事项：\n");
    printf("   1. 不能返回局部变量的地址（函数结束局部变量被销毁）\n");
    printf("   2. 可以返回静态局部变量、全局变量或动态分配内存的地址\n");
    printf("   3. 返回的指针应该有明确的所指对象\n\n");
    
    printf("   示例：返回字符串指针\n");
    
    // 函数声明
    const char* get_greeting(void);
    const char* get_day_name(int day);
    
    printf("   get_greeting() = \"%s\"\n", get_greeting());
    printf("   get_day_name(3) = \"%s\"\n", get_day_name(3));
    printf("\n");
    
    /*
     * 3. 返回数组的函数
     */
    printf("3. 返回数组的函数\n\n");
    
    printf("   C语言不能直接返回数组，但可以：\n");
    printf("   1. 返回指向数组的指针\n");
    printf("   2. 通过参数返回数组（需要调用者提供数组）\n");
    printf("   3. 返回结构体（结构体可以包含数组）\n\n");
    
    printf("   示例：通过参数返回数组\n");
    
    // 函数声明
    void generate_fibonacci(int arr[], int n);
    
    int fib[10];
    generate_fibonacci(fib, 10);
    
    printf("   斐波那契数列（前10项）：");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n\n");
    
    /*
     * 4. 多个返回值的实现
     */
    printf("4. 多个返回值的实现方法\n\n");
    
    printf("   C语言函数只能返回一个值，但可以通过以下方法返回多个值：\n");
    printf("   1. 通过指针参数返回多个值\n");
    printf("   2. 返回结构体（包含多个数据）\n");
    printf("   3. 使用全局变量（不推荐）\n\n");
    
    printf("   示例：通过指针参数返回多个值\n");
    
    // 函数声明
    void get_min_max(int arr[], int size, int *min, int *max);
    
    int data[] = {23, 45, 12, 67, 34, 89, 56, 21};
    int min_val, max_val;
    
    get_min_max(data, 8, &min_val, &max_val);
    
    printf("   数组：");
    for (int i = 0; i < 8; i++) {
        printf("%d ", data[i]);
    }
    printf("\n   最小值：%d\n", min_val);
    printf("   最大值：%d\n\n", max_val);
    
    /*
     * 5. 无返回值函数（void函数）
     */
    printf("5. 无返回值函数（void函数）\n\n");
    
    printf("   void函数的特点：\n");
    printf("   - 不返回任何值\n");
    printf("   - 可以没有return语句，或只有return;\n");
    printf("   - 通常用于执行操作而不需要返回结果\n\n");
    
    printf("   示例：void函数的各种用法\n");
    
    // 函数声明
    void display_menu(void);
    void process_data(int data);
    void cleanup_resources(void);
    
    printf("   调用display_menu()：\n");
    display_menu();
    printf("\n");
    
    printf("   调用process_data(100)：\n");
    process_data(100);
    printf("\n");
    
    printf("   调用cleanup_resources()：\n");
    cleanup_resources();
    printf("\n");
}

// 第四部分的函数定义
int return_int(void) {
    return 42;
}

double return_double(void) {
    return 3.14159;
}

char return_char(void) {
    return 'A';
}

void return_nothing(void) {
    printf("这个函数不返回任何值");
    // 可以没有return语句，或使用 return;
}

const char* get_greeting(void) {
    // 返回字符串字面量的地址（存储在只读区）
    return "Hello, World!";
}

const char* get_day_name(int day) {
    // 返回静态字符串数组的地址
    static const char* days[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday"
    };
    
    if (day >= 1 && day <= 7) {
        return days[day - 1];
    } else {
        return "Invalid day";
    }
}

void generate_fibonacci(int arr[], int n) {
    if (n >= 1) arr[0] = 0;
    if (n >= 2) arr[1] = 1;
    
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
}

void get_min_max(int arr[], int size, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

void display_menu(void) {
    printf("   === 菜单 ===\n");
    printf("   1. 开始游戏\n");
    printf("   2. 加载存档\n");
    printf("   3. 设置\n");
    printf("   4. 退出\n");
}

void process_data(int data) {
    printf("   处理数据：%d\n", data);
    printf("   数据处理完成\n");
}

void cleanup_resources(void) {
    printf("   清理资源中...\n");
    printf("   资源清理完成\n");
    return;  // 可选的return语句
}

/*================================================================
  第五部分：递归函数详解
  说明：理解函数调用自身的递归机制
================================================================*/

void part5_recursive_functions(void) {
    printf("\n");
    printf("================================================\n");
    printf("第五部分：递归函数详解\n");
    printf("================================================\n\n");
    
    /*
     * 1. 递归的基本概念
     */
    printf("1. 递归的基本概念\n\n");
    
    printf("   递归（Recursion）：\n");
    printf("   - 函数直接或间接调用自身\n");
    printf("   - 将大问题分解为相同的小问题\n");
    printf("   - 必须有递归终止条件（基线条件）\n\n");
    
    printf("   递归的三要素：\n");
    printf("   1. 递归公式：如何将问题分解\n");
    printf("   2. 基线条件：最简单的情况，直接求解\n");
    printf("   3. 递归调用：调用自身解决子问题\n\n");
    
    printf("   递归的优缺点：\n");
    printf("   优点：\n");
    printf("   - 代码简洁，表达清晰\n");
    printf("   - 适合解决分治问题\n");
    printf("   - 模仿数学归纳法\n\n");
    
    printf("   缺点：\n");
    printf("   - 可能效率较低\n");
    printf("   - 可能占用大量栈空间\n");
    printf("   - 调试较困难\n\n");
    
    /*
     * 2. 递归的基本示例
     */
    printf("2. 递归的基本示例\n\n");
    
    printf("   示例1：阶乘函数（n! = n × (n-1)!）\n");
    
    // 函数声明
    long long factorial_iterative(int n);  // 迭代版本
    long long factorial_recursive(int n);  // 递归版本
    
    int num = 5;
    printf("   计算 %d!：\n", num);
    printf("   迭代版本：%lld\n", factorial_iterative(num));
    printf("   递归版本：%lld\n", factorial_recursive(num));
    printf("\n");
    
    printf("   递归调用过程（以5!为例）：\n");
    printf("   factorial(5)\n");
    printf("   = 5 × factorial(4)\n");
    printf("   = 5 × 4 × factorial(3)\n");
    printf("   = 5 × 4 × 3 × factorial(2)\n");
    printf("   = 5 × 4 × 3 × 2 × factorial(1)\n");
    printf("   = 5 × 4 × 3 × 2 × 1\n");
    printf("   = 120\n\n");
    
    printf("   示例2：斐波那契数列（F(n) = F(n-1) + F(n-2)）\n");
    
    // 函数声明
    int fibonacci_iterative(int n);  // 迭代版本
    int fibonacci_recursive(int n);  // 递归版本
    
    int fib_num = 7;
    printf("   斐波那契数列第%d项：\n", fib_num);
    printf("   迭代版本：%d\n", fibonacci_iterative(fib_num));
    printf("   递归版本：%d\n", fibonacci_recursive(fib_num));
    printf("\n");
    
    /*
     * 3. 递归的应用示例
     */
    printf("3. 递归的应用示例\n\n");
    
    printf("   示例1：汉诺塔问题\n");
    
    // 函数声明
    void hanoi(int n, char from, char to, char aux);
    
    int disks = 3;
    printf("   汉诺塔（%d个盘子）移动步骤：\n", disks);
    hanoi(disks, 'A', 'C', 'B');
    printf("\n");
    
    printf("   示例2：二分查找（递归版）\n");
    
    // 函数声明
    int binary_search_recursive(int arr[], int left, int right, int target);
    
    int sorted_array[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 72};
    int target = 23;
    int size = sizeof(sorted_array) / sizeof(sorted_array[0]);
    
    int index = binary_search_recursive(sorted_array, 0, size - 1, target);
    
    printf("   在排序数组中查找 %d：\n", target);
    if (index != -1) {
        printf("   找到，位置：%d\n", index);
    } else {
        printf("   未找到\n");
    }
    printf("\n");
    
    printf("   示例3：目录遍历（模拟）\n");
    
    // 函数声明
    void traverse_directory(int depth);
    
    printf("   模拟目录遍历（深度3）：\n");
    traverse_directory(3);
    printf("\n");
    
    /*
     * 4. 递归的优化：尾递归
     */
    printf("4. 递归的优化：尾递归\n\n");
    
    printf("   尾递归（Tail Recursion）：\n");
    printf("   - 递归调用是函数的最后一个操作\n");
    printf("   - 可以被编译器优化为循环\n");
    printf("   - 减少栈空间的使用\n\n");
    
    printf("   示例：尾递归 vs 普通递归\n");
    
    // 函数声明
    long long factorial_tail_recursive(int n, long long result);
    
    int tail_num = 5;
    printf("   计算 %d!（尾递归）：\n", tail_num);
    printf("   结果：%lld\n", factorial_tail_recursive(tail_num, 1));
    printf("\n");
    
    printf("   尾递归调用过程：\n");
    printf("   factorial_tail(5, 1)\n");
    printf("   factorial_tail(4, 5×1=5)\n");
    printf("   factorial_tail(3, 4×5=20)\n");
    printf("   factorial_tail(2, 3×20=60)\n");
    printf("   factorial_tail(1, 2×60=120)\n");
    printf("   返回：120\n\n");
    
    /*
     * 5. 递归的注意事项
     */
    printf("5. 递归的注意事项\n\n");
    
    printf("   注意事项：\n");
    printf("   1. 必须有递归终止条件，否则无限递归\n");
    printf("   2. 递归深度不宜过深（栈溢出风险）\n");
    printf("   3. 考虑效率问题，必要时使用迭代\n");
    printf("   4. 使用调试工具跟踪递归调用\n");
    printf("   5. 对于复杂递归，考虑使用备忘录（Memoization）优化\n\n");
    
    printf("   递归与迭代的选择：\n");
    printf("   - 问题自然适合递归：使用递归（如树遍历）\n");
    printf("   - 效率要求高：使用迭代\n");
    printf("   - 递归深度可能很大：考虑迭代或尾递归\n");
    printf("   - 代码简洁性重要：可以考虑递归\n\n");
}

// 第五部分的函数定义
long long factorial_iterative(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long factorial_recursive(int n) {
    // 基线条件
    if (n <= 1) {
        return 1;
    }
    // 递归调用
    return n * factorial_recursive(n - 1);
}

int fibonacci_iterative(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    int a = 0, b = 1, c;
    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int fibonacci_recursive(int n) {
    // 基线条件
    if (n <= 0) return 0;
    if (n == 1) return 1;
    
    // 递归调用
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("   将盘子从 %c 移动到 %c\n", from, to);
        return;
    }
    
    hanoi(n - 1, from, aux, to);
    printf("   将盘子从 %c 移动到 %c\n", from, to);
    hanoi(n - 1, aux, to, from);
}

int binary_search_recursive(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;  // 未找到
    }
    
    int mid = left + (right - left) / 2;
    
    if (arr[mid] == target) {
        return mid;  // 找到
    } else if (arr[mid] > target) {
        return binary_search_recursive(arr, left, mid - 1, target);
    } else {
        return binary_search_recursive(arr, mid + 1, right, target);
    }
}

void traverse_directory(int depth) {
    // 基线条件
    if (depth <= 0) {
        return;
    }
    
    static int dir_count = 0;
    dir_count++;
    
    printf("   进入目录%d（深度：%d）\n", dir_count, depth);
    
    // 模拟处理文件
    printf("   处理当前目录的文件...\n");
    
    // 递归进入子目录
    traverse_directory(depth - 1);
    
    printf("   退出目录%d\n", dir_count);
    dir_count--;
}

long long factorial_tail_recursive(int n, long long result) {
    if (n <= 1) {
        return result;
    }
    return factorial_tail_recursive(n - 1, n * result);
}

/*================================================================
  第六部分：变量的作用域和存储类别
  说明：理解变量的可见性和生存期
================================================================*/

void part6_variable_scope_and_storage(void) {
    printf("\n");
    printf("================================================\n");
    printf("第六部分：变量的作用域和存储类别\n");
    printf("================================================\n\n");
    
    /*
     * 1. 变量的作用域
     */
    printf("1. 变量的作用域（Scope）\n\n");
    
    printf("   作用域定义：变量在程序中的可见范围\n\n");
    
    printf("   分类：\n");
    printf("   1. 局部变量（Local Variable）\n");
    printf("      - 在函数内部定义\n");
    printf("      - 只在该函数内可见\n");
    printf("      - 函数执行时创建，执行完销毁\n\n");
    
    printf("   示例：局部变量\n");
    {
        int local_var = 100;  // 块作用域局部变量
        printf("   块内：local_var = %d\n", local_var);
    }
    // printf("块外：local_var = %d\n", local_var);  // 错误！不可见
    printf("\n");
    
    printf("   2. 全局变量（Global Variable）\n");
    printf("      - 在所有函数外部定义\n");
    printf("      - 在整个程序中都可见\n");
    printf("      - 程序开始时创建，程序结束时销毁\n\n");
    
    // 全局变量示例
    int global_counter = 0;  // 全局变量
    
    // 函数声明
    void increment_counter(void);
    void print_counter(void);
    
    printf("   全局变量示例：\n");
    print_counter();
    increment_counter();
    increment_counter();
    print_counter();
    printf("\n");
    
    printf("   3. 形式参数（Formal Parameters）\n");
    printf("      - 函数定义时的参数\n");
    printf("      - 作用域同局部变量\n\n");
    
    /*
     * 2. 变量的存储类别
     */
    printf("2. 变量的存储类别（Storage Class）\n\n");
    
    printf("   存储类别定义：变量的生存期和存储位置\n\n");
    
    printf("   分类：\n");
    printf("   1. 自动变量（auto）\n");
    printf("      - 默认存储类别（省略时默认auto）\n");
    printf("      - 存储在栈上\n");
    printf("      - 进入作用域时创建，离开时销毁\n\n");
    
    printf("   示例：\n");
    printf("   void func() {\n");
    printf("       auto int x = 10;  // 等价于 int x = 10;\n");
    printf("       // ...\n");
    printf("   }\n\n");
    
    printf("   2. 静态变量（static）\n");
    printf("      - 存储在静态存储区\n");
    printf("      - 程序开始时初始化一次\n");
    printf("      - 函数调用间保持值不变\n\n");
    
    printf("   示例：静态局部变量\n");
    
    // 函数声明
    void static_variable_demo(void);
    
    printf("   调用static_variable_demo()：\n");
    for (int i = 0; i < 3; i++) {
        static_variable_demo();
    }
    printf("\n");
    
    printf("   3. 寄存器变量（register）\n");
    printf("      - 建议编译器将变量存储在寄存器中\n");
    printf("      - 提高访问速度\n");
    printf("      - 不能取地址（&）\n\n");
    
    printf("   示例：\n");
    printf("   void func() {\n");
    printf("       register int i;  // 建议存储在寄存器\n");
    printf("       for (i = 0; i < 1000; i++) { ... }\n");
    printf("   }\n\n");
    
    printf("   4. 外部变量（extern）\n");
    printf("      - 声明在其他文件中定义的全局变量\n");
    printf("      - 用于多文件程序\n\n");
    
    /*
     * 3. 变量的生存期
     */
    printf("3. 变量的生存期（Lifetime）\n\n");
    
    printf("   生存期定义：变量存在的时间\n\n");
    
    printf("   分类：\n");
    printf("   1. 自动生存期（auto, register）\n");
    printf("      - 进入作用域时创建\n");
    printf("      - 离开作用域时销毁\n");
    printf("      - 示例：局部变量\n\n");
    
    printf("   2. 静态生存期（static, 全局变量）\n");
    printf("      - 程序开始时创建\n");
    printf("      - 程序结束时销毁\n");
    printf("      - 保持值不变\n\n");
    
    printf("   3. 动态生存期（动态分配内存）\n");
    printf("      - malloc()时创建\n");
    printf("      - free()时销毁\n");
    printf("      - 完全由程序员控制\n\n");
    
    /*
     * 4. 作用域和存储类别的综合示例
     */
    printf("4. 综合示例\n\n");
    
    // 静态全局变量（只在当前文件可见）
    static int file_static_var = 0;
    
    // 函数声明
    void scope_demo1(void);
    void scope_demo2(void);
    
    printf("   作用域演示：\n");
    scope_demo1();
    scope_demo2();
    printf("\n");
    
    printf("   结论：\n");
    printf("   - 合理使用static可以保护数据\n");
    printf("   - 避免过度使用全局变量\n");
    printf("   - 根据需求选择合适的存储类别\n\n");
}

// 全局变量
int global_counter = 0;

void increment_counter(void) {
    global_counter++;
}

void print_counter(void) {
    printf("   当前计数：%d\n", global_counter);
}

void static_variable_demo(void) {
    static int static_count = 0;  // 只初始化一次
    int auto_count = 0;           // 每次调用都初始化
    
    static_count++;
    auto_count++;
    
    printf("   static_count = %d, auto_count = %d\n", static_count, auto_count);
}

void scope_demo1(void) {
    int local_var = 10;
    static int static_local = 20;
    
    printf("   scope_demo1: local_var = %d, static_local = %d\n", 
           local_var, static_local);
    
    local_var++;
    static_local++;
}

void scope_demo2(void) {
    // printf("local_var = %d\n", local_var);  // 错误！不可见
    // 但static_local也不同，每个函数有自己的静态变量
    static int static_local = 30;
    printf("   scope_demo2: static_local = %d\n", static_local);
    static_local++;
}

/*================================================================
  第七部分：函数指针详解
  说明：指向函数的指针
================================================================*/

void part7_function_pointers(void) {
    printf("\n");
    printf("================================================\n");
    printf("第七部分：函数指针详解\n");
    printf("================================================\n\n");
    
    /*
     * 1. 函数指针的基本概念
     */
    printf("1. 函数指针的基本概念\n\n");
    
    printf("   函数指针：指向函数的指针变量\n");
    printf("   可以像普通函数一样调用\n");
    printf("   用于实现回调函数、函数表等高级功能\n\n");
    
    printf("   声明语法：\n");
    printf("   返回类型 (*指针变量名)(参数列表);\n\n");
    
    printf("   示例：\n");
    printf("   int (*func_ptr)(int, int);  // 指向接受两个int返回int的函数\n");
    printf("   void (*print_ptr)(char*);   // 指向接受char*返回void的函数\n\n");
    
    /*
     * 2. 函数指针的基本使用
     */
    printf("2. 函数指针的基本使用\n\n");
    
    // 普通函数声明
    int add_numbers(int a, int b);
    int multiply_numbers(int a, int b);
    
    printf("   示例：函数指针赋值和调用\n");
    
    // 声明函数指针
    int (*operation)(int, int);
    
    // 指向add_numbers函数
    operation = add_numbers;
    printf("   operation指向add_numbers：\n");
    printf("   operation(10, 20) = %d\n", operation(10, 20));
    
    // 指向multiply_numbers函数
    operation = multiply_numbers;
    printf("   operation指向multiply_numbers：\n");
    printf("   operation(10, 20) = %d\n\n", operation(10, 20));
    
    /*
     * 3. 函数指针作为参数
     */
    printf("3. 函数指针作为参数\n\n");
    
    printf("   用途：实现回调函数（Callback）\n\n");
    
    // 函数声明
    void process_array(int arr[], int size, int (*process)(int));
    int square(int x);
    int cube(int x);
    int double_value(int x);
    
    int numbers[5] = {1, 2, 3, 4, 5};
    
    printf("   原数组：");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    
    printf("   使用square函数处理数组：\n");
    process_array(numbers, 5, square);
    printf("   结果：");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    
    // 恢复数组
    for (int i = 0; i < 5; i++) {
        numbers[i] = i + 1;
    }
    
    printf("   使用cube函数处理数组：\n");
    process_array(numbers, 5, cube);
    printf("   结果：");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    
    /*
     * 4. 函数指针数组
     */
    printf("4. 函数指针数组\n\n");
    
    printf("   用途：实现函数表（Dispatch Table）\n\n");
    
    // 函数声明
    void say_hello(void);
    void say_goodbye(void);
    void say_thanks(void);
    
    // 函数指针数组
    void (*greetings[])(void) = {
        say_hello,
        say_goodbye,
        say_thanks
    };
    
    printf("   函数指针数组演示：\n");
    for (int i = 0; i < 3; i++) {
        printf("   调用greetings[%d]: ", i);
        greetings[i]();
    }
    printf("\n");
    
    /*
     * 5. 实际应用：计算器程序
     */
    printf("5. 实际应用：计算器程序\n\n");
    
    // 计算器操作函数
    double calc_add(double a, double b) { return a + b; }
    double calc_subtract(double a, double b) { return a - b; }
    double calc_multiply(double a, double b) { return a * b; }
    double calc_divide(double a, double b) { 
        if (b != 0) return a / b;
        else { printf("错误：除数不能为0！"); return 0; }
    }
    
    // 函数指针数组
    double (*operations[])(double, double) = {
        calc_add,
        calc_subtract,
        calc_multiply,
        calc_divide
    };
    
    char* op_names[] = {"加法", "减法", "乘法", "除法"};
    
    double x = 15.0, y = 3.0;
    
    printf("   计算器演示：%.1f 和 %.1f\n", x, y);
    printf("   -------------------------\n");
    
    for (int i = 0; i < 4; i++) {
        double result = operations[i](x, y);
        printf("   %s：%.1f %s %.1f = %.2f\n", 
               op_names[i], x, 
               (i==0?"+":(i==1?"-":(i==2?"×":"÷"))), 
               y, result);
    }
    printf("\n");
    
    /*
     * 6. 函数指针的注意事项
     */
    printf("6. 函数指针的注意事项\n\n");
    
    printf("   注意1：函数指针的类型必须匹配\n");
    printf("   参数类型、个数和返回类型必须完全一致\n\n");
    
    printf("   注意2：函数名本身就是指针\n");
    printf("   operation = add_numbers;  // add_numbers是函数指针\n");
    printf("   operation = &add_numbers; // 等价写法\n\n");
    
    printf("   注意3：调用时两种写法等价\n");
    printf("   (*operation)(10, 20);  // 传统写法\n");
    printf("   operation(10, 20);     // 简洁写法（推荐）\n\n");
    
    printf("   注意4：NULL函数指针\n");
    printf("   函数指针可以设为NULL，调用前应检查\n");
    printf("   if (operation != NULL) operation(10, 20);\n\n");
    
    printf("   函数指针的应用场景：\n");
    printf("   1. 回调函数（事件处理、排序比较）\n");
    printf("   2. 插件系统\n");
    printf("   3. 状态机\n");
    printf("   4. 命令模式\n");
    printf("   5. 虚函数表（C++）\n\n");
}

// 第七部分的函数定义
int add_numbers(int a, int b) {
    return a + b;
}

int multiply_numbers(int a, int b) {
    return a * b;
}

int square(int x) {
    return x * x;
}

int cube(int x) {
    return x * x * x;
}

int double_value(int x) {
    return x * 2;
}

void process_array(int arr[], int size, int (*process)(int)) {
    for (int i = 0; i < size; i++) {
        arr[i] = process(arr[i]);
    }
}

void say_hello(void) {
    printf("你好！\n");
}

void say_goodbye(void) {
    printf("再见！\n");
}

void say_thanks(void) {
    printf("谢谢！\n");
}

/*================================================================
  第八部分：函数编程技巧
  说明：编写高质量函数的技巧
================================================================*/

void part8_function_programming_tips(void) {
    printf("\n");
    printf("================================================\n");
    printf("第八部分：函数编程技巧\n");
    printf("================================================\n\n");
    
    printf("1. 函数设计原则\n");
    printf("   - 单一职责原则：一个函数只做一件事\n");
    printf("   - 简短原则：函数最好不超过一屏（约50行）\n");
    printf("   - 明确命名：函数名应清晰表达其功能\n");
    printf("   - 参数最少化：参数越少越容易使用\n\n");
    
    printf("2. 参数传递建议\n");
    printf("   - 输入参数：使用值传递或const指针\n");
    printf("   - 输出参数：使用指针传递\n");
    printf("   - 大对象：使用const引用或指针\n");
    printf("   - 可选参数：使用结构体或默认值（C99后）\n\n");
    
    printf("3. 返回值设计\n");
    printf("   - 返回错误码：使用int返回错误状态\n");
    printf("   - 返回多个值：使用结构体或输出参数\n");
    printf("   - 返回资源：确保调用者知道如何释放\n");
    printf("   - 返回const：防止意外修改\n\n");
    
    printf("4. 错误处理策略\n");
    printf("   - 返回错误码：简单直接\n");
    printf("   - 设置errno：标准库方式\n");
    printf("   - 回调错误处理：灵活但复杂\n");
    printf("   - 断言检查：调试阶段使用\n\n");
    
    printf("5. 递归使用建议\n");
    printf("   - 确保有终止条件\n");
    printf("   - 避免过深递归\n");
    printf("   - 考虑尾递归优化\n");
    printf("   - 必要时使用迭代替代\n\n");
    
    printf("6. 函数指针应用\n");
    printf("   - 回调函数：事件处理、比较函数\n");
    printf("   - 策略模式：不同的算法实现\n");
    printf("   - 插件架构：动态加载函数\n");
    printf("   - 状态机：状态转移函数\n\n");
    
    printf("7. 性能优化技巧\n");
    printf("   - inline函数：小函数内联展开\n");
    printf("   - static函数：内部链接，可能被优化\n");
    printf("   - 减少函数调用开销：小函数合并\n");
    printf("   - 预计算：不变的计算移到循环外\n\n");
    
    printf("8. 可维护性建议\n");
    printf("   - 添加文档注释\n");
    printf("   - 保持函数接口稳定\n");
    printf("   - 单元测试\n");
    printf("   - 版本控制\n\n");
}
