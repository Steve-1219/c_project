#include <stdio.h>
#include <stdlib.h>     // 动态内存分配
#include <string.h>     // 字符串处理
#include <stddef.h>     // NULL定义

/*================================================================
  第一部分：指针概述
  说明：理解指针的基本概念
================================================================*/

void part1_pointer_overview(void) {
    printf("\n");
    printf("================================================\n");
    printf("第一部分：指针概述\n");
    printf("================================================\n\n");
    
    printf("指针（Pointer）的定义：\n");
    printf("指针是存储内存地址的变量\n\n");
    
    printf("指针的重要性：\n");
    printf("1. 直接访问内存\n");
    printf("2. 高效传递大数据\n");
    printf("3. 动态内存管理\n");
    printf("4. 实现复杂数据结构\n");
    printf("5. 函数间通信\n\n");
    
    printf("内存地址概念：\n");
    printf("内存就像一排连续的盒子，每个盒子有唯一的地址\n");
    printf("变量名是盒子的标签，指针是记录盒子地址的便签\n\n");
    
    printf("示例：\n");
    printf("int num = 42;        // 盒子标签'num'，里面放42\n");
    printf("int *ptr = &num;     // 便签'ptr'，记录'num'盒子的地址\n");
    printf("通过ptr可以找到num盒子，访问里面的42\n\n");
    
    printf("指针的分类：\n");
    printf("1. 基本类型指针（int *, float *, char *）\n");
    printf("2. 指针的指针（int **）\n");
    printf("3. 函数指针\n");
    printf("4. 数组指针\n");
    printf("5. 结构体指针\n");
    printf("6. void指针（通用指针）\n\n");
    
    printf("学习指针的关键：\n");
    printf("1. 理解指针的指向\n");
    printf("2. 掌握指针运算符\n");
    printf("3. 区分指针和指针指向的值\n");
    printf("4. 理解指针运算\n");
    printf("5. 避免常见错误\n\n");
}

/*================================================================
  第二部分：指针基础
  说明：指针的声明、初始化和基本使用
================================================================*/

void part2_pointer_basics(void) {
    printf("\n");
    printf("================================================\n");
    printf("第二部分：指针基础\n");
    printf("================================================\n\n");
    
    /*
     * 1. 指针的声明和初始化
     */
    printf("1. 指针的声明和初始化\n\n");
    
    printf("   声明语法：数据类型 *指针变量名;\n\n");
    
    printf("   示例：\n");
    printf("   int *p;      // 声明一个指向int的指针\n");
    printf("   float *fp;   // 声明一个指向float的指针\n");
    printf("   char *cp;    // 声明一个指向char的指针\n");
    printf("   void *vp;    // 声明一个通用指针\n\n");
    
    printf("   初始化指针：\n");
    printf("   int num = 10;\n");
    printf("   int *p = &num;  // p指向num的地址\n\n");
    
    printf("   重要概念：\n");
    printf("   & 运算符：取地址运算符\n");
    printf("   * 运算符：解引用运算符\n\n");
    
    /*
     * 2. 基本指针操作演示
     */
    printf("2. 基本指针操作演示\n\n");
    
    int num = 42;
    int *p = &num;  // p指向num
    
    printf("   变量信息：\n");
    printf("   num = %d       // 变量的值\n", num);
    printf("   &num = %p     // 变量的地址\n", (void*)&num);
    printf("   p = %p       // 指针的值（存储的地址）\n", (void*)p);
    printf("   *p = %d        // 指针指向的值\n", *p);
    printf("   &p = %p     // 指针自己的地址\n", (void*)&p);
    printf("\n");
    
    /*
     * 3. 指针的类型
     */
    printf("3. 指针的类型\n\n");
    
    printf("   指针类型的重要性：\n");
    printf("   1. 告诉编译器如何解释指向的数据\n");
    printf("   2. 决定指针运算的步长\n");
    printf("   3. 类型检查避免错误\n\n");
    
    int int_var = 100;
    float float_var = 3.14;
    char char_var = 'A';
    
    int *int_ptr = &int_var;
    float *float_ptr = &float_var;
    char *char_ptr = &char_var;
    
    printf("   不同类型指针演示：\n");
    printf("   int指针：   int_ptr = %p, *int_ptr = %d\n", 
           (void*)int_ptr, *int_ptr);
    printf("   float指针： float_ptr = %p, *float_ptr = %.2f\n", 
           (void*)float_ptr, *float_ptr);
    printf("   char指针：  char_ptr = %p, *char_ptr = '%c'\n", 
           (void*)char_ptr, *char_ptr);
    printf("\n");
    
    printf("   指针大小：所有指针的大小相同（通常是4或8字节）\n");
    printf("   sizeof(int *) = %zu 字节\n", sizeof(int*));
    printf("   sizeof(float *) = %zu 字节\n", sizeof(float*));
    printf("   sizeof(char *) = %zu 字节\n", sizeof(char*));
    printf("   sizeof(void *) = %zu 字节\n\n", sizeof(void*));
    
    /*
     * 4. 空指针和野指针
     */
    printf("4. 空指针和野指针\n\n");
    
    printf("   空指针（NULL Pointer）：\n");
    printf("   表示指针不指向任何有效内存\n");
    printf("   通常定义为 (void*)0\n");
    printf("   使用前应检查是否为NULL\n\n");
    
    int *null_ptr = NULL;
    printf("   空指针示例：\n");
    printf("   null_ptr = %p\n", (void*)null_ptr);
    if (null_ptr == NULL) {
        printf("   这是空指针，不能解引用！\n");
    }
    printf("\n");
    
    printf("   野指针（Wild Pointer/Dangling Pointer）：\n");
    printf("   指向已释放内存或未初始化的指针\n");
    printf("   访问野指针会导致未定义行为\n\n");
    
    printf("   野指针示例：\n");
    printf("   int *wild_ptr;       // 未初始化，是野指针\n");
    printf("   // *wild_ptr = 10;   // 危险！可能崩溃\n");
    printf("\n");
    
    /*
     * 5. 指针的赋值和比较
     */
    printf("5. 指针的赋值和比较\n\n");
    
    int a = 10, b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;
    int *ptr3 = ptr1;  // ptr3也指向a
    
    printf("   指针赋值和比较演示：\n");
    printf("   a = %d, &a = %p\n", a, (void*)&a);
    printf("   b = %d, &b = %p\n", b, (void*)&b);
    printf("   ptr1 = %p, *ptr1 = %d\n", (void*)ptr1, *ptr1);
    printf("   ptr2 = %p, *ptr2 = %d\n", (void*)ptr2, *ptr2);
    printf("   ptr3 = %p, *ptr3 = %d\n", (void*)ptr3, *ptr3);
    printf("\n");
    
    printf("   指针比较：\n");
    printf("   ptr1 == ptr2 ? %s\n", ptr1 == ptr2 ? "true" : "false");
    printf("   ptr1 == ptr3 ? %s\n", ptr1 == ptr3 ? "true" : "false");
    printf("   ptr1 != ptr2 ? %s\n", ptr1 != ptr2 ? "true" : "false");
    printf("\n");
    
    /*
     * 6. const与指针
     */
    printf("6. const与指针\n\n");
    
    printf("   四种const指针组合：\n");
    
    int value = 100;
    int another = 200;
    
    // 1. 指向常量的指针
    const int *p1 = &value;
    printf("   1. const int *p1：指针指向的值不能修改\n");
    printf("      *p1 = %d\n", *p1);
    // *p1 = 300;  // 错误：不能修改指向的值
    p1 = &another;  // 正确：可以修改指针本身
    printf("      p1可以指向另一个变量\n\n");
    
    // 2. 指针常量
    int *const p2 = &value;
    printf("   2. int *const p2：指针本身不能修改\n");
    printf("      *p2 = %d\n", *p2);
    *p2 = 300;      // 正确：可以修改指向的值
    // p2 = &another; // 错误：不能修改指针本身
    printf("      通过p2修改value为：%d\n\n", value);
    
    // 3. 指向常量的指针常量
    const int *const p3 = &value;
    printf("   3. const int *const p3：都不能修改\n");
    printf("      *p3 = %d\n", *p3);
    // *p3 = 400;    // 错误：不能修改指向的值
    // p3 = &another; // 错误：不能修改指针本身
    printf("      最严格的限制\n\n");
    
    printf("   记忆技巧：\n");
    printf("   const在*左边：指向的值是常量\n");
    printf("   const在*右边：指针本身是常量\n");
    printf("   const在*两边：都是常量\n\n");
}

/*================================================================
  第三部分：指针运算
  说明：指针的算术运算和关系运算
================================================================*/

void part3_pointer_arithmetic(void) {
    printf("\n");
    printf("================================================\n");
    printf("第三部分：指针运算\n");
    printf("================================================\n\n");
    
    /*
     * 1. 指针算术运算
     */
    printf("1. 指针算术运算\n\n");
    
    printf("   指针支持的运算：\n");
    printf("   - 加法：ptr + n\n");
    printf("   - 减法：ptr - n, ptr1 - ptr2\n");
    printf("   - 自增：ptr++\n");
    printf("   - 自减：ptr--\n");
    printf("   - 比较：ptr1 == ptr2, ptr1 < ptr2等\n\n");
    
    printf("   重要概念：指针运算的单位是类型大小\n");
    printf("   ptr + 1 移动 sizeof(*ptr) 字节\n\n");
    
    /*
     * 2. 指针算术演示
     */
    printf("2. 指针算术演示\n\n");
    
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // 指向数组第一个元素
    
    printf("   int arr[5] = {10, 20, 30, 40, 50};\n");
    printf("   int *ptr = arr;  // ptr指向arr[0]\n\n");
    
    printf("   初始状态：\n");
    printf("   ptr = %p, *ptr = %d\n", (void*)ptr, *ptr);
    printf("\n");
    
    printf("   指针加法：\n");
    printf("   ptr + 1 = %p, *(ptr+1) = %d\n", 
           (void*)(ptr + 1), *(ptr + 1));
    printf("   ptr + 2 = %p, *(ptr+2) = %d\n", 
           (void*)(ptr + 2), *(ptr + 2));
    printf("   ptr + 3 = %p, *(ptr+3) = %d\n", 
           (void*)(ptr + 3), *(ptr + 3));
    printf("\n");
    
    printf("   指针减法：\n");
    printf("   ptr + 3 - ptr = %td (元素个数)\n", (ptr + 3) - ptr);
    printf("   (ptr + 3) - (ptr + 1) = %td\n", (ptr + 3) - (ptr + 1));
    printf("\n");
    
    printf("   自增自减：\n");
    ptr = arr;  // 重置
    printf("   初始：*ptr = %d\n", *ptr);
    ptr++;      // 移动到下一个元素
    printf("   ptr++后：*ptr = %d\n", *ptr);
    ptr--;      // 移回前一个元素
    printf("   ptr--后：*ptr = %d\n", *ptr);
    printf("\n");
    
    /*
     * 3. 不同类型指针的运算
     */
    printf("3. 不同类型指针的运算\n\n");
    
    printf("   不同类型指针运算的步长不同：\n");
    
    char char_arr[5] = {'A', 'B', 'C', 'D', 'E'};
    int int_arr[5] = {100, 200, 300, 400, 500};
    double double_arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    
    char *cp = char_arr;
    int *ip = int_arr;
    double *dp = double_arr;
    
    printf("   初始地址：\n");
    printf("   cp = %p, ip = %p, dp = %p\n", 
           (void*)cp, (void*)ip, (void*)dp);
    printf("\n");
    
    printf("   +1后的地址：\n");
    printf("   cp + 1 = %p (移动 %zu 字节)\n", 
           (void*)(cp + 1), sizeof(char));
    printf("   ip + 1 = %p (移动 %zu 字节)\n", 
           (void*)(ip + 1), sizeof(int));
    printf("   dp + 1 = %p (移动 %zu 字节)\n", 
           (void*)(dp + 1), sizeof(double));
    printf("\n");
    
    printf("   验证步长：\n");
    printf("   (cp + 1) - cp = %td (char单位)\n", (cp + 1) - cp);
    printf("   (ip + 1) - ip = %td (int单位)\n", (ip + 1) - ip);
    printf("   (dp + 1) - dp = %td (double单位)\n", (dp + 1) - dp);
    printf("\n");
    
    /*
     * 4. 指针关系运算
     */
    printf("4. 指针关系运算\n\n");
    
    int numbers[5] = {1, 2, 3, 4, 5};
    int *p1 = &numbers[1];  // 指向第二个元素
    int *p2 = &numbers[3];  // 指向第四个元素
    int *p3 = &numbers[1];  // 也指向第二个元素
    
    printf("   指针关系运算演示：\n");
    printf("   numbers[1]地址：%p\n", (void*)p1);
    printf("   numbers[3]地址：%p\n", (void*)p2);
    printf("   另一个指向numbers[1]的指针：%p\n", (void*)p3);
    printf("\n");
    
    printf("   比较结果：\n");
    printf("   p1 == p2 ? %s\n", p1 == p2 ? "true" : "false");
    printf("   p1 == p3 ? %s\n", p1 == p3 ? "true" : "false");
    printf("   p1 != p2 ? %s\n", p1 != p2 ? "true" : "false");
    printf("   p1 < p2 ? %s\n", p1 < p2 ? "true" : "false");
    printf("   p1 > p2 ? %s\n", p1 > p2 ? "true" : "false");
    printf("   p1 <= p3 ? %s\n", p1 <= p3 ? "true" : "false");
    printf("\n");
    
    /*
     * 5. 指针运算的应用
     */
    printf("5. 指针运算的应用\n\n");
    
    printf("   应用1：遍历数组\n");
    int data[5] = {10, 20, 30, 40, 50};
    int *p = data;
    
    printf("   使用指针遍历数组：\n");
    printf("   元素：");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(p + i));  // 等价于 p[i]
    }
    printf("\n\n");
    
    printf("   应用2：指针比较控制循环\n");
    printf("   另一种遍历方式：\n");
    printf("   元素：");
    for (int *ptr = data; ptr < data + 5; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n\n");
    
    printf("   应用3：计算数组长度\n");
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *start = arr;
    int *end = arr + 10;
    printf("   数组长度 = 尾指针 - 头指针 = %td\n", end - start);
    printf("\n");
    
    printf("   应用4：字符串处理\n");
    char str[] = "Hello";
    char *s = str;
    
    printf("   字符串：%s\n", str);
    printf("   使用指针遍历字符串：");
    while (*s != '\0') {
        printf("%c ", *s);
        s++;
    }
    printf("\n\n");
    
    /*
     * 6. 指针运算的注意事项
     */
    printf("6. 指针运算的注意事项\n\n");
    
    printf("   注意1：指针运算只在同一数组内有效\n");
    printf("   不同数组的指针比较或运算是未定义的\n\n");
    
    printf("   注意2：不能对void指针进行算术运算\n");
    printf("   void *vp = ...;\n");
    printf("   // vp++;  // 错误：void指针大小未知\n\n");
    
    printf("   注意3：指针越界\n");
    printf("   访问数组外的内存是危险的\n");
    printf("   int arr[5];\n");
    printf("   int *p = arr + 10;  // 越界！\n");
    printf("   *p = 100;           // 未定义行为\n\n");
    
    printf("   注意4：指针类型转换后的运算\n");
    printf("   类型转换后，运算的步长会改变\n");
    printf("   char *cp = ...;\n");
    printf("   int *ip = (int*)cp;\n");
    printf("   ip++ 移动4字节，不是1字节\n\n");
}

/*================================================================
  第四部分：指针与数组
  说明：指针和数组的密切关系
================================================================*/

void part4_pointers_and_arrays(void) {
    printf("\n");
    printf("================================================\n");
    printf("第四部分：指针与数组\n");
    printf("================================================\n\n");
    
    /*
     * 1. 数组名是指针常量
     */
    printf("1. 数组名是指针常量\n\n");
    
    printf("   重要事实：数组名是数组首元素的地址\n");
    printf("   int arr[5];\n");
    printf("   arr == &arr[0]  // true\n\n");
    
    int arr[5] = {10, 20, 30, 40, 50};
    
    printf("   验证：\n");
    printf("   arr     = %p\n", (void*)arr);
    printf("   &arr[0] = %p\n", (void*)&arr[0]);
    printf("   arr == &arr[0] ? %s\n", arr == &arr[0] ? "true" : "false");
    printf("\n");
    
    printf("   数组名与指针的区别：\n");
    printf("   - 数组名是常量，不能修改\n");
    printf("   - 指针是变量，可以修改\n\n");
    
    printf("   示例：\n");
    printf("   int *p = arr;  // 正确\n");
    printf("   p++;           // 正确，p现在指向arr[1]\n");
    printf("   // arr++;     // 错误！数组名是常量\n\n");
    
    /*
     * 2. 指针访问数组元素
     */
    printf("2. 指针访问数组元素\n\n");
    
    printf("   四种等价的数组访问方式：\n");
    int numbers[5] = {1, 2, 3, 4, 5};
    
    printf("   数组：");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n\n");
    
    printf("   访问方式：\n");
    printf("   1. 下标表示法：numbers[2] = %d\n", numbers[2]);
    printf("   2. 指针表示法：*(numbers + 2) = %d\n", *(numbers + 2));
    
    int *ptr = numbers;
    printf("   3. 指针下标法：ptr[2] = %d\n", ptr[2]);
    printf("   4. 指针偏移法：*(ptr + 2) = %d\n\n", *(ptr + 2));
    
    printf("   内部转换：\n");
    printf("   arr[i] 被编译器转换为 *(arr + i)\n");
    printf("   因此 arr[i] 和 i[arr] 都有效！（但不推荐i[arr]）\n");
    printf("   numbers[2] = %d, 2[numbers] = %d\n", numbers[2], 2[numbers]);
    printf("\n");
    
    /*
     * 3. 指针遍历数组
     */
    printf("3. 指针遍历数组\n\n");
    
    int values[6] = {100, 200, 300, 400, 500, 600};
    
    printf("   方法1：使用下标\n");
    printf("   元素：");
    for (int i = 0; i < 6; i++) {
        printf("%d ", values[i]);
    }
    printf("\n\n");
    
    printf("   方法2：使用指针算术\n");
    printf("   元素：");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(values + i));
    }
    printf("\n\n");
    
    printf("   方法3：移动指针\n");
    printf("   元素：");
    int *p = values;
    for (int i = 0; i < 6; i++) {
        printf("%d ", *p);
        p++;  // 移动到下一个元素
    }
    printf("\n\n");
    
    printf("   方法4：指针比较\n");
    printf("   元素：");
    for (int *ptr = values; ptr < values + 6; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n\n");
    
    /*
     * 4. 数组指针 vs 指针数组
     */
    printf("4. 数组指针 vs 指针数组\n\n");
    
    printf("   重要区别：\n");
    printf("   数组指针：指向数组的指针\n");
    printf("   指针数组：元素是指针的数组\n\n");
    
    printf("   数组指针示例：\n");
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    // 数组指针：指向包含4个int的数组
    int (*array_ptr)[4] = matrix;
    
    printf("   int (*array_ptr)[4] = matrix;\n");
    printf("   array_ptr指向一个包含4个int的数组\n");
    printf("   (*array_ptr)[0] = %d\n", (*array_ptr)[0]);
    printf("   (*array_ptr)[1] = %d\n", (*array_ptr)[1]);
    printf("   array_ptr[0][0] = %d (等价写法)\n\n", array_ptr[0][0]);
    
    printf("   指针数组示例：\n");
    int a = 10, b = 20, c = 30;
    int *ptr_array[3];  // 包含3个int指针的数组
    
    ptr_array[0] = &a;
    ptr_array[1] = &b;
    ptr_array[2] = &c;
    
    printf("   int *ptr_array[3];\n");
    printf("   ptr_array[0] = %p, *ptr_array[0] = %d\n", 
           (void*)ptr_array[0], *ptr_array[0]);
    printf("   ptr_array[1] = %p, *ptr_array[1] = %d\n", 
           (void*)ptr_array[1], *ptr_array[1]);
    printf("   ptr_array[2] = %p, *ptr_array[2] = %d\n\n", 
           (void*)ptr_array[2], *ptr_array[2]);
    
    printf("   记忆技巧：\n");
    printf("   int *p[5];    // 指针数组：[]优先级高，先数组后指针\n");
    printf("   int (*p)[5];  // 数组指针：()改变优先级，先指针后数组\n\n");
    
    /*
     * 5. 多维数组与指针
     */
    printf("5. 多维数组与指针\n\n");
    
    printf("   二维数组的内存布局：\n");
    int arr2D[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    printf("   int arr2D[2][3] = {{1,2,3}, {4,5,6}};\n");
    printf("   内存中按行存储：1,2,3,4,5,6\n\n");
    
    printf("   访问方式：\n");
    printf("   1. 传统下标：arr2D[1][2] = %d\n", arr2D[1][2]);
    
    // 将二维数组视为一维数组访问
    int *linear_ptr = (int*)arr2D;
    printf("   2. 线性访问：linear_ptr[5] = %d (第6个元素)\n", linear_ptr[5]);
    
    // 行指针
    int (*row_ptr)[3] = arr2D;
    printf("   3. 行指针：row_ptr[1][2] = %d\n", row_ptr[1][2]);
    printf("\n");
    
    printf("   地址计算：\n");
    printf("   &arr2D[i][j] = 数组首地址 + i*列数 + j\n");
    printf("   &arr2D[1][2] = %p\n", (void*)&arr2D[1][2]);
    printf("   arr2D + 1*3 + 2 = 第6个元素\n\n");
    
    /*
     * 6. 数组作为函数参数
     */
    printf("6. 数组作为函数参数\n\n");
    
    printf("   数组作为参数时传递的是指针：\n");
    printf("   void func(int arr[]) 等价于 void func(int *arr)\n\n");
    
    // 函数声明
    void print_array_using_pointer(int *arr, int size);
    void modify_array_using_pointer(int *arr, int size);
    int sum_array_using_pointer(int *arr, int size);
    
    int test_arr[5] = {1, 2, 3, 4, 5};
    
    printf("   测试数组：");
    print_array_using_pointer(test_arr, 5);
    
    printf("   修改数组（每个元素+10）：");
    modify_array_using_pointer(test_arr, 5);
    print_array_using_pointer(test_arr, 5);
    
    int total = sum_array_using_pointer(test_arr, 5);
    printf("   数组总和：%d\n\n", total);
    
    printf("   二维数组作为参数：\n");
    printf("   必须指定列数：void func(int arr[][4], int rows)\n");
    printf("   或使用指针：void func(int *arr, int rows, int cols)\n\n");
}

// 第四部分的函数定义
void print_array_using_pointer(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // 等价于 *(arr + i)
    }
    printf("\n");
}

void modify_array_using_pointer(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 10;  // 修改原数组
    }
}

int sum_array_using_pointer(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

/*================================================================
  第五部分：指针与字符串
  说明：使用指针处理字符串
================================================================*/

void part5_pointers_and_strings(void) {
    printf("\n");
    printf("================================================\n");
    printf("第五部分：指针与字符串\n");
    printf("================================================\n\n");
    
    /*
     * 1. 字符串指针基础
     */
    printf("1. 字符串指针基础\n\n");
    
    printf("   字符串的两种表示：\n");
    
    // 字符数组
    char str1[] = "Hello";
    // 字符串指针
    char *str2 = "World";
    
    printf("   1. 字符数组：char str1[] = \"Hello\";\n");
    printf("      str1 = %p, 内容 = \"%s\"\n", (void*)str1, str1);
    printf("      可以修改内容：str1[0] = 'h'; // 允许\n\n");
    
    printf("   2. 字符串指针：char *str2 = \"World\";\n");
    printf("      str2 = %p, 内容 = \"%s\"\n", (void*)str2, str2);
    printf("      不能修改内容：str2[0] = 'w'; // 可能崩溃！\n");
    printf("      字符串字面量存储在只读区\n\n");
    
    /*
     * 2. 字符串指针操作
     */
    printf("2. 字符串指针操作\n\n");
    
    char message[] = "C Programming";
    char *ptr = message;  // 指向字符串首字符
    
    printf("   字符串：\"%s\"\n", message);
    printf("   使用指针访问：\n");
    
    printf("   1. 逐个字符访问：");
    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }
    printf("\n\n");
    
    // 重置指针
    ptr = message;
    
    printf("   2. 指针运算访问特定字符：\n");
    printf("      首字符：*ptr = '%c'\n", *ptr);
    printf("      第5个字符：*(ptr + 4) = '%c'\n", *(ptr + 4));
    printf("      最后一个字符：*(ptr + strlen(message) - 1) = '%c'\n\n", 
           *(ptr + strlen(message) - 1));
    
    /*
     * 3. 字符串指针数组
     */
    printf("3. 字符串指针数组\n\n");
    
    printf("   常用于存储多个字符串：\n");
    
    char *names[] = {
        "Alice",
        "Bob",
        "Charlie",
        "David",
        "Eve"
    };
    
    int count = sizeof(names) / sizeof(names[0]);
    
    printf("   char *names[] = {\"Alice\", \"Bob\", ...};\n");
    printf("   字符串列表：\n");
    for (int i = 0; i < count; i++) {
        printf("   %d. %s (地址：%p)\n", i + 1, names[i], (void*)names[i]);
    }
    printf("\n");
    
    printf("   通过指针修改字符串内容：\n");
    char buffer[6] = "Hello";
    char *str_ptr = buffer;
    
    printf("   原字符串：%s\n", str_ptr);
    
    // 通过指针修改
    *str_ptr = 'h';          // 修改第一个字符
    *(str_ptr + 1) = 'E';    // 修改第二个字符
    *(str_ptr + 3) = 'L';    // 修改第四个字符
    
    printf("   修改后：%s\n", str_ptr);
    printf("\n");
    
    /*
     * 4. 字符串处理函数
     */
    printf("4. 字符串处理函数\n\n");
    
    char strA[20] = "Hello";
    char strB[20] = "World";
    char strC[50];
    
    printf("   字符串操作演示：\n");
    printf("   strA = \"%s\"\n", strA);
    printf("   strB = \"%s\"\n", strB);
    printf("\n");
    
    // 使用指针实现字符串复制
    char *src = strA;
    char *dst = strC;
    
    printf("   1. 字符串复制（手动实现）：\n");
    while (*src != '\0') {
        *dst = *src;
        src++;
        dst++;
    }
    *dst = '\0';  // 添加结束符
    
    printf("   复制结果：strC = \"%s\"\n", strC);
    printf("\n");
    
    // 使用指针实现字符串连接
    printf("   2. 字符串连接（手动实现）：\n");
    char *p1 = strA;
    char *p2 = strB;
    char result[50];
    char *r = result;
    
    // 复制第一个字符串
    while (*p1 != '\0') {
        *r = *p1;
        r++;
        p1++;
    }
    
    // 添加空格
    *r = ' ';
    r++;
    
    // 复制第二个字符串
    while (*p2 != '\0') {
        *r = *p2;
        r++;
        p2++;
    }
    *r = '\0';
    
    printf("   连接结果：\"%s\"\n", result);
    printf("\n");
    
    // 使用指针实现字符串比较
    printf("   3. 字符串比较（手动实现）：\n");
    char *s1 = "apple";
    char *s2 = "banana";
    char *s3 = "apple";
    
    int cmp1 = 0, cmp2 = 0;
    char *c1 = s1, *c2 = s2, *c3 = s3;
    
    while (*c1 != '\0' && *c2 != '\0' && *c1 == *c2) {
        c1++;
        c2++;
    }
    cmp1 = *c1 - *c2;
    
    c1 = s1, c2 = s3;
    while (*c1 != '\0' && *c2 != '\0' && *c1 == *c2) {
        c1++;
        c2++;
    }
    cmp2 = *c1 - *c2;
    
    printf("   \"%s\" 与 \"%s\" 比较：%d\n", s1, s2, cmp1);
    printf("   \"%s\" 与 \"%s\" 比较：%d\n", s1, s3, cmp2);
    printf("\n");
    
    /*
     * 5. 字符串指针的常见错误
     */
    printf("5. 字符串指针的常见错误\n\n");
    
    printf("   错误1：未分配内存就使用\n");
    printf("   char *str;\n");
    printf("   scanf(\"%%s\", str);  // 错误！str未指向有效内存\n\n");
    
    printf("   错误2：修改字符串字面量\n");
    printf("   char *str = \"Hello\";\n");
    printf("   str[0] = 'h';  // 错误！可能崩溃\n\n");
    
    printf("   错误3：忘记结束符\n");
    printf("   char str[5] = {'H','e','l','l','o'};\n");
    printf("   printf(\"%%s\", str);  // 错误！缺少'\\0'\n\n");
    
    printf("   错误4：指针越界\n");
    printf("   char str[10] = \"Hello\";\n");
    printf("   char *p = str;\n");
    printf("   while (*p != '\\0') { p++; }\n");
    printf("   p[1] = '!';  // 错误！越界访问\n\n");
    
    printf("   正确做法：\n");
    printf("   1. 确保指针指向有效内存\n");
    printf("   2. 对于字符串字面量，使用const指针\n");
    printf("   3. 总是确保字符串以'\\0'结尾\n");
    printf("   4. 检查边界\n\n");
}

/*================================================================
  第六部分：指针的指针
  说明：多级指针的理解和使用
================================================================*/

void part6_pointers_to_pointers(void) {
    printf("\n");
    printf("================================================\n");
    printf("第六部分：指针的指针\n");
    printf("================================================\n\n");
    
    /*
     * 1. 指针的指针基本概念
     */
    printf("1. 指针的指针基本概念\n\n");
    
    printf("   指针的指针：指向指针的指针\n");
    printf("   声明：int **pp;  // 指向int指针的指针\n\n");
    
    printf("   理解：\n");
    printf("   int num = 42;\n");
    printf("   int *p = &num;    // p指向num\n");
    printf("   int **pp = &p;    // pp指向p\n");
    printf("\n");
    
    printf("   访问：\n");
    printf("   num = 42       // 直接访问\n");
    printf("   *p = 42        // 通过一级指针访问\n");
    printf("   **pp = 42      // 通过二级指针访问\n\n");
    
    /*
     * 2. 二级指针演示
     */
    printf("2. 二级指针演示\n\n");
    
    int value = 100;
    int *ptr = &value;
    int **ptr_to_ptr = &ptr;
    
    printf("   变量关系图：\n");
    printf("   value = %d (地址：%p)\n", value, (void*)&value);
    printf("   ptr = %p (存储value的地址，自身地址：%p)\n", 
           (void*)ptr, (void*)&ptr);
    printf("   ptr_to_ptr = %p (存储ptr的地址，自身地址：%p)\n", 
           (void*)ptr_to_ptr, (void*)&ptr_to_ptr);
    printf("\n");
    
    printf("   访问路径：\n");
    printf("   直接访问：value = %d\n", value);
    printf("   一级间接：*ptr = %d\n", *ptr);
    printf("   二级间接：**ptr_to_ptr = %d\n", **ptr_to_ptr);
    printf("\n");
    
    printf("   修改值：\n");
    **ptr_to_ptr = 200;
    printf("   通过二级指针修改：**ptr_to_ptr = 200\n");
    printf("   验证：value = %d, *ptr = %d\n", value, *ptr);
    printf("\n");
    
    /*
     * 3. 多级指针的应用
     */
    printf("3. 多级指针的应用\n\n");
    
    printf("   应用1：动态二维数组\n");
    
    int rows = 3, cols = 4;
    int **matrix = (int**)malloc(rows * sizeof(int*));
    
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = i * cols + j + 1;
        }
    }
    
    printf("   动态分配的 %d×%d 矩阵：\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        printf("   ");
        for (int j = 0; j < cols; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // 释放内存
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    
    printf("   应用2：修改指针变量本身\n");
    
    int x = 10, y = 20;
    int *p1 = &x;
    int *p2 = &y;
    int **pp = &p1;
    
    printf("   初始：p1指向x(%d), p2指向y(%d)\n", x, y);
    printf("   pp指向p1，*pp = %p (p1的地址)\n", (void*)*pp);
    
    // 通过二级指针修改一级指针的指向
    *pp = p2;
    printf("   执行 *pp = p2 后：\n");
    printf("   *pp = %p (现在指向p2的地址)\n", (void*)*pp);
    printf("   现在 p1 指向 y(%d)\n", *p1);
    printf("\n");
    
    printf("   应用3：字符串数组\n");
    
    char *words[] = {"Apple", "Banana", "Cherry", "Date"};
    char **w_ptr = words;  // 指向指针数组的指针
    
    printf("   字符串数组：\n");
    for (int i = 0; i < 4; i++) {
        printf("   %d. %s (地址：%p)\n", i+1, *(w_ptr + i), (void*)*(w_ptr + i));
    }
    printf("\n");
    
    /*
     * 4. 三级及更多级指针
     */
    printf("4. 三级及更多级指针\n\n");
    
    int val = 300;
    int *p = &val;
    int **pp2 = &p;
    int ***ppp = &pp2;
    
    printf("   三级指针演示：\n");
    printf("   val = %d\n", val);
    printf("   *p = %d\n", *p);
    printf("   **pp2 = %d\n", **pp2);
    printf("   ***ppp = %d\n", ***ppp);
    printf("\n");
    
    printf("   地址关系：\n");
    printf("   &val = %p\n", (void*)&val);
    printf("   p = %p, &p = %p\n", (void*)p, (void*)&p);
    printf("   pp2 = %p, &pp2 = %p\n", (void*)pp2, (void*)&pp2);
    printf("   ppp = %p, &ppp = %p\n", (void*)ppp, (void*)&ppp);
    printf("\n");
    
    /*
     * 5. 多级指针的注意事项
     */
    printf("5. 多级指针的注意事项\n\n");
    
    printf("   注意1：理解间接层次\n");
    printf("   每多一级*，就多一层间接访问\n");
    printf("   *p：访问p指向的值\n");
    printf("   **pp：访问pp指向的指针，再访问该指针指向的值\n\n");
    
    printf("   注意2：初始化\n");
    printf("   多级指针需要逐级初始化\n");
    printf("   int ***ppp;\n");
    printf("   需要：ppp = &pp2; pp2 = &p; p = &val;\n\n");
    
    printf("   注意3：空指针检查\n");
    printf("   每一级都可能为NULL\n");
    printf("   if (ppp != NULL && *ppp != NULL && **ppp != NULL) { ... }\n\n");
    
    printf("   注意4：类型匹配\n");
    printf("   每一级指针的类型必须匹配\n");
    printf("   int val; int *p; int **pp; int ***ppp;\n");
    printf("   ppp = &pp; pp = &p; p = &val;  // 正确\n");
    printf("   // ppp = &val;  // 错误！类型不匹配\n\n");
    
    printf("   实际应用场景：\n");
    printf("   1. 动态多维数组\n");
    printf("   2. 修改函数外的指针变量\n");
    printf("   3. 链表/树等数据结构\n");
    printf("   4. 函数参数传递指针的指针\n");
    printf("   5. 命令行参数处理\n\n");
}

/*================================================================
  第七部分：动态内存分配
  说明：使用指针进行动态内存管理
================================================================*/

void part7_dynamic_memory_allocation(void) {
    printf("\n");
    printf("================================================\n");
    printf("第七部分：动态内存分配\n");
    printf("================================================\n\n");
    
    /*
     * 1. 动态内存分配概述
     */
    printf("1. 动态内存分配概述\n\n");
    
    printf("   为什么需要动态内存？\n");
    printf("   1. 程序运行时才知道需要多少内存\n");
    printf("   2. 创建动态数据结构（链表、树等）\n");
    printf("   3. 避免栈溢出（大数据）\n");
    printf("   4. 灵活的内存管理\n\n");
    
    printf("   内存区域：\n");
    printf("   1. 栈（Stack）：局部变量，自动分配释放\n");
    printf("   2. 堆（Heap）：动态内存，手动分配释放\n");
    printf("   3. 静态存储区：全局/静态变量\n");
    printf("   4. 代码区：程序代码\n\n");
    
    /*
     * 2. 动态内存函数
     */
    printf("2. 动态内存函数（需要 #include <stdlib.h>）\n\n");
    
    printf("   核心函数：\n");
    printf("   1. malloc() - 分配内存\n");
    printf("   2. calloc() - 分配并清零内存\n");
    printf("   3. realloc() - 重新分配内存\n");
    printf("   4. free() - 释放内存\n\n");
    
    printf("   函数原型：\n");
    printf("   void *malloc(size_t size);\n");
    printf("   void *calloc(size_t num, size_t size);\n");
    printf("   void *realloc(void *ptr, size_t size);\n");
    printf("   void free(void *ptr);\n\n");
    
    /*
     * 3. malloc和free演示
     */
    printf("3. malloc()和free()演示\n\n");
    
    printf("   示例1：分配单个整数\n");
    int *p = (int*)malloc(sizeof(int));
    
    if (p == NULL) {
        printf("   内存分配失败！\n");
    } else {
        *p = 42;
        printf("   分配成功，*p = %d\n", *p);
        free(p);  // 释放内存
        p = NULL; // 避免野指针
        printf("   内存已释放\n");
    }
    printf("\n");
    
    printf("   示例2：分配数组\n");
    int n = 5;
    int *arr = (int*)malloc(n * sizeof(int));
    
    if (arr != NULL) {
        // 初始化数组
        for (int i = 0; i < n; i++) {
            arr[i] = (i + 1) * 10;
        }
        
        printf("   动态数组：");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        
        free(arr);
        arr = NULL;
    }
    printf("\n");
    
    /*
     * 4. calloc和realloc演示
     */
    printf("4. calloc()和realloc()演示\n\n");
    
    printf("   示例3：calloc分配（自动清零）\n");
    int *c_arr = (int*)calloc(5, sizeof(int));
    
    if (c_arr != NULL) {
        printf("   calloc分配的数组（自动清零）：");
        for (int i = 0; i < 5; i++) {
            printf("%d ", c_arr[i]);  // 全部为0
        }
        printf("\n");
        
        // 重新分配更多内存
        printf("   使用realloc扩大数组：\n");
        int *new_arr = (int*)realloc(c_arr, 10 * sizeof(int));
        
        if (new_arr != NULL) {
            c_arr = new_arr;  // 使用新地址
            
            // 设置新元素的值
            for (int i = 5; i < 10; i++) {
                c_arr[i] = (i + 1) * 10;
            }
            
            printf("   扩大后的数组：");
            for (int i = 0; i < 10; i++) {
                printf("%d ", c_arr[i]);
            }
            printf("\n");
        }
        
        free(c_arr);
    }
    printf("\n");
    
    /*
     * 5. 动态字符串
     */
    printf("5. 动态字符串\n\n");
    
    printf("   示例4：动态字符串\n");
    char *str = (char*)malloc(50 * sizeof(char));
    
    if (str != NULL) {
        // 安全地复制字符串
        snprintf(str, 50, "Hello, Dynamic Memory!");
        printf("   动态字符串：%s\n", str);
        
        // 重新分配为更长的字符串
        char *new_str = (char*)realloc(str, 100 * sizeof(char));
        if (new_str != NULL) {
            str = new_str;
            strcat(str, " This is additional text.");
            printf("   扩展后的字符串：%s\n", str);
        }
        
        free(str);
    }
    printf("\n");
    
    /*
     * 6. 动态二维数组
     */
    printf("6. 动态二维数组\n\n");
    
    printf("   示例5：动态创建二维数组\n");
    int rows = 3, cols = 4;
    
    // 分配行指针数组
    int **matrix = (int**)malloc(rows * sizeof(int*));
    
    if (matrix != NULL) {
        // 为每一行分配列
        for (int i = 0; i < rows; i++) {
            matrix[i] = (int*)malloc(cols * sizeof(int));
            
            // 初始化
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = i * cols + j + 1;
            }
        }
        
        printf("   动态 %d×%d 矩阵：\n", rows, cols);
        for (int i = 0; i < rows; i++) {
            printf("   ");
            for (int j = 0; j < cols; j++) {
                printf("%2d ", matrix[i][j]);
            }
            printf("\n");
        }
        
        // 释放内存：先释放每一行，再释放行指针数组
        for (int i = 0; i < rows; i++) {
            free(matrix[i]);
        }
        free(matrix);
    }
    printf("\n");
    
    /*
     * 7. 动态内存的常见错误
     */
    printf("7. 动态内存的常见错误\n\n");
    
    printf("   错误1：内存泄漏（忘记free）\n");
    printf("   void func() {\n");
    printf("       int *p = malloc(sizeof(int));\n");
    printf("       *p = 10;\n");
    printf("       // 忘记 free(p);\n");
    printf("   } // 函数结束，p被销毁，但分配的内存还在\n\n");
    
    printf("   错误2：使用已释放的内存\n");
    printf("   int *p = malloc(sizeof(int));\n");
    printf("   free(p);\n");
    printf("   *p = 20;  // 错误！p现在是野指针\n");
    printf("   解决方案：free后立即设为NULL\n\n");
    
    printf("   错误3：重复释放\n");
    printf("   int *p = malloc(sizeof(int));\n");
    printf("   free(p);\n");
    printf("   free(p);  // 错误！重复释放\n\n");
    
    printf("   错误4：分配大小错误\n");
    printf("   int *p = malloc(10);  // 应该是 sizeof(int)*10\n");
    printf("   正确：malloc(10 * sizeof(int))\n\n");
    
    printf("   错误5：忘记检查返回值\n");
    printf("   int *p = malloc(1000000000);  // 可能失败\n");
    printf("   *p = 10;  // 如果p是NULL，会崩溃\n");
    printf("   正确：if (p != NULL) { ... }\n\n");
    
    printf("   最佳实践：\n");
    printf("   1. 总是检查malloc/calloc/realloc的返回值\n");
    printf("   2. 释放内存后立即将指针设为NULL\n");
    printf("   3. 谁分配谁释放（明确所有权）\n");
    printf("   4. 使用工具检测内存泄漏\n");
    printf("   5. 避免频繁分配释放小内存\n\n");
}

/*================================================================
  第八部分：指针的高级主题
  说明：指针的进阶应用
================================================================*/

void part8_advanced_pointer_topics(void) {
    printf("\n");
    printf("================================================\n");
    printf("第八部分：指针的高级主题\n");
    printf("================================================\n\n");
    
    /*
     * 1. 函数指针回顾和扩展
     */
    printf("1. 函数指针回顾和扩展\n\n");
    
    // 函数声明
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int multiply(int a, int b) { return a * b; }
    int divide(int a, int b) { return b != 0 ? a / b : 0; }
    
    // 定义函数指针类型
    typedef int (*MathFunc)(int, int);
    
    // 函数指针数组
    MathFunc operations[] = {add, subtract, multiply, divide};
    char* op_names[] = {"加法", "减法", "乘法", "除法"};
    
    int x = 20, y = 5;
    
    printf("   函数指针数组应用：\n");
    for (int i = 0; i < 4; i++) {
        int result = operations[i](x, y);
        printf("   %s：%d %c %d = %d\n", 
               op_names[i], x, 
               (i == 0 ? '+' : (i == 1 ? '-' : (i == 2 ? '*' : '/'))), 
               y, result);
    }
    printf("\n");
    
    /*
     * 2. 复杂指针声明解读
     */
    printf("2. 复杂指针声明解读（右左法则）\n\n");
    
    printf("   右左法则：从标识符开始，先向右看，再向左看\n\n");
    
    printf("   示例1：int *p;\n");
    printf("   p是一个指针，指向int\n\n");
    
    printf("   示例2：int *ap[5];\n");
    printf("   ap是一个数组，包含5个元素\n");
    printf("   每个元素是指针，指向int\n");
    printf("   结论：指针数组\n\n");
    
    printf("   示例3：int (*pa)[5];\n");
    printf("   pa是一个指针\n");
    printf("   指向一个数组，包含5个int元素\n");
    printf("   结论：数组指针\n\n");
    
    printf("   示例4：int *(*f)(int, int);\n");
    printf("   f是一个指针\n");
    printf("   指向一个函数，函数接受两个int参数\n");
    printf("   返回一个指针，指向int\n");
    printf("   结论：函数指针，返回int指针\n\n");
    
    printf("   示例5：int (*(*func)(int))[5];\n");
    printf("   func是一个指针\n");
    printf("   指向一个函数，函数接受一个int参数\n");
    printf("   返回一个指针，指向包含5个int的数组\n");
    printf("   结论：函数指针，返回数组指针\n\n");
    
    /*
     * 3. 指针与结构体
     */
    printf("3. 指针与结构体\n\n");
    
    // 定义结构体
    typedef struct {
        char name[50];
        int age;
        float salary;
    } Employee;
    
    Employee emp = {"张三", 30, 5000.0};
    Employee *emp_ptr = &emp;
    
    printf("   结构体指针访问成员：\n");
    printf("   1. (*ptr).成员：(*emp_ptr).name = %s\n", (*emp_ptr).name);
    printf("   2. ptr->成员：emp_ptr->age = %d\n", emp_ptr->age);
    printf("   3. 直接访问：emp.salary = %.2f\n", emp.salary);
    printf("\n");
    
    // 动态分配结构体
    Employee *dynamic_emp = (Employee*)malloc(sizeof(Employee));
    if (dynamic_emp != NULL) {
        strcpy(dynamic_emp->name, "李四");
        dynamic_emp->age = 25;
        dynamic_emp->salary = 4500.0;
        
        printf("   动态分配的结构体：\n");
        printf("   姓名：%s\n", dynamic_emp->name);
        printf("   年龄：%d\n", dynamic_emp->age);
        printf("   工资：%.2f\n", dynamic_emp->salary);
        
        free(dynamic_emp);
    }
    printf("\n");
    
    /*
     * 4. 指针的安全使用
     */
    printf("4. 指针的安全使用\n\n");
    
    printf("   安全准则：\n");
    printf("   1. 初始化所有指针\n");
    printf("      int *p = NULL;  // 初始化为NULL\n\n");
    
    printf("   2. 检查指针有效性\n");
    printf("      if (p != NULL) {\n");
    printf("          // 安全使用\n");
    printf("      }\n\n");
    
    printf("   3. 避免指针越界\n");
    printf("      确保访问在有效范围内\n\n");
    
    printf("   4. 及时释放和置空\n");
    printf("      free(p);\n");
    printf("      p = NULL;\n\n");
    
    printf("   5. 使用const保护数据\n");
    printf("      const int *p;  // 不能通过p修改数据\n\n");
    
    printf("   6. 避免类型混淆\n");
    printf("      确保指针类型正确\n\n");
    
    /*
     * 5. 指针的调试技巧
     */
    printf("5. 指针的调试技巧\n\n");
    
    printf("   调试方法：\n");
    printf("   1. 打印指针值\n");
    printf("      printf(\"指针地址：%%p\\n\", (void*)ptr);\n\n");
    
    printf("   2. 打印指针指向的值\n");
    printf("      if (ptr != NULL) {\n");
    printf("          printf(\"指向的值：%%d\\n\", *ptr);\n");
    printf("      }\n\n");
    
    printf("   3. 使用调试器\n");
    printf("      在IDE中设置断点，查看指针\n\n");
    
    printf("   4. 边界检查工具\n");
    printf("      使用valgrind等工具检测内存错误\n\n");
    
    printf("   5. 添加断言\n");
    printf("      #include <assert.h>\n");
    printf("      assert(ptr != NULL);\n\n");
    
    /*
     * 6. 指针的性能考虑
     */
    printf("6. 指针的性能考虑\n\n");
    
    printf("   性能影响：\n");
    printf("   1. 指针解引用有开销\n");
    printf("      每次访问需要额外的内存读取\n\n");
    
    printf("   2. 指针别名问题\n");
    printf("      多个指针指向同一内存，影响优化\n\n");
    
    printf("   3. 缓存不友好\n");
    printf("      指针跳转可能破坏缓存局部性\n\n");
    
    printf("   优化建议：\n");
    printf("   1. 减少不必要的指针使用\n");
    printf("   2. 使用局部变量缓存指针指向的值\n");
    printf("   3. 保持数据连续存储\n");
    printf("   4. 避免频繁的动态内存分配\n\n");
}

/*================================================================
  第九部分：指针编程技巧总结
================================================================*/

void part9_pointer_programming_tips(void) {
    printf("\n");
    printf("================================================\n");
    printf("第九部分：指针编程技巧总结\n");
    printf("================================================\n\n");
    
    printf("1. 理解指针的核心概念\n");
    printf("   - 指针存储地址\n");
    printf("   - *解引用，&取地址\n");
    printf("   - 指针类型决定运算步长\n\n");
    
    printf("2. 安全使用指针\n");
    printf("   - 始终初始化指针\n");
    printf("   - 检查NULL指针\n");
    printf("   - 避免越界访问\n");
    printf("   - 及时释放内存\n\n");
    
    printf("3. 指针与数组\n");
    printf("   - 数组名是指针常量\n");
    printf("   - arr[i] 等价于 *(arr + i)\n");
    printf("   - 理解指针数组和数组指针的区别\n\n");
    
    printf("4. 动态内存管理\n");
    printf("   - 谁分配谁释放\n");
    printf("   - 检查分配是否成功\n");
    printf("   - 释放后置为NULL\n");
    printf("   - 避免内存泄漏\n\n");
    
    printf("5. 多级指针\n");
    printf("   - 理解间接层次\n");
    printf("   - 逐级初始化\n");
    printf("   - 逐级检查NULL\n\n");
    
    printf("6. 函数指针\n");
    printf("   - 实现回调函数\n");
    printf("   - 构建函数表\n");
    printf("   - 提高代码灵活性\n\n");
    
    printf("7. 调试技巧\n");
    printf("   - 打印指针值和指向的值\n");
    printf("   - 使用调试器\n");
    printf("   - 使用内存检查工具\n\n");
    
    printf("8. 性能优化\n");
    printf("   - 减少不必要的指针使用\n");
    printf("   - 缓存频繁访问的值\n");
    printf("   - 保持数据局部性\n\n");
    
    printf("9. 代码可读性\n");
    printf("   - 使用有意义的指针名\n");
    printf("   - 添加注释说明指针用途\n");
    printf("   - 保持代码简洁\n\n");
    
    printf("10. 常见错误避免\n");
    printf("    - 野指针\n");
    printf("    - 内存泄漏\n");
    printf("    - 重复释放\n");
    printf("    - 类型不匹配\n");
    printf("    - 忘记检查返回值\n\n");
}
