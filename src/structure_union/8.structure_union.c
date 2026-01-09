#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*================================================================
  第一部分：结构体概述
  说明：理解结构体的基本概念
================================================================*/

void part1_structure_overview(void) {
    printf("\n");
    printf("================================================\n");
    printf("第一部分：结构体概述\n");
    printf("================================================\n\n");
    
    printf("结构体（Structure）的定义：\n");
    printf("结构体是用户自定义的数据类型，用于组合不同类型的数据\n\n");
    
    printf("为什么需要结构体？\n");
    printf("1. 现实世界的数据通常是复合的\n");
    printf("   例如：学生有学号、姓名、年龄、成绩等属性\n");
    printf("2. 方便数据管理\n");
    printf("3. 提高代码可读性和可维护性\n");
    printf("4. 作为函数参数传递相关数据\n\n");
    
    printf("结构体的特点：\n");
    printf("1. 可以包含不同类型的数据成员\n");
    printf("2. 每个成员有独立的存储空间\n");
    printf("3. 成员按定义顺序存储\n");
    printf("4. 可能有内存对齐（padding）\n\n");
    
    printf("结构体 vs 数组：\n");
    printf("数组：相同类型元素的集合，通过下标访问\n");
    printf("结构体：不同类型成员的集合，通过成员名访问\n\n");
    
    printf("结构体的应用场景：\n");
    printf("1. 数据库记录\n");
    printf("2. 图形编程中的点、矩形等\n");
    printf("3. 链表、树等数据结构节点\n");
    printf("4. 文件信息\n");
    printf("5. 网络数据包\n");
    printf("6. 游戏开发中的角色、物品等\n\n");
}

/*================================================================
  第二部分：结构体的定义和声明
  说明：如何定义和使用结构体
================================================================*/

void part2_structure_definition_declaration(void) {
    printf("\n");
    printf("================================================\n");
    printf("第二部分：结构体的定义和声明\n");
    printf("================================================\n\n");
    
    /*
     * 1. 结构体定义的基本语法
     */
    printf("1. 结构体定义的基本语法\n\n");
    
    printf("   语法：\n");
    printf("   struct 结构体标签 {\n");
    printf("       类型1 成员1;\n");
    printf("       类型2 成员2;\n");
    printf("       ...\n");
    printf("   };\n\n");
    
    printf("   示例1：定义学生结构体\n");
    
    // 定义结构体类型
    struct Student {
        int id;             // 学号
        char name[50];      // 姓名
        int age;           // 年龄
        float score;       // 成绩
    };  // 注意分号！
    
    printf("   struct Student {\n");
    printf("       int id;\n");
    printf("       char name[50];\n");
    printf("       int age;\n");
    printf("       float score;\n");
    printf("   };\n\n");
    
    /*
     * 2. 结构体变量的声明
     */
    printf("2. 结构体变量的声明\n\n");
    
    printf("   方法1：定义时声明变量\n");
    struct Point {
        int x;
        int y;
    } p1, p2;  // 定义结构体类型的同时声明变量p1,p2
    
    printf("   struct Point { int x; int y; } p1, p2;\n");
    printf("   声明了Point类型和两个变量p1,p2\n\n");
    
    printf("   方法2：先定义类型，再声明变量\n");
    struct Student stu1, stu2;  // 使用前面定义的Student类型
    printf("   struct Student stu1, stu2;\n");
    printf("   使用已定义的类型声明变量\n\n");
    
    printf("   方法3：定义无名结构体并声明变量（不推荐）\n");
    struct {
        char title[100];
        char author[50];
        float price;
    } book1, book2;
    
    printf("   struct { ... } book1, book2;\n");
    printf("   无名结构体，只能声明这一次变量\n\n");
    
    /*
     * 3. 使用typedef简化结构体类型名
     */
    printf("3. 使用typedef简化结构体类型名\n\n");
    
    printf("   typedef的作用：创建类型别名\n\n");
    
    printf("   方法1：先定义结构体，再用typedef\n");
    struct EmployeeStruct {
        int emp_id;
        char name[50];
        float salary;
    };
    typedef struct EmployeeStruct Employee;
    printf("   typedef struct EmployeeStruct Employee;\n");
    printf("   现在可以用 Employee 代替 struct EmployeeStruct\n\n");
    
    printf("   方法2：定义结构体时直接使用typedef\n");
    typedef struct {
        char make[50];
        char model[50];
        int year;
        float price;
    } Car;
    
    printf("   typedef struct { ... } Car;\n");
    printf("   直接定义Car类型，不需要struct关键字\n\n");
    
    printf("   使用typedef的好处：\n");
    printf("   1. 简化代码：Car c1; 而不是 struct Car c1;\n");
    printf("   2. 提高可读性\n");
    printf("   3. 方便类型抽象\n\n");
    
    /*
     * 4. 结构体变量初始化
     */
    printf("4. 结构体变量初始化\n\n");
    
    printf("   方法1：定义时初始化\n");
    struct Date {
        int year;
        int month;
        int day;
    } today = {2024, 1, 10};  // 按成员顺序初始化
    
    printf("   struct Date today = {2024, 1, 10};\n");
    printf("   结果：%d年%d月%d日\n\n", today.year, today.month, today.day);
    
    printf("   方法2：指定成员初始化（C99标准）\n");
    struct Date birthday = {.year = 2000, .month = 5, .day = 20};
    printf("   struct Date birthday = {.year=2000, .month=5, .day=20};\n");
    printf("   可以乱序，未指定的成员初始化为0\n\n");
    
    printf("   方法3：声明后逐个初始化\n");
    struct Product {
        int code;
        char name[50];
        float price;
        int stock;
    };
    
    struct Product prod;
    prod.code = 1001;
    strcpy(prod.name, "Laptop");
    prod.price = 5999.99;
    prod.stock = 50;
    
    printf("   声明后逐个初始化成员\n");
    printf("   产品：%s, 价格：%.2f, 库存：%d\n\n", 
           prod.name, prod.price, prod.stock);
    
    /*
     * 5. 结构体嵌套定义
     */
    printf("5. 结构体嵌套定义\n\n");
    
    // 定义地址结构体
    struct Address {
        char street[100];
        char city[50];
        char state[50];
        char zip_code[20];
    };
    
    // 定义人员结构体，嵌套地址
    struct Person {
        char name[50];
        int age;
        struct Address addr;  // 嵌套结构体
    };
    
    printf("   结构体嵌套示例：\n");
    printf("   struct Address { ... };\n");
    printf("   struct Person {\n");
    printf("       char name[50];\n");
    printf("       int age;\n");
    printf("       struct Address addr;  // 嵌套\n");
    printf("   };\n\n");
    
    // 初始化嵌套结构体
    struct Person person1 = {
        "张三",
        25,
        {"中山路123号", "北京", "北京", "100000"}
    };
    
    printf("   嵌套结构体初始化：\n");
    printf("   姓名：%s\n", person1.name);
    printf("   年龄：%d\n", person1.age);
    printf("   地址：%s, %s, %s %s\n", 
           person1.addr.street, 
           person1.addr.city, 
           person1.addr.state, 
           person1.addr.zip_code);
    printf("\n");
    
    /*
     * 6. 结构体数组
     */
    printf("6. 结构体数组\n\n");
    
    typedef struct {
        int student_id;
        char name[50];
        float grade;
    } StudentRecord;
    
    // 声明结构体数组
    StudentRecord class[5] = {
        {101, "Alice", 85.5},
        {102, "Bob", 92.0},
        {103, "Charlie", 78.5},
        {104, "Diana", 95.0},
        {105, "Edward", 88.5}
    };
    
    printf("   学生成绩表：\n");
    printf("   ID    姓名       成绩\n");
    printf("   ---------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("   %-6d%-10s%.1f\n", 
               class[i].student_id, 
               class[i].name, 
               class[i].grade);
    }
    printf("\n");
}

/*================================================================
  第三部分：结构体成员访问和操作
  说明：访问和操作结构体成员
================================================================*/

void part3_structure_member_access(void) {
    printf("\n");
    printf("================================================\n");
    printf("第三部分：结构体成员访问和操作\n");
    printf("================================================\n\n");
    
    /*
     * 1. 结构体成员访问运算符
     */
    printf("1. 结构体成员访问运算符\n\n");
    
    printf("   点运算符（.）：用于结构体变量访问成员\n");
    printf("   箭头运算符（->）：用于结构体指针访问成员\n\n");
    
    // 定义结构体
    typedef struct {
        int id;
        char name[50];
        float salary;
    } Employee;
    
    /*
     * 2. 使用点运算符访问成员
     */
    printf("2. 使用点运算符（.）访问成员\n\n");
    
    Employee emp1;
    emp1.id = 1001;
    strcpy(emp1.name, "王明");
    emp1.salary = 8000.50;
    
    printf("   点运算符示例：\n");
    printf("   emp1.id = %d;\n", emp1.id);
    printf("   strcpy(emp1.name, \"王明\");\n");
    printf("   emp1.salary = %.2f;\n\n", emp1.salary);
    
    printf("   访问结果：\n");
    printf("   员工ID：%d\n", emp1.id);
    printf("   姓名：%s\n", emp1.name);
    printf("   工资：%.2f\n\n", emp1.salary);
    
    /*
     * 3. 结构体指针和箭头运算符
     */
    printf("3. 结构体指针和箭头运算符（->）\n\n");
    
    Employee emp2 = {1002, "李华", 7500.00};
    Employee *emp_ptr = &emp2;  // 指向emp2的指针
    
    printf("   箭头运算符示例：\n");
    printf("   Employee *emp_ptr = &emp2;\n");
    printf("   emp_ptr->id = %d\n", emp_ptr->id);
    printf("   emp_ptr->name = %s\n", emp_ptr->name);
    printf("   emp_ptr->salary = %.2f\n\n", emp_ptr->salary);
    
    printf("   等价表示：\n");
    printf("   emp_ptr->id  等价于  (*emp_ptr).id\n");
    printf("   emp_ptr->name 等价于 (*emp_ptr).name\n");
    printf("   emp_ptr->salary 等价于 (*emp_ptr).salary\n\n");
    
    printf("   验证等价性：\n");
    printf("   emp_ptr->id = %d, (*emp_ptr).id = %d\n", 
           emp_ptr->id, (*emp_ptr).id);
    printf("   结果相同\n\n");
    
    /*
     * 4. 结构体成员赋值和比较
     */
    printf("4. 结构体成员赋值和比较\n\n");
    
    Employee emp3, emp4;
    
    // 逐个成员赋值
    emp3.id = 1003;
    strcpy(emp3.name, "张伟");
    emp3.salary = 6800.00;
    
    // 结构体整体赋值（C语言允许）
    emp4 = emp3;  // 将emp3的所有成员复制给emp4
    
    printf("   结构体整体赋值示例：\n");
    printf("   emp4 = emp3;  // 复制所有成员\n\n");
    
    printf("   赋值后比较：\n");
    printf("   emp3: ID=%d, Name=%s, Salary=%.2f\n", 
           emp3.id, emp3.name, emp3.salary);
    printf("   emp4: ID=%d, Name=%s, Salary=%.2f\n", 
           emp4.id, emp4.name, emp4.salary);
    
    // 修改emp4不影响emp3
    emp4.id = 1004;
    printf("\n   修改emp4.id后：\n");
    printf("   emp3.id = %d (未改变)\n", emp3.id);
    printf("   emp4.id = %d (已改变)\n\n", emp4.id);
    
    printf("   注意：结构体包含指针时的浅拷贝问题\n");
    printf("   如果结构体包含指针，整体赋值只复制指针值，不复制指向的数据\n\n");
    
    /*
     * 5. 嵌套结构体成员访问
     */
    printf("5. 嵌套结构体成员访问\n\n");
    
    // 定义嵌套结构体
    typedef struct {
        int hour;
        int minute;
        int second;
    } Time;
    
    typedef struct {
        Time start_time;
        Time end_time;
        char description[100];
    } Meeting;
    
    // 创建并初始化会议
    Meeting meeting1 = {
        {9, 0, 0},      // start_time
        {10, 30, 0},    // end_time
        "项目会议"
    };
    
    printf("   嵌套结构体访问示例：\n");
    printf("   会议：%s\n", meeting1.description);
    printf("   开始时间：%02d:%02d:%02d\n", 
           meeting1.start_time.hour,
           meeting1.start_time.minute,
           meeting1.start_time.second);
    printf("   结束时间：%02d:%02d:%02d\n", 
           meeting1.end_time.hour,
           meeting1.end_time.minute,
           meeting1.end_time.second);
    printf("\n");
    
    printf("   通过指针访问嵌套成员：\n");
    Meeting *mtg_ptr = &meeting1;
    printf("   会议描述：%s\n", mtg_ptr->description);
    printf("   开始时间：%02d:%02d:%02d\n", 
           mtg_ptr->start_time.hour,
           mtg_ptr->start_time.minute,
           mtg_ptr->start_time.second);
    printf("\n");
    
    /*
     * 6. 结构体数组成员访问
     */
    printf("6. 结构体数组成员访问\n\n");
    
    typedef struct {
        char course_name[50];
        float grades[5];  // 5次考试成绩
        float average;
    } CourseRecord;
    
    CourseRecord math = {"高等数学"};
    
    // 初始化成绩
    math.grades[0] = 85.0;
    math.grades[1] = 90.0;
    math.grades[2] = 88.0;
    math.grades[3] = 92.0;
    math.grades[4] = 87.0;
    
    // 计算平均分
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += math.grades[i];
    }
    math.average = sum / 5;
    
    printf("   课程：%s\n", math.course_name);
    printf("   成绩：");
    for (int i = 0; i < 5; i++) {
        printf("%.1f ", math.grades[i]);
    }
    printf("\n   平均分：%.2f\n\n", math.average);
    
    /*
     * 7. 结构体作为函数参数
     */
    printf("7. 结构体作为函数参数\n\n");
    
    // 函数声明
    void print_employee_info(Employee emp);
    void modify_employee_salary(Employee *emp, float new_salary);
    
    Employee emp5 = {1005, "赵敏", 7200.00};
    
    printf("   值传递（复制整个结构体）：\n");
    print_employee_info(emp5);
    printf("\n");
    
    printf("   地址传递（通过指针）：\n");
    printf("   修改前工资：%.2f\n", emp5.salary);
    modify_employee_salary(&emp5, 8000.00);
    printf("   修改后工资：%.2f\n\n", emp5.salary);
    
    printf("   传递方式选择：\n");
    printf("   - 小结构体：值传递（简单安全）\n");
    printf("   - 大结构体或需要修改：指针传递（高效）\n");
    printf("   - 只读访问：const指针传递\n\n");
}

// 第三部分的函数定义
void print_employee_info(Employee emp) {
    printf("   员工信息：\n");
    printf("   ID：%d\n", emp.id);
    printf("   姓名：%s\n", emp.name);
    printf("   工资：%.2f\n", emp.salary);
}

void modify_employee_salary(Employee *emp, float new_salary) {
    if (emp != NULL) {
        emp->salary = new_salary;
    }
}

/*================================================================
  第四部分：结构体与指针
  说明：结构体指针的使用
================================================================*/

void part4_structures_and_pointers(void) {
    printf("\n");
    printf("================================================\n");
    printf("第四部分：结构体与指针\n");
    printf("================================================\n\n");
    
    /*
     * 1. 结构体指针基础
     */
    printf("1. 结构体指针基础\n\n");
    
    typedef struct {
        char title[100];
        char author[50];
        int year;
        float price;
    } Book;
    
    Book book1 = {"C Programming", "K&R", 1978, 59.99};
    Book *book_ptr = &book1;
    
    printf("   结构体指针示例：\n");
    printf("   书名：%s\n", book_ptr->title);
    printf("   作者：%s\n", book_ptr->author);
    printf("   出版年份：%d\n", book_ptr->year);
    printf("   价格：%.2f\n\n", book_ptr->price);
    
    printf("   指针运算：\n");
    printf("   book_ptr = %p\n", (void*)book_ptr);
    printf("   book_ptr + 1 = %p (移动 %zu 字节)\n", 
           (void*)(book_ptr + 1), sizeof(Book));
    printf("\n");
    
    /*
     * 2. 动态分配结构体
     */
    printf("2. 动态分配结构体\n\n");
    
    printf("   使用malloc动态分配结构体：\n");
    
    Book *dynamic_book = (Book*)malloc(sizeof(Book));
    
    if (dynamic_book != NULL) {
        // 初始化动态分配的结构体
        strcpy(dynamic_book->title, "Data Structures");
        strcpy(dynamic_book->author, "Robert Sedgewick");
        dynamic_book->year = 1983;
        dynamic_book->price = 89.99;
        
        printf("   动态分配的图书：\n");
        printf("   书名：%s\n", dynamic_book->title);
        printf("   作者：%s\n", dynamic_book->author);
        printf("   年份：%d\n", dynamic_book->year);
        printf("   价格：%.2f\n\n", dynamic_book->price);
        
        // 释放内存
        free(dynamic_book);
        dynamic_book = NULL;
        printf("   内存已释放\n\n");
    }
    
    /*
     * 3. 结构体指针数组
     */
    printf("3. 结构体指针数组\n\n");
    
    typedef struct {
        char name[50];
        int population;
        float area;
    } City;
    
    City cities[3] = {
        {"北京", 21540000, 16410.54},
        {"上海", 24280000, 6340.50},
        {"广州", 15300000, 7434.40}
    };
    
    // 创建指针数组，每个元素指向一个City结构体
    City *city_ptrs[3];
    for (int i = 0; i < 3; i++) {
        city_ptrs[i] = &cities[i];
    }
    
    printf("   城市信息（通过指针数组访问）：\n");
    printf("   城市名称      人口        面积(km²)\n");
    printf("   -----------------------------------\n");
    
    for (int i = 0; i < 3; i++) {
        printf("   %-12s%-12d%.2f\n", 
               city_ptrs[i]->name,
               city_ptrs[i]->population,
               city_ptrs[i]->area);
    }
    printf("\n");
    
    /*
     * 4. 结构体包含指针成员
     */
    printf("4. 结构体包含指针成员\n\n");
    
    printf("   注意：结构体包含指针时的内存管理\n\n");
    
    typedef struct {
        char *name;     // 指向动态分配的字符串
        int age;
        float *scores;  // 指向动态分配的分数数组
        int score_count;
    } StudentDynamic;
    
    StudentDynamic student1;
    
    // 为name分配内存
    student1.name = (char*)malloc(50 * sizeof(char));
    if (student1.name != NULL) {
        strcpy(student1.name, "张三");
    }
    
    student1.age = 20;
    
    // 为scores数组分配内存
    student1.score_count = 3;
    student1.scores = (float*)malloc(student1.score_count * sizeof(float));
    if (student1.scores != NULL) {
        student1.scores[0] = 85.5;
        student1.scores[1] = 92.0;
        student1.scores[2] = 78.5;
    }
    
    printf("   动态分配的结构体成员：\n");
    printf("   姓名：%s\n", student1.name);
    printf("   年龄：%d\n", student1.age);
    printf("   成绩：");
    if (student1.scores != NULL) {
        for (int i = 0; i < student1.score_count; i++) {
            printf("%.1f ", student1.scores[i]);
        }
    }
    printf("\n\n");
    
    printf("   重要：需要手动释放所有动态分配的内存\n");
    
    // 释放内存
    if (student1.name != NULL) {
        free(student1.name);
        student1.name = NULL;
    }
    
    if (student1.scores != NULL) {
        free(student1.scores);
        student1.scores = NULL;
    }
    
    printf("   内存已释放\n\n");
    
    /*
     * 5. 结构体指针作为函数参数
     */
    printf("5. 结构体指针作为函数参数\n\n");
    
    // 函数声明
    void update_city_population(City *city, int new_population);
    City* find_largest_city(City cities[], int count);
    
    City test_cities[3] = {
        {"成都", 16580000, 14335.0},
        {"杭州", 11940000, 16853.0},
        {"武汉", 11210000, 8569.0}
    };
    
    printf("   修改前的城市信息：\n");
    for (int i = 0; i < 3; i++) {
        printf("   %s：%d万人\n", test_cities[i].name, test_cities[i].population / 10000);
    }
    printf("\n");
    
    // 通过指针修改结构体
    update_city_population(&test_cities[0], 17000000);
    printf("   修改后成都人口：%d万人\n\n", test_cities[0].population / 10000);
    
    // 返回结构体指针
    City *largest = find_largest_city(test_cities, 3);
    if (largest != NULL) {
        printf("   人口最多的城市：%s (%d万人)\n", 
               largest->name, largest->population / 10000);
    }
    printf("\n");
    
    /*
     * 6. 指向结构体指针的指针
     */
    printf("6. 指向结构体指针的指针\n\n");
    
    City city = {"深圳", 17600000, 1997.47};
    City *city_ptr = &city;
    City **city_ptr_ptr = &city_ptr;
    
    printf("   多级指针访问：\n");
    printf("   city.name = %s\n", city.name);
    printf("   city_ptr->name = %s\n", city_ptr->name);
    printf("   (*city_ptr_ptr)->name = %s\n", (*city_ptr_ptr)->name);
    printf("   (**city_ptr_ptr).name = %s\n\n", (**city_ptr_ptr).name);
}

// 第四部分的函数定义
void update_city_population(City *city, int new_population) {
    if (city != NULL) {
        city->population = new_population;
    }
}

City* find_largest_city(City cities[], int count) {
    if (count <= 0) return NULL;
    
    City *largest = &cities[0];
    for (int i = 1; i < count; i++) {
        if (cities[i].population > largest->population) {
            largest = &cities[i];
        }
    }
    return largest;
}

/*================================================================
  第五部分：结构体数组和嵌套结构体
  说明：结构体数组和复杂嵌套结构体
================================================================*/

void part5_structure_arrays_and_nesting(void) {
    printf("\n");
    printf("================================================\n");
    printf("第五部分：结构体数组和嵌套结构体\n");
    printf("================================================\n\n");
    
    /*
     * 1. 结构体数组的详细使用
     */
    printf("1. 结构体数组的详细使用\n\n");
    
    typedef struct {
        int product_id;
        char name[50];
        int quantity;
        float unit_price;
        float total_value;
    } InventoryItem;
    
    // 声明并初始化结构体数组
    InventoryItem inventory[5] = {
        {101, "笔记本电脑", 10, 5999.99, 0},
        {102, "智能手机", 25, 3999.00, 0},
        {103, "平板电脑", 15, 2999.50, 0},
        {104, "显示器", 8, 1599.00, 0},
        {105, "键盘", 50, 299.00, 0}
    };
    
    // 计算总价值
    for (int i = 0; i < 5; i++) {
        inventory[i].total_value = inventory[i].quantity * inventory[i].unit_price;
    }
    
    printf("   库存清单：\n");
    printf("   ID    商品名称        数量   单价        总价值\n");
    printf("   -------------------------------------------------\n");
    
    for (int i = 0; i < 5; i++) {
        printf("   %-6d%-15s%-6d%-12.2f%-12.2f\n",
               inventory[i].product_id,
               inventory[i].name,
               inventory[i].quantity,
               inventory[i].unit_price,
               inventory[i].total_value);
    }
    printf("\n");
    
    // 查找最高总价值的商品
    float max_value = inventory[0].total_value;
    int max_index = 0;
    
    for (int i = 1; i < 5; i++) {
        if (inventory[i].total_value > max_value) {
            max_value = inventory[i].total_value;
            max_index = i;
        }
    }
    
    printf("   最高总价值商品：\n");
    printf("   %s，总价值：%.2f\n\n", 
           inventory[max_index].name, inventory[max_index].total_value);
    
    /*
     * 2. 结构体数组排序
     */
    printf("2. 结构体数组排序\n\n");
    
    printf("   按总价值降序排序：\n");
    
    // 冒泡排序
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (inventory[j].total_value < inventory[j + 1].total_value) {
                // 交换两个结构体
                InventoryItem temp = inventory[j];
                inventory[j] = inventory[j + 1];
                inventory[j + 1] = temp;
            }
        }
    }
    
    printf("   排序后的库存：\n");
    for (int i = 0; i < 5; i++) {
        printf("   %d. %-15s 总价值：%.2f\n", 
               i + 1, inventory[i].name, inventory[i].total_value);
    }
    printf("\n");
    
    /*
     * 3. 复杂嵌套结构体
     */
    printf("3. 复杂嵌套结构体\n\n");
    
    // 定义坐标结构体
    typedef struct {
        float x;
        float y;
    } Point2D;
    
    // 定义矩形结构体，包含两个点
    typedef struct {
        Point2D top_left;
        Point2D bottom_right;
        float area;
        float perimeter;
    } Rectangle;
    
    // 定义包含矩形的结构体
    typedef struct {
        Rectangle rect;
        char name[50];
        int id;
    } Shape;
    
    // 创建并初始化嵌套结构体
    Shape shape1 = {
        .rect = {
            .top_left = {0.0, 10.0},
            .bottom_right = {8.0, 0.0},
            .area = 0.0,
            .perimeter = 0.0
        },
        .name = "矩形A",
        .id = 1
    };
    
    // 计算矩形的面积和周长
    float width = shape1.rect.bottom_right.x - shape1.rect.top_left.x;
    float height = shape1.rect.top_left.y - shape1.rect.bottom_right.y;
    
    shape1.rect.area = width * height;
    shape1.rect.perimeter = 2 * (width + height);
    
    printf("   嵌套结构体示例：\n");
    printf("   图形名称：%s\n", shape1.name);
    printf("   图形ID：%d\n", shape1.id);
    printf("   矩形顶点：\n");
    printf("     左上角：(%.1f, %.1f)\n", 
           shape1.rect.top_left.x, shape1.rect.top_left.y);
    printf("     右下角：(%.1f, %.1f)\n", 
           shape1.rect.bottom_right.x, shape1.rect.bottom_right.y);
    printf("   宽度：%.1f，高度：%.1f\n", width, height);
    printf("   面积：%.2f\n", shape1.rect.area);
    printf("   周长：%.2f\n\n", shape1.rect.perimeter);
    
    /*
     * 4. 结构体包含数组的数组
     */
    printf("4. 结构体包含数组的数组（二维数组）\n\n");
    
    typedef struct {
        char student_name[50];
        // 三门课程，每门课程有4次考试
        float grades[3][4];
        float averages[3];
        float overall_average;
    } StudentGrades;
    
    StudentGrades student = {"李四"};
    
    // 初始化成绩
    float grade_data[3][4] = {
        {85.0, 90.0, 88.0, 92.0},  // 数学
        {78.0, 85.0, 80.0, 82.0},  // 英语
        {92.0, 95.0, 90.0, 88.0}   // 物理
    };
    
    // 复制成绩数据
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            student.grades[i][j] = grade_data[i][j];
        }
    }
    
    // 计算每门课的平均分和总平均分
    float total_sum = 0;
    for (int i = 0; i < 3; i++) {
        float sum = 0;
        for (int j = 0; j < 4; j++) {
            sum += student.grades[i][j];
        }
        student.averages[i] = sum / 4;
        total_sum += student.averages[i];
    }
    student.overall_average = total_sum / 3;
    
    printf("   学生：%s\n", student.student_name);
    printf("   课程成绩：\n");
    printf("   课程    成绩1   成绩2   成绩3   成绩4   平均分\n");
    printf("   ----------------------------------------------\n");
    
    char *courses[] = {"数学", "英语", "物理"};
    for (int i = 0; i < 3; i++) {
        printf("   %-8s", courses[i]);
        for (int j = 0; j < 4; j++) {
            printf("%-8.1f", student.grades[i][j]);
        }
        printf("%-8.2f\n", student.averages[i]);
    }
    
    printf("   总平均分：%.2f\n\n", student.overall_average);
    
    /*
     * 5. 结构体数组的输入输出
     */
    printf("5. 结构体数组的输入输出\n\n");
    
    typedef struct {
        char name[50];
        int age;
        char department[50];
    } EmployeeSimple;
    
    EmployeeSimple employees[3];
    
    printf("   模拟员工信息输入：\n");
    
    // 模拟输入数据
    char *emp_names[] = {"张三", "李四", "王五"};
    int emp_ages[] = {28, 35, 42};
    char *emp_depts[] = {"技术部", "市场部", "财务部"};
    
    for (int i = 0; i < 3; i++) {
        strcpy(employees[i].name, emp_names[i]);
        employees[i].age = emp_ages[i];
        strcpy(employees[i].department, emp_depts[i]);
    }
    
    printf("   员工信息表：\n");
    printf("   姓名    年龄    部门\n");
    printf("   -----------------------\n");
    
    for (int i = 0; i < 3; i++) {
        printf("   %-8s%-8d%-12s\n", 
               employees[i].name, 
               employees[i].age, 
               employees[i].department);
    }
    printf("\n");
}

/*============================================================================
  第六部分：共用体
============================================================================*/

// 6.1.1 基本共用体定义
union Data {
    int i;
    float f;
    char str[20];
};

// 6.1.2 使用typedef的共用体
typedef union Number {
    int integer;
    float floating;
    double precise;
} Number;

// 6.1.3 共用体与结构体的嵌套
typedef struct {
    char type;          // 数据类型标识
    union {
        int int_value;
        float float_value;
        char string_value[50];
    } data;             // 共用体成员
} Variant;

/*============================================================================
  6.2 共用体的特点和使用场景
============================================================================*/

void union_basic_concepts(void) {
    printf("\n");
    printf("================================================\n");
    printf("第六部分：共用体（Union）\n");
    printf("================================================\n\n");
    
    /*
     * 1. 共用体的基本概念
     */
    printf("1. 共用体的基本概念\n\n");
    
    printf("   定义：共用体是一种特殊的数据类型\n");
    printf("   允许在同一内存位置存储不同的数据类型\n");
    printf("   所有成员共享同一块内存空间\n\n");
    
    printf("   内存布局对比：\n");
    printf("   结构体：成员占用不同内存，内存大小=所有成员之和\n");
    printf("   共用体：成员共享相同内存，内存大小=最大成员的大小\n\n");
    
    /*
     * 2. 共用体的定义语法
     */
    printf("2. 共用体的定义语法\n\n");
    
    printf("   语法：\n");
    printf("   union 共用体名 {\n");
    printf("       数据类型 成员1;\n");
    printf("       数据类型 成员2;\n");
    printf("       ...\n");
    printf("   };\n\n");
    
    printf("   示例：\n");
    printf("   union Data {\n");
    printf("       int i;\n");
    printf("       float f;\n");
    printf("       char str[20];\n");
    printf("   };\n\n");
    
    /*
     * 3. 共用体的内存分配
     */
    printf("3. 共用体的内存分配\n\n");
    
    union MemoryDemo {
        int a;
        char b;
        float c;
        double d;
    } md;
    
    printf("   共用体大小：sizeof(union MemoryDemo) = %zu 字节\n", 
           sizeof(union MemoryDemo));
    printf("   各成员大小：\n");
    printf("   sizeof(int) = %zu 字节\n", sizeof(int));
    printf("   sizeof(char) = %zu 字节\n", sizeof(char));
    printf("   sizeof(float) = %zu 字节\n", sizeof(float));
    printf("   sizeof(double) = %zu 字节\n", sizeof(double));
    printf("\n");
    
    printf("   地址验证：\n");
    printf("   &md = %p\n", (void*)&md);
    printf("   &md.a = %p\n", (void*)&md.a);
    printf("   &md.b = %p\n", (void*)&md.b);
    printf("   &md.c = %p\n", (void*)&md.c);
    printf("   &md.d = %p\n", (void*)&md.d);
    printf("   所有成员地址相同！\n\n");
}

/*============================================================================
  6.3 共用体的基本操作
============================================================================*/

void union_basic_operations(void) {
    printf("4. 共用体的基本操作\n\n");
    
    /*
     * 4.1 共用体变量的声明和初始化
     */
    printf("4.1 共用体变量的声明和初始化\n\n");
    
    printf("   方法1：定义时声明变量\n");
    union Data {
        int i;
        float f;
        char str[20];
    } data1, data2 = {.f = 3.14};  // C99指定初始化器
    
    printf("   初始化data2.f = %.2f\n", data2.f);
    printf("\n");
    
    printf("   方法2：先定义类型，后声明变量\n");
    union Data data3;
    union Data data4 = {.i = 100};  // 只能初始化第一个成员
    
    printf("   初始化data4.i = %d\n", data4.i);
    printf("\n");
    
    printf("   方法3：使用typedef\n");
    typedef union {
        int int_val;
        float float_val;
        char char_val;
    } Value;
    
    Value v1 = {.int_val = 42};
    Value v2;
    
    printf("   初始化v1.int_val = %d\n", v1.int_val);
    printf("\n");
    
    /*
     * 4.2 共用体成员的访问
     */
    printf("4.2 共用体成员的访问\n\n");
    
    union Data myData;
    
    printf("   访问共用体成员：\n");
    
    // 使用int成员
    myData.i = 10;
    printf("   设置 myData.i = %d\n", myData.i);
    printf("   此时 myData.i = %d, myData.f = %f (无意义)\n", 
           myData.i, myData.f);
    printf("\n");
    
    // 使用float成员（覆盖int）
    myData.f = 220.5;
    printf("   设置 myData.f = %.1f\n", myData.f);
    printf("   此时 myData.i = %d (无意义), myData.f = %.1f\n", 
           myData.i, myData.f);
    printf("\n");
    
    // 使用char数组成员
    strcpy(myData.str, "Hello Union");
    printf("   设置 myData.str = \"%s\"\n", myData.str);
    printf("   此时 myData.i = %d, myData.f = %f (都无意义)\n", 
           myData.i, myData.f);
    printf("\n");
    
    /*
     * 4.3 共用体的特点演示
     */
    printf("4.3 共用体的特点演示\n\n");
    
    union TestUnion {
        unsigned int ui;
        struct {
            unsigned char b0 : 1;
            unsigned char b1 : 1;
            unsigned char b2 : 1;
            unsigned char b3 : 1;
            unsigned char b4 : 1;
            unsigned char b5 : 1;
            unsigned char b6 : 1;
            unsigned char b7 : 1;
        } bits;
    } tu;
    
    // 设置整数值
    tu.ui = 0b10101010;  // 二进制 10101010
    
    printf("   位字段操作演示：\n");
    printf("   tu.ui = %u (二进制: ", tu.ui);
    
    // 打印二进制
    for (int i = 7; i >= 0; i--) {
        printf("%d", (tu.ui >> i) & 1);
    }
    printf(")\n");
    
    printf("   通过位字段访问：\n");
    printf("   tu.bits.b0 = %u\n", tu.bits.b0);
    printf("   tu.bits.b1 = %u\n", tu.bits.b1);
    printf("   tu.bits.b2 = %u\n", tu.bits.b2);
    printf("   tu.bits.b3 = %u\n", tu.bits.b3);
    printf("   tu.bits.b4 = %u\n", tu.bits.b4);
    printf("   tu.bits.b5 = %u\n", tu.bits.b5);
    printf("   tu.bits.b6 = %u\n", tu.bits.b6);
    printf("   tu.bits.b7 = %u\n", tu.bits.b7);
    printf("\n");
}

/*============================================================================
  6.4 共用体的应用场景
============================================================================*/

void union_application_scenarios(void) {
    printf("5. 共用体的应用场景\n\n");
    
    /*
     * 5.1 节省内存空间
     */
    printf("5.1 节省内存空间\n\n");
    
    printf("   场景：同一时间只使用一种数据类型\n");
    
    // 示例1：网络协议数据包
    typedef struct {
        unsigned int packet_id;
        unsigned int packet_type;  // 1:控制包, 2:数据包, 3:命令包
        union {
            struct {
                unsigned char cmd;
                unsigned char param;
            } control;                     // 控制包数据
            
            struct {
                unsigned int data_len;
                char *data_ptr;
            } data;                        // 数据包数据
            
            struct {
                unsigned short cmd_code;
                unsigned short sub_cmd;
                unsigned int param;
            } command;                     // 命令包数据
        } packet_data;
    } NetworkPacket;
    
    printf("   网络数据包示例：\n");
    printf("   sizeof(NetworkPacket) = %zu 字节\n", sizeof(NetworkPacket));
    printf("\n");
    
    // 示例2：图形对象的表示
    typedef enum { CIRCLE, RECTANGLE, TRIANGLE } ShapeType;
    
    typedef struct {
        ShapeType type;
        union {
            struct { float radius; } circle;
            struct { float width, height; } rectangle;
            struct { float base, height; } triangle;
        } dimensions;
    } Shape;
    
    Shape shapes[3];
    
    shapes[0].type = CIRCLE;
    shapes[0].dimensions.circle.radius = 5.0;
    
    shapes[1].type = RECTANGLE;
    shapes[1].dimensions.rectangle.width = 4.0;
    shapes[1].dimensions.rectangle.height = 3.0;
    
    shapes[2].type = TRIANGLE;
    shapes[2].dimensions.triangle.base = 6.0;
    shapes[2].dimensions.triangle.height = 4.0;
    
    printf("   图形对象示例：\n");
    for (int i = 0; i < 3; i++) {
        printf("   形状%d: ", i + 1);
        switch (shapes[i].type) {
            case CIRCLE:
                printf("圆形, 半径=%.1f\n", shapes[i].dimensions.circle.radius);
                break;
            case RECTANGLE:
                printf("矩形, 宽=%.1f, 高=%.1f\n", 
                       shapes[i].dimensions.rectangle.width,
                       shapes[i].dimensions.rectangle.height);
                break;
            case TRIANGLE:
                printf("三角形, 底=%.1f, 高=%.1f\n",
                       shapes[i].dimensions.triangle.base,
                       shapes[i].dimensions.triangle.height);
                break;
        }
    }
    printf("\n");
    
    /*
     * 5.2 类型转换和位操作
     */
    printf("5.2 类型转换和位操作\n\n");
    
    // 示例1：浮点数与整数的转换
    union FloatInt {
        float f;
        unsigned int i;
        struct {
            unsigned int mantissa : 23;
            unsigned int exponent : 8;
            unsigned int sign : 1;
        } parts;
    } fi;
    
    fi.f = -3.75f;
    
    printf("   浮点数位表示分析：\n");
    printf("   值: %.2f\n", fi.f);
    printf("   十六进制: 0x%08X\n", fi.i);
    printf("   符号位: %u\n", fi.parts.sign);
    printf("   指数部分: %u (实际指数: %d)\n", 
           fi.parts.exponent, fi.parts.exponent - 127);
    printf("   尾数部分: 0x%06X\n", fi.parts.mantissa);
    printf("\n");
    
    // 示例2：IP地址处理
    union IPAddress {
        unsigned int address;
        struct {
            unsigned char octet1;
            unsigned char octet2;
            unsigned char octet3;
            unsigned char octet4;
        } octets;
    } ip;
    
    ip.address = 0xC0A80101;  // 192.168.1.1
    
    printf("   IP地址分解：\n");
    printf("   整型值: 0x%08X\n", ip.address);
    printf("   点分十进制: %u.%u.%u.%u\n",
           ip.octets.octet4,  // 注意：小端存储，顺序可能相反
           ip.octets.octet3,
           ip.octets.octet2,
           ip.octets.octet1);
    printf("\n");
    
    /*
     * 5.3 协议数据处理
     */
    printf("5.3 协议数据处理\n\n");
    
    // 示例：CAN总线数据帧
    typedef struct {
        unsigned int id : 11;      // 11位标识符
        unsigned int rtr : 1;      // 远程传输请求
        unsigned int dlc : 4;      // 数据长度码
        union {
            unsigned char data[8]; // 数据字节数组
            struct {
                unsigned short param1;
                unsigned short param2;
                unsigned int param3;
            } structured;          // 结构化数据
        } payload;
    } CANFrame;
    
    CANFrame frame;
    frame.id = 0x123;
    frame.rtr = 0;
    frame.dlc = 8;
    
    // 以字节数组形式设置数据
    for (int i = 0; i < 8; i++) {
        frame.payload.data[i] = i + 1;
    }
    
    printf("   CAN数据帧示例：\n");
    printf("   标识符: 0x%03X\n", frame.id);
    printf("   数据长度: %u\n", frame.dlc);
    printf("   数据字节: ");
    for (int i = 0; i < frame.dlc; i++) {
        printf("%02X ", frame.payload.data[i]);
    }
    printf("\n");
    printf("   结构化访问: param1=0x%04X, param2=0x%04X, param3=0x%08X\n",
           frame.payload.structured.param1,
           frame.payload.structured.param2,
           frame.payload.structured.param3);
    printf("\n");
    
    /*
     * 5.4 变体记录（Variant Record）
     */
    printf("5.4 变体记录（Variant Record）\n\n");
    
    typedef enum { INT_TYPE, FLOAT_TYPE, STRING_TYPE } DataType;
    
    typedef struct {
        DataType type;
        union {
            int int_value;
            float float_value;
            char string_value[50];
        } value;
    } Variant;
    
    Variant vars[3];
    
    vars[0].type = INT_TYPE;
    vars[0].value.int_value = 100;
    
    vars[1].type = FLOAT_TYPE;
    vars[1].value.float_value = 3.14159;
    
    vars[2].type = STRING_TYPE;
    strcpy(vars[2].value.string_value, "Hello Variant");
    
    printf("   变体记录示例：\n");
    for (int i = 0; i < 3; i++) {
        printf("   变量%d: ", i + 1);
        switch (vars[i].type) {
            case INT_TYPE:
                printf("整数, 值=%d\n", vars[i].value.int_value);
                break;
            case FLOAT_TYPE:
                printf("浮点数, 值=%.5f\n", vars[i].value.float_value);
                break;
            case STRING_TYPE:
                printf("字符串, 值=\"%s\"\n", vars[i].value.string_value);
                break;
        }
    }
    printf("\n");
}

/*============================================================================
  6.5 共用体的高级用法
============================================================================*/

void union_advanced_usage(void) {
    printf("6. 共用体的高级用法\n\n");
    
    /*
     * 6.1 匿名共用体（C11标准）
     */
    printf("6.1 匿名共用体（C11标准）\n\n");
    
    // C11标准支持匿名共用体
    #if __STDC_VERSION__ >= 201112L
    printf("   C11匿名共用体示例：\n");
    
    struct AnonymousExample {
        int type;
        union {
            int i;
            float f;
            char str[20];
        };  // 匿名共用体，成员可直接访问
    };
    
    struct AnonymousExample aex;
    aex.type = 1;
    aex.i = 42;  // 直接访问，无需中间名
    
    printf("   匿名共用体访问：aex.i = %d\n", aex.i);
    printf("\n");
    #else
    printf("   编译器不支持C11匿名共用体\n\n");
    #endif
    
    /*
     * 6.2 共用体数组
     */
    printf("6.2 共用体数组\n\n");
    
    typedef union {
        int int_val;
        float float_val;
        char char_val;
    } MultiType;
    
    MultiType array[5];
    
    // 初始化数组
    array[0].int_val = 10;
    array[1].float_val = 20.5;
    array[2].char_val = 'A';
    array[3].int_val = 30;
    array[4].float_val = 40.75;
    
    printf("   共用体数组示例：\n");
    for (int i = 0; i < 5; i++) {
        printf("   元素[%d]: ", i);
        
        // 注意：实际应用中需要额外信息来知道当前存储的类型
        if (i == 0 || i == 3) {
            printf("整数 %d\n", array[i].int_val);
        } else if (i == 1 || i == 4) {
            printf("浮点数 %.2f\n", array[i].float_val);
        } else {
            printf("字符 '%c'\n", array[i].char_val);
        }
    }
    printf("\n");
    
    /*
     * 6.3 共用体与指针
     */
    printf("6.3 共用体与指针\n\n");
    
    union PointerDemo {
        int *int_ptr;
        float *float_ptr;
        char *char_ptr;
    } pd;
    
    int int_val = 100;
    float float_val = 200.5;
    char char_val = 'X';
    
    pd.int_ptr = &int_val;
    printf("   使用int指针：*pd.int_ptr = %d\n", *pd.int_ptr);
    
    pd.float_ptr = &float_val;
    printf("   使用float指针：*pd.float_ptr = %.1f\n", *pd.float_ptr);
    
    pd.char_ptr = &char_val;
    printf("   使用char指针：*pd.char_ptr = '%c'\n", *pd.char_ptr);
    printf("\n");
    
    /*
     * 6.4 共用体作为函数参数和返回值
     */
    printf("6.4 共用体作为函数参数和返回值\n\n");
    
    // 函数声明
    union Number create_number(int type, void *value);
    void print_number(union Number num, int type);
    
    // 定义共用体
    union Number {
        int i;
        float f;
        double d;
    };
    
    // 创建不同类型的数字
    int int_input = 42;
    float float_input = 3.14159;
    double double_input = 2.71828;
    
    union Number n1 = create_number(0, &int_input);
    union Number n2 = create_number(1, &float_input);
    union Number n3 = create_number(2, &double_input);
    
    printf("   共用体函数参数示例：\n");
    print_number(n1, 0);
    print_number(n2, 1);
    print_number(n3, 2);
    printf("\n");
}

// 辅助函数实现
union Number create_number(int type, void *value) {
    union Number num;
    
    switch (type) {
        case 0:  // int
            num.i = *(int*)value;
            break;
        case 1:  // float
            num.f = *(float*)value;
            break;
        case 2:  // double
            num.d = *(double*)value;
            break;
    }
    
    return num;
}

void print_number(union Number num, int type) {
    switch (type) {
        case 0:
            printf("   整数: %d\n", num.i);
            break;
        case 1:
            printf("   浮点数: %.5f\n", num.f);
            break;
        case 2:
            printf("   双精度: %.5lf\n", num.d);
            break;
    }
}

/*============================================================================
  6.6 共用体的注意事项
============================================================================*/

void union_precautions(void) {
    printf("7. 共用体的注意事项\n\n");
    
    /*
     * 7.1 内存覆盖问题
     */
    printf("7.1 内存覆盖问题\n\n");
    
    union OverlapDemo {
        int a;
        int b;
        float c;
    } od;
    
    printf("   内存覆盖演示：\n");
    od.a = 100;
    printf("   设置 od.a = %d\n", od.a);
    printf("   此时 od.b = %d (相同内存)\n", od.b);
    
    od.c = 3.14;
    printf("   设置 od.c = %.2f\n", od.c);
    printf("   此时 od.a = %d (被覆盖，无意义)\n", od.a);
    printf("\n");
    
    /*
     * 7.2 类型安全
     */
    printf("7.2 类型安全问题\n\n");
    
    printf("   问题：编译器不知道当前使用的是哪个成员\n");
    printf("   解决方案：使用标签字段（tagged union）\n\n");
    
    // 正确做法：使用标签字段
    typedef struct {
        enum { IS_INT, IS_FLOAT, IS_STRING } type;
        union {
            int int_val;
            float float_val;
            char string_val[50];
        } value;
    } SafeVariant;
    
    SafeVariant safe;
    safe.type = IS_INT;
    safe.value.int_val = 42;
    
    printf("   安全访问：\n");
    if (safe.type == IS_INT) {
        printf("   安全读取int值：%d\n", safe.value.int_val);
    }
    printf("\n");
    
    /*
     * 7.3 对齐问题
     */
    printf("7.3 内存对齐问题\n\n");
    
    union AlignmentDemo {
        char a;
        int b;
        double c;
        struct {
            char x;
            int y;
        } s;
    } ad;
    
    printf("   对齐演示：\n");
    printf("   sizeof(union AlignmentDemo) = %zu\n", sizeof(union AlignmentDemo));
    printf("   地址：\n");
    printf("   &ad = %p\n", (void*)&ad);
    printf("   &ad.a = %p\n", (void*)&ad.a);
    printf("   &ad.b = %p\n", (void*)&ad.b);
    printf("   &ad.c = %p\n", (void*)&ad.c);
    printf("   &ad.s = %p\n", (void*)&ad.s);
    printf("\n");
    
    printf("   对齐规则：\n");
    printf("   1. 共用体大小是最大成员的大小\n");
    printf("   2. 内存对齐按最大对齐要求的成员进行\n");
    printf("   3. 可能存在内存空洞（padding）\n\n");
    
    /*
     * 7.4 初始化限制
     */
    printf("7.4 初始化限制\n\n");
    
    printf("   限制：\n");
    printf("   1. 只能初始化第一个成员\n");
    printf("   2. C99后可以使用指定初始化器\n");
    printf("   3. 不能使用数组初始化整个共用体\n\n");
    
    union InitDemo {
        int a;
        float b;
        char c[10];
    };
    
    printf("   初始化示例：\n");
    printf("   // 正确：初始化第一个成员\n");
    printf("   union InitDemo d1 = {10};\n");
    printf("\n");
    
    printf("   // 正确：C99指定初始化器\n");
    printf("   union InitDemo d2 = {.b = 3.14};\n");
    printf("\n");
    
    printf("   // 错误：不能这样初始化\n");
    printf("   // union InitDemo d3 = {10, 3.14, \"hello\"};\n");
    printf("\n");
    
    /*
     * 7.5 赋值和复制
     */
    printf("7.5 赋值和复制\n\n");
    
    union CopyDemo {
        int x;
        float y;
    } cd1, cd2;
    
    cd1.x = 100;
    cd2 = cd1;  // 共用体可以整体赋值
    
    printf("   赋值演示：\n");
    printf("   cd1.x = %d\n", cd1.x);
    printf("   cd2 = cd1 后 cd2.x = %d\n", cd2.x);
    
    cd1.y = 200.5;
    printf("   修改 cd1.y = %.1f 后 cd2.x = %d (未改变)\n", cd1.y, cd2.x);
    printf("\n");
}

/*============================================================================
  6.7 共用体与结构体的比较
============================================================================*/

void union_vs_structure(void) {
    printf("8. 共用体与结构体的比较\n\n");
    
    /*
     * 8.1 内存使用对比
     */
    printf("8.1 内存使用对比\n\n");
    
    // 结构体示例
    struct StudentStruct {
        int id;
        float score;
        char grade;
        char name[20];
    };
    
    // 共用体示例
    union StudentUnion {
        int id;
        float score;
        char grade;
        char name[20];
    };
    
    printf("   内存占用对比：\n");
    printf("   sizeof(struct StudentStruct) = %zu 字节\n", 
           sizeof(struct StudentStruct));
    printf("   sizeof(union StudentUnion) = %zu 字节\n", 
           sizeof(union StudentUnion));
    printf("\n");
    
    printf("   内存布局说明：\n");
    printf("   结构体：每个成员有自己的存储空间\n");
    printf("   共用体：所有成员共享同一存储空间\n");
    printf("\n");
    
    /*
     * 8.2 使用场景对比
     */
    printf("8.2 使用场景对比\n\n");
    
    printf("   使用结构体的情况：\n");
    printf("   1. 需要同时存储所有数据\n");
    printf("   2. 各成员数据需要同时存在\n");
    printf("   3. 数据之间没有重叠关系\n");
    printf("   4. 内存充足，注重数据完整性\n");
    printf("\n");
    
    printf("   使用共用体的情况：\n");
    printf("   1. 同一时间只使用一种数据\n");
    printf("   2. 需要节省内存空间\n");
    printf("   3. 需要类型转换或位操作\n");
    printf("   4. 处理协议数据或硬件寄存器\n");
    printf("   5. 实现变体类型\n");
    printf("\n");
    
    /*
     * 8.3 性能对比
     */
    printf("8.3 性能对比\n\n");
    
    printf("   结构体：\n");
    printf("   优点：\n");
    printf("   - 访问速度快（直接偏移访问）\n");
    printf("   - 类型安全\n");
    printf("   - 编译器优化更好\n");
    printf("   缺点：\n");
    printf("   - 内存占用多\n");
    printf("\n");
    
    printf("   共用体：\n");
    printf("   优点：\n");
    printf("   - 内存效率高\n");
    printf("   - 灵活的类型处理\n");
    printf("   缺点：\n");
    printf("   - 需要额外的类型信息\n");
    printf("   - 容易出错（类型混淆）\n");
    printf("   - 编译器优化受限\n");
    printf("\n");
    
    /*
     * 8.4 选择建议
     */
    printf("8.4 选择建议\n\n");
    
    printf("   选择结构体当：\n");
    printf("   ✓ 数据需要长期保存\n");
    printf("   ✓ 所有成员需要同时有效\n");
    printf("   ✓ 内存不是主要考虑因素\n");
    printf("   ✓ 需要类型安全和易维护性\n");
    printf("\n");
    
    printf("   选择共用体当：\n");
    printf("   ✓ 内存紧张\n");
    printf("   ✓ 同一时间只用一种类型\n");
    printf("   ✓ 需要底层位操作\n");
    printf("   ✓ 处理硬件或协议数据\n");
    printf("   ✓ 实现多态或变体类型\n");
    printf("\n");
    
    printf("   混合使用：\n");
    printf("   实际应用中常结合使用\n");
    printf("   结构体包含共用体实现变体记录\n");
    printf("   共用体包含结构体处理复杂数据\n");
    printf("\n");
}

/*============================================================================
  6.8 共用体编程实例
============================================================================*/

void union_programming_examples(void) {
    printf("9. 共用体编程实例\n\n");
    
    /*
     * 9.1 实例1：网络协议解析
     */
    printf("9.1 实例1：网络协议解析\n\n");
    
    // 以太网帧头
    typedef struct {
        unsigned char dest_mac[6];
        unsigned char src_mac[6];
        unsigned short ethertype;
    } EthernetHeader;
    
    // IP头
    typedef struct {
        unsigned char version_ihl;
        unsigned char tos;
        unsigned short total_length;
        unsigned short identification;
        unsigned short flags_fragment;
        unsigned char ttl;
        unsigned char protocol;
        unsigned short checksum;
        unsigned char src_ip[4];
        unsigned char dest_ip[4];
    } IPHeader;
    
    // TCP头
    typedef struct {
        unsigned short src_port;
        unsigned short dest_port;
        unsigned int sequence;
        unsigned int acknowledgment;
        unsigned char data_offset;
        unsigned char flags;
        unsigned short window;
        unsigned short checksum;
        unsigned short urgent;
    } TCPHeader;
    
    // 协议数据包
    typedef struct {
        EthernetHeader eth;
        union {
            struct {
                IPHeader ip;
                union {
                    TCPHeader tcp;
                    // 可以添加其他协议头
                } transport;
            } ip_packet;
            // 可以添加其他网络层协议
        } network;
        unsigned char *payload;
        unsigned int payload_length;
    } NetworkPacket;
    
    printf("   网络数据包解析框架\n");
    printf("   使用共用体处理不同协议\n\n");
    
    /*
     * 9.2 实例2：图形系统
     */
    printf("9.2 实例2：图形系统\n\n");
    
    typedef enum { POINT, LINE, CIRCLE, RECTANGLE, POLYGON } ShapeType;
    
    typedef struct {
        int x, y;
    } Point;
    
    typedef struct {
        ShapeType type;
        unsigned int color;
        union {
            struct { Point p; } point;
            struct { Point p1, p2; } line;
            struct { Point center; int radius; } circle;
            struct { Point top_left; int width, height; } rectangle;
            struct { Point *vertices; int vertex_count; } polygon;
        } shape;
    } GraphicObject;
    
    printf("   图形对象系统\n");
    printf("   使用共用体表示不同图形\n\n");
    
    /*
     * 9.3 实例3：数据库记录
     */
    printf("9.3 实例3：数据库记录\n\n");
    
    typedef enum { TYPE_INT, TYPE_FLOAT, TYPE_STRING, TYPE_BOOL } FieldType;
    
    typedef struct {
        char *name;
        FieldType type;
        union {
            int int_value;
            float float_value;
            char *string_value;
            _Bool bool_value;
        } value;
    } DatabaseField;
    
    typedef struct {
        int field_count;
        DatabaseField *fields;
    } DatabaseRecord;
    
    printf("   数据库记录系统\n");
    printf("   使用共用体存储不同类型的字段\n\n");
    
    // 演示代码
    DatabaseRecord record;
    record.field_count = 4;
    record.fields = malloc(4 * sizeof(DatabaseField));
    
    if (record.fields) {
        record.fields[0].name = "id";
        record.fields[0].type = TYPE_INT;
        record.fields[0].value.int_value = 1001;
        
        record.fields[1].name = "name";
        record.fields[1].type = TYPE_STRING;
        record.fields[1].value.string_value = "John Doe";
        
        record.fields[2].name = "score";
        record.fields[2].type = TYPE_FLOAT;
        record.fields[2].value.float_value = 95.5;
        
        record.fields[3].name = "active";
        record.fields[3].type = TYPE_BOOL;
        record.fields[3].value.bool_value = true;
        
        printf("   数据库记录示例：\n");
        for (int i = 0; i < record.field_count; i++) {
            printf("   %s: ", record.fields[i].name);
            switch (record.fields[i].type) {
                case TYPE_INT:
                    printf("%d\n", record.fields[i].value.int_value);
                    break;
                case TYPE_FLOAT:
                    printf("%.1f\n", record.fields[i].value.float_value);
                    break;
                case TYPE_STRING:
                    printf("%s\n", record.fields[i].value.string_value);
                    break;
                case TYPE_BOOL:
                    printf("%s\n", record.fields[i].value.bool_value ? "true" : "false");
                    break;
            }
        }
        
        free(record.fields);
    }
    printf("\n");
    
    /*
     * 9.4 实例4：虚拟机指令
     */
    printf("9.4 实例4：虚拟机指令系统\n\n");
    
    typedef enum { 
        OP_LOAD, OP_STORE, OP_ADD, OP_SUB, 
        OP_MUL, OP_DIV, OP_JMP, OP_CALL 
    } OpCode;
    
    typedef enum { TYPE_REG, TYPE_IMM, TYPE_MEM } OperandType;
    
    typedef struct {
        OperandType type;
        union {
            int reg_index;      // 寄存器索引
            int immediate;      // 立即数
            struct {            // 内存地址
                int base_reg;
                int offset;
            } memory;
        } operand;
    } InstructionOperand;
    
    typedef struct {
        OpCode opcode;
        InstructionOperand operands[3];
    } VMInstruction;
    
    printf("   虚拟机指令系统\n");
    printf("   使用共用体表示不同类型的操作数\n\n");
    
    // 创建指令示例
    VMInstruction instr;
    instr.opcode = OP_ADD;
    
    instr.operands[0].type = TYPE_REG;
    instr.operands[0].operand.reg_index = 0;
    
    instr.operands[1].type = TYPE_REG;
    instr.operands[1].operand.reg_index = 1;
    
    instr.operands[2].type = TYPE_IMM;
    instr.operands[2].operand.immediate = 10;
    
    printf("   虚拟机指令示例：\n");
    printf("   操作码: %d\n", instr.opcode);
    printf("   操作数0: 寄存器 R%d\n", instr.operands[0].operand.reg_index);
    printf("   操作数1: 寄存器 R%d\n", instr.operands[1].operand.reg_index);
    printf("   操作数2: 立即数 %d\n", instr.operands[2].operand.immediate);
    printf("\n");
}

/*============================================================================
  6.9 共用体总结
============================================================================*/

void union_summary(void) {
    printf("10. 共用体总结\n\n");
    
    printf("   核心概念：\n");
    printf("   - 所有成员共享同一内存空间\n");
    printf("   - 大小等于最大成员的大小\n");
    printf("   - 同一时间只能有效使用一个成员\n\n");
    
    printf("   关键特点：\n");
    printf("   1. 内存效率高\n");
    printf("   2. 需要手动管理类型信息\n");
    printf("   3. 适合底层编程和硬件接口\n");
    printf("   4. 灵活但不安全\n\n");
    
    printf("   应用场景：\n");
    printf("   1. 节省内存（变体记录）\n");
    printf("   2. 类型转换和位操作\n");
    printf("   3. 协议数据处理\n");
    printf("   4. 硬件寄存器映射\n");
    printf("   5. 实现多态数据结构\n\n");
    
    printf("   最佳实践：\n");
    printf("   1. 总是使用标签字段记录当前类型\n");
    printf("   2. 访问前检查类型标签\n");
    printf("   3. 注释说明共用体的用途\n");
    printf("   4. 考虑内存对齐\n");
    printf("   5. 谨慎处理指针成员\n\n");
    
    printf("   常见错误：\n");
    printf("   1. 访问错误的成员（类型混淆）\n");
    printf("   2. 忘记类型标签\n");
    printf("   3. 对齐问题导致数据错误\n");
    printf("   4. 内存覆盖意外\n\n");
    
    printf("   学习建议：\n");
    printf("   1. 理解内存布局\n");
    printf("   2. 练习位操作应用\n");
    printf("   3. 研究实际协议实现\n");
    printf("   4. 与结构体对比学习\n\n");
    
    printf("================================================\n");
    printf("共用体部分学习完成！\n");
    printf("共用体是C语言的高级特性，\n");
    printf("理解它能让你更好地进行系统级编程。\n");
    printf("================================================\n");
}

/*============================================================================
  第七部分：枚举（Enumeration）
============================================================================*/

// 7.1.1 基本枚举定义
enum Color {
    RED,    // 0
    GREEN,  // 1
    BLUE    // 2
};

// 7.1.2 指定值的枚举
enum Month {
    JAN = 1,
    FEB,    // 2
    MAR,    // 3
    APR = 10,
    MAY,    // 11
    JUN     // 12
};

// 7.1.3 使用typedef的枚举
typedef enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Weekday;

/*============================================================================
  7.2 枚举的基本操作
============================================================================*/

void enumeration_basic_concepts(void) {
    printf("\n");
    printf("================================================\n");
    printf("第七部分：枚举（Enumeration）\n");
    printf("================================================\n\n");
    
    /*
     * 1. 枚举的基本概念
     */
    printf("1. 枚举的基本概念\n\n");
    
    printf("   定义：枚举是一种用户自定义的数据类型\n");
    printf("   用于定义一组命名的整数常量\n");
    printf("   提高代码的可读性和可维护性\n\n");
    
    printf("   主要用途：\n");
    printf("   1. 表示有限的状态集合\n");
    printf("   2. 定义选项标志\n");
    printf("   3. 替代魔数（magic numbers）\n");
    printf("   4. 作为函数参数的类型\n\n");
    
    /*
     * 2. 枚举的定义语法
     */
    printf("2. 枚举的定义语法\n\n");
    
    printf("   语法1：基本定义\n");
    printf("   enum 枚举名 {\n");
    printf("       标识符1,\n");
    printf("       标识符2,\n");
    printf("       ...\n");
    printf("   };\n\n");
    
    printf("   语法2：指定值\n");
    printf("   enum 枚举名 {\n");
    printf("       标识符1 = 值1,\n");
    printf("       标识符2 = 值2,\n");
    printf("       ...\n");
    printf("   };\n\n");
    
    printf("   语法3：使用typedef\n");
    printf("   typedef enum {\n");
    printf("       标识符1,\n");
    printf("       标识符2,\n");
    printf("       ...\n");
    printf("   } 枚举别名;\n\n");
    
    /*
     * 3. 枚举的示例演示
     */
    printf("3. 枚举的示例演示\n\n");
    
    printf("   示例1：基本枚举\n");
    enum Color {
        RED,    // 0
        GREEN,  // 1
        BLUE    // 2
    };
    
    enum Color color = GREEN;
    printf("   enum Color color = GREEN;\n");
    printf("   color = %d\n", color);
    printf("   RED = %d, GREEN = %d, BLUE = %d\n", RED, GREEN, BLUE);
    printf("\n");
    
    printf("   示例2：指定值的枚举\n");
    enum Status {
        SUCCESS = 0,
        ERROR = -1,
        PENDING = 1,
        TIMEOUT = 2
    };
    
    printf("   状态码：\n");
    printf("   SUCCESS = %d\n", SUCCESS);
    printf("   ERROR = %d\n", ERROR);
    printf("   PENDING = %d\n", PENDING);
    printf("   TIMEOUT = %d\n", TIMEOUT);
    printf("\n");
    
    printf("   示例3：自动递增\n");
    enum Fruit {
        APPLE = 10,
        BANANA,     // 11
        ORANGE,     // 12
        GRAPE = 20,
        MELON       // 21
    };
    
    printf("   水果枚举值：\n");
    printf("   APPLE = %d\n", APPLE);
    printf("   BANANA = %d\n", BANANA);
    printf("   ORANGE = %d\n", ORANGE);
    printf("   GRAPE = %d\n", GRAPE);
    printf("   MELON = %d\n", MELON);
    printf("\n");
    
    /*
     * 4. 枚举的大小和类型
     */
    printf("4. 枚举的大小和类型\n\n");
    
    printf("   枚举的大小：\n");
    printf("   sizeof(enum Color) = %zu 字节\n", sizeof(enum Color));
    printf("   编译器通常选择足够容纳所有值的整数类型\n");
    printf("   可能是char、short或int\n\n");
    
    enum SmallEnum { A = 100 };
    enum LargeEnum { B = 100000 };
    
    printf("   枚举大小取决于最大值：\n");
    printf("   sizeof(enum SmallEnum) = %zu\n", sizeof(enum SmallEnum));
    printf("   sizeof(enum LargeEnum) = %zu\n", sizeof(enum LargeEnum));
    printf("\n");
}

/*============================================================================
  7.3 枚举的应用场景
============================================================================*/

void enumeration_applications(void) {
    printf("5. 枚举的应用场景\n\n");
    
    /*
     * 5.1 状态机
     */
    printf("5.1 状态机（State Machine）\n\n");
    
    // 交通灯状态机
    typedef enum {
        RED_LIGHT,
        YELLOW_LIGHT,
        GREEN_LIGHT,
        ALL_OFF
    } TrafficLightState;
    
    TrafficLightState current_state = RED_LIGHT;
    
    printf("   交通灯状态机示例：\n");
    for (int i = 0; i < 5; i++) {
        switch (current_state) {
            case RED_LIGHT:
                printf("   当前状态：红灯（停止）\n");
                current_state = GREEN_LIGHT;
                break;
            case YELLOW_LIGHT:
                printf("   当前状态：黄灯（准备）\n");
                current_state = RED_LIGHT;
                break;
            case GREEN_LIGHT:
                printf("   当前状态：绿灯（通行）\n");
                current_state = YELLOW_LIGHT;
                break;
            case ALL_OFF:
                printf("   当前状态：灯全灭\n");
                break;
        }
    }
    printf("\n");
    
    /*
     * 5.2 错误码
     */
    printf("5.2 错误码定义\n\n");
    
    typedef enum {
        ERR_OK = 0,             // 成功
        ERR_INVALID_PARAM = 1,  // 无效参数
        ERR_MEMORY_ALLOC = 2,   // 内存分配失败
        ERR_FILE_NOT_FOUND = 3, // 文件未找到
        ERR_PERMISSION_DENIED = 4, // 权限不足
        ERR_TIMEOUT = 5,        // 超时
        ERR_NETWORK = 6,        // 网络错误
        ERR_UNKNOWN = 255       // 未知错误
    } ErrorCode;
    
    // 模拟函数返回错误码
    ErrorCode open_file(const char *filename) {
        // 模拟检查
        if (filename == NULL) return ERR_INVALID_PARAM;
        // 假设文件不存在
        return ERR_FILE_NOT_FOUND;
    }
    
    printf("   错误码示例：\n");
    ErrorCode result = open_file("test.txt");
    
    switch (result) {
        case ERR_OK:
            printf("   文件打开成功\n");
            break;
        case ERR_INVALID_PARAM:
            printf("   错误：无效参数\n");
            break;
        case ERR_FILE_NOT_FOUND:
            printf("   错误：文件未找到\n");
            break;
        default:
            printf("   未知错误：%d\n", result);
    }
    printf("\n");
    
    /*
     * 5.3 配置选项
     */
    printf("5.3 配置选项\n\n");
    
    typedef enum {
        MODE_NORMAL,      // 正常模式
        MODE_DEBUG,       // 调试模式
        MODE_PERFORMANCE, // 性能模式
        MODE_SAFE         // 安全模式
    } OperationMode;
    
    typedef enum {
        LOG_LEVEL_NONE = 0,
        LOG_LEVEL_ERROR = 1,
        LOG_LEVEL_WARN = 2,
        LOG_LEVEL_INFO = 3,
        LOG_LEVEL_DEBUG = 4,
        LOG_LEVEL_TRACE = 5
    } LogLevel;
    
    // 配置结构
    typedef struct {
        OperationMode mode;
        LogLevel log_level;
        unsigned int timeout;
        _Bool enable_cache;
    } AppConfig;
    
    AppConfig config = {
        .mode = MODE_DEBUG,
        .log_level = LOG_LEVEL_DEBUG,
        .timeout = 5000,
        .enable_cache = true
    };
    
    printf("   应用程序配置：\n");
    printf("   运行模式：");
    switch (config.mode) {
        case MODE_NORMAL: printf("正常模式\n"); break;
        case MODE_DEBUG: printf("调试模式\n"); break;
        case MODE_PERFORMANCE: printf("性能模式\n"); break;
        case MODE_SAFE: printf("安全模式\n"); break;
    }
    
    printf("   日志级别：%d\n", config.log_level);
    printf("   超时设置：%d ms\n", config.timeout);
    printf("   缓存启用：%s\n", config.enable_cache ? "是" : "否");
    printf("\n");
    
    /*
     * 5.4 菜单选项
     */
    printf("5.4 菜单选项\n\n");
    
    typedef enum {
        MENU_NEW = 1,
        MENU_OPEN,
        MENU_SAVE,
        MENU_SAVE_AS,
        MENU_PRINT,
        MENU_EXIT = 99
    } MenuOption;
    
    printf("   文件菜单选项：\n");
    printf("   %d. 新建文件\n", MENU_NEW);
    printf("   %d. 打开文件\n", MENU_OPEN);
    printf("   %d. 保存文件\n", MENU_SAVE);
    printf("   %d. 另存为\n", MENU_SAVE_AS);
    printf("   %d. 打印\n", MENU_PRINT);
    printf("   %d. 退出\n", MENU_EXIT);
    printf("\n");
    
    // 模拟用户选择
    MenuOption choice = MENU_SAVE;
    
    printf("   用户选择了：");
    switch (choice) {
        case MENU_NEW: printf("新建文件\n"); break;
        case MENU_OPEN: printf("打开文件\n"); break;
        case MENU_SAVE: printf("保存文件\n"); break;
        case MENU_SAVE_AS: printf("另存为\n"); break;
        case MENU_PRINT: printf("打印\n"); break;
        case MENU_EXIT: printf("退出\n"); break;
        default: printf("无效选项\n");
    }
    printf("\n");
    
    /*
     * 5.5 标志位组合
     */
    printf("5.5 标志位组合（位标志）\n\n");
    
    // 使用位操作定义标志
    typedef enum {
        PERM_READ    = 1 << 0,   // 0001
        PERM_WRITE   = 1 << 1,   // 0010
        PERM_EXECUTE = 1 << 2,   // 0100
        PERM_DELETE  = 1 << 3    // 1000
    } FilePermission;
    
    // 组合权限
    FilePermission user_perms = PERM_READ | PERM_WRITE;
    FilePermission admin_perms = PERM_READ | PERM_WRITE | PERM_EXECUTE | PERM_DELETE;
    
    printf("   文件权限标志：\n");
    printf("   读取权限：0x%02X\n", PERM_READ);
    printf("   写入权限：0x%02X\n", PERM_WRITE);
    printf("   执行权限：0x%02X\n", PERM_EXECUTE);
    printf("   删除权限：0x%02X\n", PERM_DELETE);
    printf("\n");
    
    printf("   用户权限：0x%02X (", user_perms);
    if (user_perms & PERM_READ) printf("读 ");
    if (user_perms & PERM_WRITE) printf("写 ");
    if (user_perms & PERM_EXECUTE) printf("执行 ");
    if (user_perms & PERM_DELETE) printf("删除");
    printf(")\n");
    
    printf("   管理员权限：0x%02X (", admin_perms);
    if (admin_perms & PERM_READ) printf("读 ");
    if (admin_perms & PERM_WRITE) printf("写 ");
    if (admin_perms & PERM_EXECUTE) printf("执行 ");
    if (admin_perms & PERM_DELETE) printf("删除");
    printf(")\n\n");
}

/*============================================================================
  7.4 枚举与switch语句
============================================================================*/

void enumeration_with_switch(void) {
    printf("6. 枚举与switch语句\n\n");
    
    /*
     * 6.1 switch语句处理枚举
     */
    printf("6.1 switch语句处理枚举\n\n");
    
    typedef enum {
        CMD_START,
        CMD_STOP,
        CMD_PAUSE,
        CMD_RESUME,
        CMD_STATUS,
        CMD_EXIT
    } Command;
    
    // 处理命令的函数
    void handle_command(Command cmd) {
        switch (cmd) {
            case CMD_START:
                printf("   执行：启动操作\n");
                // 启动逻辑
                break;
                
            case CMD_STOP:
                printf("   执行：停止操作\n");
                // 停止逻辑
                break;
                
            case CMD_PAUSE:
                printf("   执行：暂停操作\n");
                // 暂停逻辑
                break;
                
            case CMD_RESUME:
                printf("   执行：恢复操作\n");
                // 恢复逻辑
                break;
                
            case CMD_STATUS:
                printf("   执行：显示状态\n");
                // 状态显示逻辑
                break;
                
            case CMD_EXIT:
                printf("   执行：退出程序\n");
                // 清理和退出逻辑
                break;
                
            default:
                printf("   错误：未知命令\n");
                break;
        }
    }
    
    printf("   命令处理示例：\n");
    handle_command(CMD_START);
    handle_command(CMD_PAUSE);
    handle_command(CMD_STATUS);
    printf("\n");
    
    /*
     * 6.2 枚举范围检查
     */
    printf("6.2 枚举范围检查\n\n");
    
    typedef enum {
        LOW = 1,
        MEDIUM,
        HIGH
    } Priority;
    
    // 检查有效性的函数
    _Bool is_valid_priority(Priority p) {
        return (p >= LOW && p <= HIGH);
    }
    
    // 安全处理函数
    void process_with_priority(Priority p) {
        if (!is_valid_priority(p)) {
            printf("   错误：无效的优先级 %d\n", p);
            return;
        }
        
        switch (p) {
            case LOW:
                printf("   低优先级处理\n");
                break;
            case MEDIUM:
                printf("   中优先级处理\n");
                break;
            case HIGH:
                printf("   高优先级处理\n");
                break;
        }
    }
    
    printf("   优先级处理示例：\n");
    process_with_priority(MEDIUM);
    process_with_priority(99);  // 无效值
    printf("\n");
    
    /*
     * 6.3 枚举转换
     */
    printf("6.3 枚举转换\n\n");
    
    // 枚举转字符串
    const char* color_to_string(enum Color c) {
        switch (c) {
            case RED: return "红色";
            case GREEN: return "绿色";
            case BLUE: return "蓝色";
            default: return "未知颜色";
        }
    }
    
    // 字符串转枚举
    enum Color string_to_color(const char* str) {
        if (strcmp(str, "red") == 0 || strcmp(str, "红色") == 0)
            return RED;
        else if (strcmp(str, "green") == 0 || strcmp(str, "绿色") == 0)
            return GREEN;
        else if (strcmp(str, "blue") == 0 || strcmp(str, "蓝色") == 0)
            return BLUE;
        else
            return RED;  // 默认值
    }
    
    printf("   枚举与字符串转换：\n");
    enum Color my_color = GREEN;
    printf("   color_to_string(GREEN) = %s\n", color_to_string(my_color));
    
    const char* input = "blue";
    enum Color parsed = string_to_color(input);
    printf("   string_to_color(\"blue\") = %s\n", color_to_string(parsed));
    printf("\n");
}

/*============================================================================
  7.5 枚举的高级特性
============================================================================*/

void enumeration_advanced_features(void) {
    printf("7. 枚举的高级特性\n\n");
    
    /*
     * 7.1 枚举与整数类型
     */
    printf("7.1 枚举与整数类型\n\n");
    
    printf("   枚举值本质上是整数常量：\n");
    enum Test { ONE, TWO, THREE };
    
    printf("   枚举值可以用于整数运算：\n");
    int sum = ONE + TWO + THREE;
    printf("   ONE + TWO + THREE = %d\n", sum);
    
    printf("   枚举变量可以赋值整数：\n");
    enum Test t = 2;  // 相当于 THREE
    printf("   enum Test t = 2;  // t = %d\n", t);
    
    printf("   但整数不能直接赋值给枚举类型：\n");
    printf("   // enum Test t2 = 5;  // 可能产生警告\n");
    printf("\n");
    
    /*
     * 7.2 匿名枚举
     */
    printf("7.2 匿名枚举\n\n");
    
    // 匿名枚举定义常量
    enum {
        MAX_BUFFER_SIZE = 1024,
        MAX_CONNECTIONS = 100,
        TIMEOUT_MS = 5000
    };
    
    printf("   匿名枚举定义常量：\n");
    printf("   MAX_BUFFER_SIZE = %d\n", MAX_BUFFER_SIZE);
    printf("   MAX_CONNECTIONS = %d\n", MAX_CONNECTIONS);
    printf("   TIMEOUT_MS = %d\n", TIMEOUT_MS);
    printf("\n");
    
    /*
     * 7.3 枚举作用域
     */
    printf("7.3 枚举作用域\n\n");
    
    printf("   枚举标识符有自己的作用域：\n");
    
    // 全局作用域
    enum GlobalEnum { OPTION_A, OPTION_B };
    
    void test_function() {
        // 函数内作用域
        enum LocalEnum { LOCAL_OPTION_1, LOCAL_OPTION_2 };
        
        // 可以定义同名的局部枚举
        enum Color { BLACK, WHITE, GRAY };
        
        // 冲突示例
        // enum GlobalEnum { X, Y };  // 错误：重定义
    }
    
    printf("   作用域规则：\n");
    printf("   1. 全局枚举在整个文件可见\n");
    printf("   2. 局部枚举只在函数内可见\n");
    printf("   3. 不同作用域可以有同名枚举\n");
    printf("\n");
    
    /*
     * 7.4 C++11风格的枚举（C语言扩展）
     */
    printf("7.4 枚举的类型安全（概念性）\n\n");
    
    // 在C语言中，枚举类型不安全
    // 但可以通过一些技巧增强类型安全
    
    typedef struct {
        enum { TYPE_INT, TYPE_FLOAT } type;
        union {
            int int_value;
            float float_value;
        } value;
    } TaggedValue;
    
    printf("   使用标签联合增强类型安全：\n");
    TaggedValue tv;
    tv.type = TYPE_INT;
    tv.value.int_value = 42;
    
    // 安全访问
    if (tv.type == TYPE_INT) {
        printf("   安全读取：%d\n", tv.value.int_value);
    }
    printf("\n");
}

/*============================================================================
  7.6 枚举的最佳实践
============================================================================*/

void enumeration_best_practices(void) {
    printf("8. 枚举的最佳实践\n\n");
    
    printf("   1. 使用有意义的名称\n");
    printf("   不好：enum { A, B, C };\n");
    printf("   好：enum { STATE_IDLE, STATE_RUNNING, STATE_ERROR };\n\n");
    
    printf("   2. 使用typedef简化\n");
    printf("   typedef enum { ON, OFF } SwitchState;\n");
    printf("   SwitchState state = ON;\n\n");
    
    printf("   3. 为枚举值添加前缀\n");
    printf("   避免命名冲突：\n");
    printf("   enum LogLevel {\n");
    printf("       LOG_LEVEL_DEBUG,\n");
    printf("       LOG_LEVEL_INFO,\n");
    printf("       LOG_LEVEL_ERROR\n");
    printf("   };\n\n");
    
    printf("   4. 显式指定值\n");
    printf("   当值有特定含义时：\n");
    printf("   enum HttpCode {\n");
    printf("       HTTP_OK = 200,\n");
    printf("       HTTP_NOT_FOUND = 404,\n");
    printf("       HTTP_ERROR = 500\n");
    printf("   };\n\n");
    
    printf("   5. 添加默认值\n");
    printf("   enum Result {\n");
    printf("       RESULT_UNKNOWN = 0,  // 默认值\n");
    printf("       RESULT_SUCCESS,\n");
    printf("       RESULT_FAILURE\n");
    printf("   };\n\n");
    
    printf("   6. 使用位标志时清晰定义\n");
    printf("   enum Permissions {\n");
    printf("       PERM_NONE = 0,\n");
    printf("       PERM_READ = 1 << 0,\n");
    printf("       PERM_WRITE = 1 << 1,\n");
    printf("       PERM_EXEC = 1 << 2\n");
    printf("   };\n\n");
    
    printf("   7. 添加注释说明\n");
    printf("   // 设备状态枚举\n");
    printf("   typedef enum {\n");
    printf("       DEVICE_OFF,      // 设备关闭\n");
    printf("       DEVICE_ON,       // 设备开启\n");
    printf("       DEVICE_STANDBY   // 设备待机\n");
    printf("   } DeviceState;\n\n");
    
    printf("   8. 处理未知值\n");
    printf("   总是包含default分支：\n");
    printf("   switch(state) {\n");
    printf("       case STATE_A: ... break;\n");
    printf("       case STATE_B: ... break;\n");
    printf("       default: // 处理未知状态\n");
    printf("   }\n\n");
}

/*============================================================================
  7.7 枚举的实际案例
============================================================================*/

void enumeration_real_world_examples(void) {
    printf("9. 枚举的实际案例\n\n");
    
    /*
     * 9.1 网络协议
     */
    printf("9.1 网络协议定义\n\n");
    
    // HTTP方法
    typedef enum {
        HTTP_GET,
        HTTP_POST,
        HTTP_PUT,
        HTTP_DELETE,
        HTTP_HEAD,
        HTTP_OPTIONS
    } HttpMethod;
    
    // HTTP状态码
    typedef enum {
        HTTP_200_OK = 200,
        HTTP_201_CREATED = 201,
        HTTP_400_BAD_REQUEST = 400,
        HTTP_401_UNAUTHORIZED = 401,
        HTTP_403_FORBIDDEN = 403,
        HTTP_404_NOT_FOUND = 404,
        HTTP_500_INTERNAL_ERROR = 500
    } HttpStatusCode;
    
    printf("   HTTP协议枚举：\n");
    printf("   方法：GET=%d, POST=%d, PUT=%d\n", 
           HTTP_GET, HTTP_POST, HTTP_PUT);
    printf("   状态码：200=%d, 404=%d, 500=%d\n",
           HTTP_200_OK, HTTP_404_NOT_FOUND, HTTP_500_INTERNAL_ERROR);
    printf("\n");
    
    /*
     * 9.2 文件系统
     */
    printf("9.2 文件系统操作\n\n");
    
    typedef enum {
        FILE_OPEN_READ = 1,
        FILE_OPEN_WRITE = 2,
        FILE_OPEN_APPEND = 4,
        FILE_OPEN_BINARY = 8,
        FILE_OPEN_TEXT = 16
    } FileOpenMode;
    
    typedef enum {
        SEEK_SET,  // 文件开头
        SEEK_CUR,  // 当前位置
        SEEK_END   // 文件结尾
    } SeekOrigin;
    
    printf("   文件操作枚举：\n");
    printf("   打开模式：读=%d, 写=%d, 追加=%d\n",
           FILE_OPEN_READ, FILE_OPEN_WRITE, FILE_OPEN_APPEND);
    printf("   定位方式：SET=%d, CUR=%d, END=%d\n",
           SEEK_SET, SEEK_CUR, SEEK_END);
    printf("\n");
    
    /*
     * 9.3 游戏开发
     */
    printf("9.3 游戏开发应用\n\n");
    
    // 游戏状态
    typedef enum {
        GAME_MENU,
        GAME_PLAYING,
        GAME_PAUSED,
        GAME_OVER,
        GAME_VICTORY
    } GameState;
    
    // 方向
    typedef enum {
        DIR_UP,
        DIR_DOWN,
        DIR_LEFT,
        DIR_RIGHT,
        DIR_NONE
    } Direction;
    
    // 玩家状态
    typedef enum {
        PLAYER_IDLE,
        PLAYER_WALKING,
        PLAYER_RUNNING,
        PLAYER_JUMPING,
        PLAYER_ATTACKING,
        PLAYER_HURT,
        PLAYER_DEAD
    } PlayerState;
    
    printf("   游戏枚举示例：\n");
    printf("   游戏状态：菜单=%d, 游戏中=%d\n", GAME_MENU, GAME_PLAYING);
    printf("   移动方向：上=%d, 下=%d, 左=%d, 右=%d\n",
           DIR_UP, DIR_DOWN, DIR_LEFT, DIR_RIGHT);
    printf("   玩家状态：空闲=%d, 行走=%d, 攻击=%d\n",
           PLAYER_IDLE, PLAYER_WALKING, PLAYER_ATTACKING);
    printf("\n");
    
    /*
     * 9.4 嵌入式系统
     */
    printf("9.4 嵌入式系统应用\n\n");
    
    // 设备状态
    typedef enum {
        DEVICE_INIT,
        DEVICE_READY,
        DEVICE_BUSY,
        DEVICE_ERROR,
        DEVICE_SLEEP
    } DeviceStatus;
    
    // 传感器类型
    typedef enum {
        SENSOR_TEMP,
        SENSOR_HUMIDITY,
        SENSOR_PRESSURE,
        SENSOR_LIGHT,
        SENSOR_MOTION
    } SensorType;
    
    // 通信状态
    typedef enum {
        COMM_IDLE,
        COMM_SENDING,
        COMM_RECEIVING,
        COMM_ERROR,
        COMM_TIMEOUT
    } CommStatus;
    
    printf("   嵌入式系统枚举：\n");
    printf("   设备状态：初始化=%d, 就绪=%d, 忙碌=%d\n",
           DEVICE_INIT, DEVICE_READY, DEVICE_BUSY);
    printf("   传感器类型：温度=%d, 湿度=%d, 光线=%d\n",
           SENSOR_TEMP, SENSOR_HUMIDITY, SENSOR_LIGHT);
    printf("   通信状态：空闲=%d, 发送=%d, 接收=%d\n",
           COMM_IDLE, COMM_SENDING, COMM_RECEIVING);
    printf("\n");
}

/*============================================================================
  7.8 枚举总结
============================================================================*/

void enumeration_summary(void) {
    printf("10. 枚举总结\n\n");
    
    printf("   核心概念：\n");
    printf("   - 枚举是一组命名的整数常量\n");
    printf("   - 提高代码可读性和可维护性\n");
    printf("   - 本质上是整数类型\n\n");
    
    printf("   主要优势：\n");
    printf("   1. 代码自文档化\n");
    printf("   2. 编译时类型检查\n");
    printf("   3. 避免魔术数字\n");
    printf("   4. 便于IDE智能提示\n\n");
    
    printf("   使用场景：\n");
    printf("   1. 有限状态集合\n");
    printf("   2. 错误码和状态码\n");
    printf("   3. 配置选项和标志\n");
    printf("   4. 菜单和命令\n");
    printf("   5. 协议定义\n\n");
    
    printf("   最佳实践总结：\n");
    printf("   1. 使用有意义的名称\n");
    printf("   2. 添加必要的前缀\n");
    printf("   3. 显式指定重要值\n");
    printf("   4. 使用typedef简化\n");
    printf("   5. 添加详细注释\n");
    printf("   6. 处理未知值\n");
    printf("   7. 避免枚举值冲突\n\n");
    
    printf("   注意事项：\n");
    printf("   1. 枚举不是完全类型安全的\n");
    printf("   2. 不同枚举可能冲突\n");
    printf("   3. 作用域需要注意\n");
    printf("   4. 值范围检查需要手动实现\n\n");
    
    printf("================================================\n");
    printf("枚举部分学习完成！\n");
    printf("枚举是提高代码质量的利器，\n");
    printf("合理使用能让代码更清晰、更易维护。\n");
    printf("================================================\n");
}

/*============================================================================
  第八部分：位域（Bit Fields）
============================================================================*/

// 8.1.1 基本位域定义
struct BitFieldDemo {
    unsigned int flag1 : 1;   // 1位
    unsigned int flag2 : 2;   // 2位
    unsigned int flag3 : 3;   // 3位
    unsigned int flag4 : 10;  // 10位
};

// 8.1.2 不同类型位域
struct MixedBitField {
    unsigned int a : 4;       // 无符号
    int b : 5;                // 有符号
    unsigned char c : 3;      // char类型
    unsigned : 0;             // 强制对齐
    unsigned int d : 8;       // 新存储单元
};

/*============================================================================
  8.2 位域的基本操作
============================================================================*/

void bitfield_basic_concepts(void) {
    printf("\n");
    printf("================================================\n");
    printf("第八部分：位域（Bit Fields）\n");
    printf("================================================\n\n");
    
    /*
     * 1. 位域的基本概念
     */
    printf("1. 位域的基本概念\n\n");
    
    printf("   定义：位域允许在结构体中按位分配成员\n");
    printf("   用于节省内存空间，特别是存储标志位\n");
    printf("   适用于嵌入式系统和协议处理\n\n");
    
    printf("   主要用途：\n");
    printf("   1. 节省内存（存储多个布尔标志）\n");
    printf("   2. 硬件寄存器映射\n");
    printf("   3. 网络协议字段\n");
    printf("   4. 压缩数据存储\n\n");
    
    /*
     * 2. 位域的语法
     */
    printf("2. 位域的语法\n\n");
    
    printf("   基本语法：\n");
    printf("   struct 结构体名 {\n");
    printf("       类型 成员名 : 位数;\n");
    printf("       类型 成员名 : 位数;\n");
    printf("       ...\n");
    printf("   };\n\n");
    
    printf("   特殊语法：\n");
    printf("   1. 无名位域：unsigned : 位数;  // 填充位\n");
    printf("   2. 0长度位域：unsigned : 0;    // 强制对齐\n");
    printf("   3. 未命名位域：用于跳过某些位\n\n");
    
    /*
     * 3. 位域示例演示
     */
    printf("3. 位域示例演示\n\n");
    
    printf("   示例1：基本位域\n");
    struct Flags {
        unsigned int is_active : 1;   // 1位
        unsigned int is_visible : 1;  // 1位
        unsigned int is_editable : 1; // 1位
        unsigned int priority : 3;    // 3位 (0-7)
        unsigned int type : 4;        // 4位 (0-15)
        unsigned int reserved : 22;   // 22位填充
    } flags;
    
    printf("   结构体大小：sizeof(struct Flags) = %zu 字节\n", 
           sizeof(struct Flags));
    printf("   内存布局：共32位（4字节）\n\n");
    
    // 设置值
    flags.is_active = 1;
    flags.is_visible = 0;
    flags.is_editable = 1;
    flags.priority = 5;    // 二进制 101
    flags.type = 9;        // 二进制 1001
    
    printf("   位域值：\n");
    printf("   is_active: %u\n", flags.is_active);
    printf("   is_visible: %u\n", flags.is_visible);
    printf("   is_editable: %u\n", flags.is_editable);
    printf("   priority: %u\n", flags.priority);
    printf("   type: %u\n", flags.type);
    printf("\n");
    
    /*
     * 4. 位域的内存布局
     */
    printf("4. 位域的内存布局\n\n");
    
    struct LayoutDemo {
        unsigned int a : 3;
        unsigned int b : 5;
        unsigned int c : 8;
        unsigned int d : 16;
    } ld;
    
    printf("   内存布局示例：\n");
    printf("   a: 3位, b: 5位, c: 8位, d: 16位\n");
    printf("   总计：32位（4字节）\n");
    printf("   结构体大小：%zu 字节\n", sizeof(struct LayoutDemo));
    printf("\n");
    
    // 演示位操作
    unsigned int *ptr = (unsigned int*)&ld;
    *ptr = 0;  // 清空
    
    ld.a = 0b101;     // 3位：101
    ld.b = 0b11010;   // 5位：11010
    ld.c = 0b11110000; // 8位：11110000
    ld.d = 0b1010101010101010; // 16位
    
    printf("   位域值对应的位模式：\n");
    printf("   内存值：0x%08X\n", *ptr);
    printf("\n   ");
    
    // 打印二进制位
    for (int i = 31; i >= 0; i--) {
        printf("%d", (*ptr >> i) & 1);
        if (i % 8 == 0) printf(" ");
    }
    printf("\n");
    printf("   d(16位)   c(8位)    b(5位) a(3位)\n\n");
}

/*============================================================================
  8.3 位域的应用场景
============================================================================*/

void bitfield_applications(void) {
    printf("5. 位域的应用场景\n\n");
    
    /*
     * 5.1 硬件寄存器映射
     */
    printf("5.1 硬件寄存器映射\n\n");
    
    // UART控制寄存器
    struct UART_Control {
        unsigned int enable : 1;      // 使能位
        unsigned int tx_enable : 1;   // 发送使能
        unsigned int rx_enable : 1;   // 接收使能
        unsigned int parity_enable : 1; // 奇偶校验使能
        unsigned int parity_type : 1; // 奇偶校验类型 0:偶校验 1:奇校验
        unsigned int stop_bits : 2;   // 停止位 00:1位 01:1.5位 10:2位
        unsigned int data_bits : 2;   // 数据位 00:5位 01:6位 10:7位 11:8位
        unsigned int baud_rate : 3;   // 波特率选择
        unsigned int interrupt_enable : 1; // 中断使能
        unsigned int : 19;            // 保留位
    } uart_ctrl;
    
    // 设置UART参数
    uart_ctrl.enable = 1;
    uart_ctrl.tx_enable = 1;
    uart_ctrl.rx_enable = 1;
    uart_ctrl.data_bits = 3;   // 8位数据
    uart_ctrl.stop_bits = 0;   // 1位停止位
    uart_ctrl.parity_enable = 0; // 无奇偶校验
    uart_ctrl.baud_rate = 4;   // 9600波特率
    
    printf("   UART控制寄存器配置：\n");
    printf("   使能：%s\n", uart_ctrl.enable ? "是" : "否");
    printf("   发送使能：%s\n", uart_ctrl.tx_enable ? "是" : "否");
    printf("   数据位：%d位\n", 5 + uart_ctrl.data_bits);
    printf("   停止位：");
    switch (uart_ctrl.stop_bits) {
        case 0: printf("1位\n"); break;
        case 1: printf("1.5位\n"); break;
        case 2: printf("2位\n"); break;
    }
    printf("   波特率索引：%d\n", uart_ctrl.baud_rate);
    printf("\n");
    
    /*
     * 5.2 网络协议头
     */
    printf("5.2 网络协议头（简化IP头）\n\n");
    
    struct IP_Header {
        unsigned int version : 4;      // IP版本
        unsigned int ihl : 4;          // 头部长度
        unsigned int tos : 8;          // 服务类型
        unsigned int total_length : 16; // 总长度
        
        unsigned int identification : 16; // 标识
        unsigned int flags : 3;        // 标志位
        unsigned int fragment_offset : 13; // 分片偏移
        
        unsigned int ttl : 8;          // 生存时间
        unsigned int protocol : 8;     // 协议类型
        unsigned int checksum : 16;    // 头部校验和
    } ip_header;
    
    // 填充示例值
    ip_header.version = 4;       // IPv4
    ip_header.ihl = 5;           // 5 * 4 = 20字节
    ip_header.total_length = 1500;
    ip_header.ttl = 64;
    ip_header.protocol = 6;      // TCP协议
    
    printf("   IP头部信息：\n");
    printf("   版本：IPv%d\n", ip_header.version);
    printf("   头部长度：%d字（%d字节）\n", 
           ip_header.ihl, ip_header.ihl * 4);
    printf("   总长度：%d字节\n", ip_header.total_length);
    printf("   TTL：%d\n", ip_header.ttl);
    printf("   协议：%d ", ip_header.protocol);
    
    switch (ip_header.protocol) {
        case 1: printf("(ICMP)\n"); break;
        case 6: printf("(TCP)\n"); break;
        case 17: printf("(UDP)\n"); break;
        default: printf("(未知)\n");
    }
    printf("\n");
    
    /*
     * 5.3 文件属性
     */
    printf("5.3 文件属性标志\n\n");
    
    struct FileAttributes {
        unsigned int read_only : 1;
        unsigned int hidden : 1;
        unsigned int system : 1;
        unsigned int archive : 1;
        unsigned int directory : 1;
        unsigned int device : 1;
        unsigned int normal : 1;
        unsigned int temporary : 1;
        unsigned int compressed : 1;
        unsigned int encrypted : 1;
        unsigned int indexed : 1;
        unsigned int sparse : 1;
        unsigned int reparse_point : 1;
        unsigned int offline : 1;
        unsigned int : 18;  // 保留位
    } file_attr;
    
    // 设置文件属性
    file_attr.read_only = 1;
    file_attr.hidden = 0;
    file_attr.archive = 1;
    file_attr.compressed = 1;
    
    printf("   文件属性：\n");
    printf("   只读：%s\n", file_attr.read_only ? "是" : "否");
    printf("   隐藏：%s\n", file_attr.hidden ? "是" : "否");
    printf("   存档：%s\n", file_attr.archive ? "是" : "否");
    printf("   压缩：%s\n", file_attr.compressed ? "是" : "否");
    printf("\n");
    
    /*
     * 5.4 RGB颜色存储
     */
    printf("5.4 RGB颜色存储（16位高彩色）\n\n");
    
    struct RGB16 {
        unsigned int blue : 5;    // 5位蓝色
        unsigned int green : 6;   // 6位绿色（人眼对绿色最敏感）
        unsigned int red : 5;     // 5位红色
    } color_16bit;
    
    struct RGB24 {
        unsigned int blue : 8;    // 8位蓝色
        unsigned int green : 8;   // 8位绿色
        unsigned int red : 8;     // 8位红色
    } color_24bit;
    
    // 设置颜色
    color_16bit.red = 31;     // 最大值
    color_16bit.green = 63;   // 最大值
    color_16bit.blue = 31;    // 最大值（白色）
    
    color_24bit.red = 255;
    color_24bit.green = 128;
    color_24bit.blue = 64;
    
    printf("   颜色存储对比：\n");
    printf("   16位高彩色（%zu字节）：R=%d, G=%d, B=%d\n",
           sizeof(struct RGB16),
           color_16bit.red, color_16bit.green, color_16bit.blue);
    printf("   24位真彩色（%zu字节）：R=%d, G=%d, B=%d\n",
           sizeof(struct RGB24),
           color_24bit.red, color_24bit.green, color_24bit.blue);
    printf("   节省空间：%.1f%%\n",
           (1.0 - (float)sizeof(struct RGB16)/sizeof(struct RGB24)) * 100);
    printf("\n");
}

/*============================================================================
  8.4 位域的高级特性
============================================================================*/

void bitfield_advanced_features(void) {
    printf("6. 位域的高级特性\n\n");
    
    /*
     * 6.1 位域对齐
     */
    printf("6.1 位域对齐（padding）\n\n");
    
    struct AlignTest1 {
        unsigned int a : 5;
        unsigned int b : 8;
        unsigned int c : 3;
    } test1;
    
    struct AlignTest2 {
        unsigned int a : 5;
        unsigned int   : 0;  // 强制对齐到下一个存储单元
        unsigned int b : 8;
    } test2;
    
    struct AlignTest3 {
        unsigned int a : 12;
        unsigned int   : 4;  // 填充4位
        unsigned int b : 16;
    } test3;
    
    printf("   位域对齐示例：\n");
    printf("   test1大小：%zu字节（自动对齐）\n", sizeof(test1));
    printf("   test2大小：%zu字节（强制对齐）\n", sizeof(test2));
    printf("   test3大小：%zu字节（手动填充）\n", sizeof(test3));
    printf("\n");
    
    /*
     * 6.2 跨存储单元位域
     */
    printf("6.2 跨存储单元位域\n\n");
    
    struct CrossStorage {
        unsigned int a : 20;  // 20位
        unsigned int b : 15;  // 跨越边界
    } cross;
    
    printf("   跨存储单元示例：\n");
    printf("   存储单元大小：%zu位\n", sizeof(unsigned int) * 8);
    printf("   位域a：20位\n");
    printf("   位域b：15位（可能跨越边界）\n");
    printf("   结构体大小：%zu字节\n", sizeof(struct CrossStorage));
    printf("   注意：跨存储单元行为依赖于编译器\n\n");
    
    /*
     * 6.3 位域与联合
     */
    printf("6.3 位域与联合结合使用\n\n");
    
    // 联合中的位域
    union RegisterAccess {
        unsigned int raw_value;
        struct {
            unsigned int mode : 3;
            unsigned int enable : 1;
            unsigned int speed : 2;
            unsigned int : 2;  // 保留
            unsigned int data : 8;
            unsigned int : 16; // 保留
        } bits;
    } reg;
    
    reg.raw_value = 0x12345678;
    
    printf("   寄存器位访问：\n");
    printf("   原始值：0x%08X\n", reg.raw_value);
    printf("   位域访问：\n");
    printf("   mode = %u\n", reg.bits.mode);
    printf("   enable = %u\n", reg.bits.enable);
    printf("   speed = %u\n", reg.bits.speed);
    printf("   data = 0x%02X\n", reg.bits.data);
    printf("\n");
    
    // 通过位域修改
    reg.bits.enable = 1;
    reg.bits.speed = 2;
    reg.bits.data = 0xFF;
    
    printf("   修改后原始值：0x%08X\n", reg.raw_value);
    printf("\n");
    
    /*
     * 6.4 位域数组
     */
    printf("6.4 位域数组\n\n");
    
    // 注意：位域不能直接构成数组，但可以通过技巧实现
    
    struct BitArray {
        unsigned int bits[2];  // 64位存储
    };
    
    // 使用宏访问特定位
    #define SET_BIT(arr, pos) ((arr).bits[(pos)/32] |= (1U << ((pos)%32)))
    #define CLEAR_BIT(arr, pos) ((arr).bits[(pos)/32] &= ~(1U << ((pos)%32)))
    #define GET_BIT(arr, pos) (((arr).bits[(pos)/32] >> ((pos)%32)) & 1U)
    
    struct BitArray bit_arr = {{0}};
    
    // 设置一些位
    SET_BIT(bit_arr, 0);
    SET_BIT(bit_arr, 10);
    SET_BIT(bit_arr, 35);
    SET_BIT(bit_arr, 63);
    
    printf("   位数组示例：\n");
    printf("   位0：%d\n", GET_BIT(bit_arr, 0));
    printf("   位10：%d\n", GET_BIT(bit_arr, 10));
    printf("   位35：%d\n", GET_BIT(bit_arr, 35));
    printf("   位63：%d\n", GET_BIT(bit_arr, 63));
    printf("   位15：%d（未设置）\n", GET_BIT(bit_arr, 15));
    
    // 清除位
    CLEAR_BIT(bit_arr, 10);
    printf("   清除位10后：%d\n", GET_BIT(bit_arr, 10));
    printf("\n");
}

/*============================================================================
  8.5 位域的注意事项
============================================================================*/

void bitfield_precautions(void) {
    printf("7. 位域的注意事项\n\n");
    
    /*
     * 7.1 可移植性问题
     */
    printf("7.1 可移植性问题\n\n");
    
    printf("   位域的不可移植性：\n");
    printf("   1. 存储单元分配顺序（大端/小端）\n");
    printf("   2. 位域是否跨越存储单元边界\n");
    printf("   3. 对齐方式\n");
    printf("   4. 符号位的处理\n\n");
    
    printf("   示例：大端和小端系统的差异\n");
    struct EndianTest {
        unsigned int a : 8;
        unsigned int b : 8;
        unsigned int c : 8;
        unsigned int d : 8;
    } et = {.a = 0x12, .b = 0x34, .c = 0x56, .d = 0x78};
    
    unsigned int *p = (unsigned int*)&et;
    printf("   位域值：a=0x%02X, b=0x%02X, c=0x%02X, d=0x%02X\n",
           et.a, et.b, et.c, et.d);
    printf("   内存值：0x%08X\n", *p);
    printf("   在小端系统：0x78563412\n");
    printf("   在大端系统：0x12345678\n\n");
    
    /*
     * 7.2 位域的取值范围
     */
    printf("7.2 位域的取值范围\n\n");
    
    struct RangeTest {
        unsigned int positive : 3;  // 0-7
        int negative : 3;           // -4到3（二进制补码）
    } rt;
    
    printf("   无符号位域（3位）：0 到 %u\n", (1U << 3) - 1);
    printf("   有符号位域（3位）：%d 到 %d\n", 
           -(1 << (3-1)), (1 << (3-1)) - 1);
    
    // 测试溢出
    rt.positive = 7;  // 最大值
    printf("   设置 positive = 7：%u\n", rt.positive);
    
    // 溢出示例
    rt.positive = 8;  // 超出范围
    printf("   设置 positive = 8（溢出）：%u\n", rt.positive);
    printf("   注意：溢出行为未定义，可能回绕\n\n");
    
    /*
     * 7.3 位域的地址和指针
     */
    printf("7.3 位域的地址和指针\n\n");
    
    struct AddressTest {
        unsigned int flag : 1;
        unsigned int value : 4;
    } at;
    
    printf("   不能取位域的地址：\n");
    printf("   // &at.flag;  // 错误！不能取位域成员的地址\n");
    printf("   原因：位域成员可能不占用完整的可寻址字节\n");
    printf("\n");
    
    printf("   可以取整个结构体的地址：\n");
    printf("   struct AddressTest *ptr = &at;  // 正确\n");
    printf("   可以通过指针访问位域：\n");
    printf("   ptr->flag = 1;\n");
    printf("   ptr->value = 5;\n\n");
    
    /*
     * 7.4 位域的初始化
     */
    printf("7.4 位域的初始化\n\n");
    
    printf("   位域的初始化：\n");
    printf("   1. 可以使用大括号初始化\n");
    printf("   2. 可以使用指定初始化器（C99）\n");
    printf("   3. 不能单独初始化位域成员\n\n");
    
    struct InitDemo {
        unsigned int a : 4;
        unsigned int b : 4;
        unsigned int c : 8;
    } init1 = {1, 2, 3};  // 传统初始化
    
    struct InitDemo init2 = {
        .a = 5,
        .b = 6,
        .c = 255
    };  // 指定初始化器
    
    printf("   初始化示例：\n");
    printf("   init1: a=%u, b=%u, c=%u\n", init1.a, init1.b, init1.c);
    printf("   init2: a=%u, b=%u, c=%u\n", init2.a, init2.b, init2.c);
    printf("\n");
    
    /*
     * 7.5 位域的性能考虑
     */
    printf("7.5 位域的性能考虑\n\n");
    
    printf("   性能影响：\n");
    printf("   1. 访问位域比访问普通变量慢\n");
    printf("   2. 需要位操作（移位、掩码）\n");
    printf("   3. 可能引起内存访问不对齐\n");
    printf("   4. 编译器优化受限\n\n");
    
    printf("   优化建议：\n");
    printf("   1. 频繁访问的位域考虑使用普通变量\n");
    printf("   2. 将相关位域放在一起减少访问次数\n");
    printf("   3. 避免在性能关键代码中使用位域\n");
    printf("   4. 考虑使用位操作宏替代\n\n");
}

/*============================================================================
  8.6 位域的替代方案
============================================================================*/

void bitfield_alternatives(void) {
    printf("8. 位域的替代方案\n\n");
    
    /*
     * 8.1 使用位操作宏
     */
    printf("8.1 使用位操作宏（更可移植）\n\n");
    
    // 定义位位置
    #define FLAG_ACTIVE   0
    #define FLAG_VISIBLE  1
    #define FLAG_EDITABLE 2
    #define FLAG_LOCKED   3
    
    // 位操作宏
    #define SET_FLAG(flags, bit) ((flags) |= (1U << (bit)))
    #define CLEAR_FLAG(flags, bit) ((flags) &= ~(1U << (bit)))
    #define TOGGLE_FLAG(flags, bit) ((flags) ^= (1U << (bit)))
    #define CHECK_FLAG(flags, bit) (((flags) >> (bit)) & 1U)
    
    unsigned int flags = 0;
    
    printf("   位操作宏示例：\n");
    SET_FLAG(flags, FLAG_ACTIVE);
    SET_FLAG(flags, FLAG_EDITABLE);
    
    printf("   设置后：\n");
    printf("   ACTIVE: %s\n", CHECK_FLAG(flags, FLAG_ACTIVE) ? "是" : "否");
    printf("   VISIBLE: %s\n", CHECK_FLAG(flags, FLAG_VISIBLE) ? "是" : "否");
    printf("   EDITABLE: %s\n", CHECK_FLAG(flags, FLAG_EDITABLE) ? "是" : "否");
    
    CLEAR_FLAG(flags, FLAG_EDITABLE);
    printf("   清除EDITABLE后：%s\n", 
           CHECK_FLAG(flags, FLAG_EDITABLE) ? "是" : "否");
    printf("\n");
    
    /*
     * 8.2 使用位字段结构
     */
    printf("8.2 使用位字段结构（手动位操作）\n\n");
    
    // 32位标志字
    typedef union {
        uint32_t value;
        struct {
            uint32_t active    : 1;
            uint32_t visible   : 1;
            uint32_t editable  : 1;
            uint32_t locked    : 1;
            uint32_t priority  : 4;
            uint32_t type      : 8;
            uint32_t reserved  : 16;
        } bits;
    } FlagsUnion;
    
    FlagsUnion fu;
    fu.value = 0;
    fu.bits.active = 1;
    fu.bits.priority = 5;
    fu.bits.type = 10;
    
    printf("   联合位字段：\n");
    printf("   完整值：0x%08X\n", fu.value);
    printf("   位字段：active=%u, priority=%u, type=%u\n",
           fu.bits.active, fu.bits.priority, fu.bits.type);
    printf("\n");
    
    /*
     * 8.3 使用位集库
     */
    printf("8.3 实现简单的位集库\n\n");
    
    // 位集结构
    typedef struct {
        uint32_t *bits;
        size_t size;  // 位数
    } BitSet;
    
    // 位集操作函数
    BitSet* bitset_create(size_t num_bits) {
        BitSet *bs = malloc(sizeof(BitSet));
        size_t num_words = (num_bits + 31) / 32;
        bs->bits = calloc(num_words, sizeof(uint32_t));
        bs->size = num_bits;
        return bs;
    }
    
    void bitset_set(BitSet *bs, size_t pos) {
        if (pos < bs->size) {
            bs->bits[pos / 32] |= (1U << (pos % 32));
        }
    }
    
    void bitset_clear(BitSet *bs, size_t pos) {
        if (pos < bs->size) {
            bs->bits[pos / 32] &= ~(1U << (pos % 32));
        }
    }
    
    int bitset_test(const BitSet *bs, size_t pos) {
        if (pos >= bs->size) return 0;
        return (bs->bits[pos / 32] >> (pos % 32)) & 1U;
    }
    
    // 使用位集
    BitSet *bs = bitset_create(100);
    bitset_set(bs, 10);
    bitset_set(bs, 50);
    bitset_set(bs, 99);
    
    printf("   位集测试：\n");
    printf("   位10：%d\n", bitset_test(bs, 10));
    printf("   位50：%d\n", bitset_test(bs, 50));
    printf("   位99：%d\n", bitset_test(bs, 99));
    printf("   位20：%d（未设置）\n", bitset_test(bs, 20));
    
    // 清理
    free(bs->bits);
    free(bs);
    printf("\n");
    
    /*
     * 8.4 选择建议
     */
    printf("8.4 选择建议\n\n");
    
    printf("   使用位域当：\n");
    printf("   ✓ 需要直接映射硬件寄存器\n");
    printf("   ✓ 结构体布局需要精确控制\n");
    printf("   ✓ 代码只在特定平台运行\n");
    printf("   ✓ 内存极度受限\n\n");
    
    printf("   使用位操作宏当：\n");
    printf("   ✓ 需要更好的可移植性\n");
    printf("   ✓ 性能是关键考虑\n");
    printf("   ✓ 需要更灵活的操作\n");
    printf("   ✓ 跨平台开发\n\n");
    
    printf("   使用位集库当：\n");
    printf("   ✓ 需要动态大小的位集合\n");
    printf("   ✓ 需要高级位操作功能\n");
    printf("   ✓ 代码可读性和维护性重要\n\n");
}

/*============================================================================
  8.7 位域的实际案例
============================================================================*/

void bitfield_real_world_examples(void) {
    printf("9. 位域的实际案例\n\n");
    
    /*
     * 9.1 TCP协议头
     */
    printf("9.1 TCP协议头（简化版）\n\n");
    
    struct TCP_Header {
        unsigned short src_port;
        unsigned short dst_port;
        unsigned int seq_num;
        unsigned int ack_num;
        unsigned int data_offset : 4;
        unsigned int reserved : 3;
        unsigned int flags : 9;
        unsigned short window;
        unsigned short checksum;
        unsigned short urgent_ptr;
    } tcp_header;
    
    // 设置TCP标志位
    #define TCP_FLAG_FIN 0x001
    #define TCP_FLAG_SYN 0x002
    #define TCP_FLAG_RST 0x004
    #define TCP_FLAG_PSH 0x008
    #define TCP_FLAG_ACK 0x010
    #define TCP_FLAG_URG 0x020
    
    tcp_header.src_port = 80;
    tcp_header.dst_port = 12345;
    tcp_header.flags = TCP_FLAG_SYN | TCP_FLAG_ACK;
    tcp_header.window = 5840;
    
    printf("   TCP头部示例：\n");
    printf("   源端口：%u\n", tcp_header.src_port);
    printf("   目的端口：%u\n", tcp_header.dst_port);
    printf("   标志位：0x%03X\n", tcp_header.flags);
    printf("   SYN：%s\n", (tcp_header.flags & TCP_FLAG_SYN) ? "是" : "否");
    printf("   ACK：%s\n", (tcp_header.flags & TCP_FLAG_ACK) ? "是" : "否");
    printf("   窗口大小：%u\n", tcp_header.window);
    printf("\n");
    
    /*
     * 9.2 图形显示模式
     */
    printf("9.2 图形显示模式设置\n\n");
    
    struct VideoMode {
        unsigned int width : 12;      // 最大4096
        unsigned int height : 12;     // 最大4096
        unsigned int bpp : 4;         // 每像素位数（1-16）
        unsigned int refresh_rate : 6; // 刷新率（1-60）
        unsigned int interlaced : 1;  // 隔行扫描
        unsigned int stereo : 1;      // 立体显示
        unsigned int : 0;             // 对齐
    } video_mode;
    
    // 设置高清模式
    video_mode.width = 1920;
    video_mode.height = 1080;
    video_mode.bpp = 32;
    video_mode.refresh_rate = 60;
    video_mode.interlaced = 0;
    video_mode.stereo = 0;
    
    printf("   视频显示模式：\n");
    printf("   分辨率：%u x %u\n", video_mode.width, video_mode.height);
    printf("   颜色深度：%u位\n", video_mode.bpp);
    printf("   刷新率：%u Hz\n", video_mode.refresh_rate);
    printf("   扫描方式：%s\n", video_mode.interlaced ? "隔行" : "逐行");
    printf("   立体显示：%s\n", video_mode.stereo ? "是" : "否");
    printf("\n");
    
    /*
     * 9.3 传感器数据压缩
     */
    printf("9.3 传感器数据压缩存储\n\n");
    
    struct SensorData {
        unsigned int temperature : 10;   // -40°C 到 85°C，精度0.125°C
        unsigned int humidity : 9;       // 0% 到 100%，精度0.2%
        unsigned int pressure : 12;      // 300hPa 到 1100hPa，精度0.1hPa
        unsigned int light : 8;          // 0 到 255，单位lux
        unsigned int battery : 5;        // 0 到 31，单位0.1V
    } sensor;
    
    // 编码传感器数据
    sensor.temperature = 250;  // 25°C（偏移-40，精度0.125）
    sensor.humidity = 500;     // 50%
    sensor.pressure = 10130;   // 1013.0 hPa
    sensor.light = 128;
    sensor.battery = 30;       // 3.0V
    
    printf("   传感器数据：\n");
    printf("   温度：%.1f°C\n", -40.0 + sensor.temperature * 0.125);
    printf("   湿度：%.1f%%\n", sensor.humidity * 0.2);
    printf("   气压：%.1f hPa\n", 300.0 + sensor.pressure * 0.1);
    printf("   光照：%u lux\n", sensor.light);
    printf("   电量：%.1f V\n", sensor.battery * 0.1);
    printf("   数据大小：%zu字节（原需8-12字节）\n", sizeof(struct SensorData));
    printf("\n");
    
    /*
     * 9.4 权限管理系统
     */
    printf("9.4 权限管理系统\n\n");
    
    struct UserPermissions {
        unsigned int can_read : 1;
        unsigned int can_write : 1;
        unsigned int can_execute : 1;
        unsigned int can_delete : 1;
        unsigned int can_share : 1;
        unsigned int can_admin : 1;
        unsigned int user_level : 3;  // 0-7级
        unsigned int group_id : 8;    // 0-255组
        unsigned int : 0;             // 对齐
    } permissions;
    
    // 管理员权限
    permissions.can_read = 1;
    permissions.can_write = 1;
    permissions.can_execute = 1;
    permissions.can_delete = 1;
    permissions.can_share = 1;
    permissions.can_admin = 1;
    permissions.user_level = 7;
    permissions.group_id = 1;
    
    printf("   用户权限设置：\n");
    printf("   读取：%s\n", permissions.can_read ? "允许" : "拒绝");
    printf("   写入：%s\n", permissions.can_write ? "允许" : "拒绝");
    printf("   执行：%s\n", permissions.can_execute ? "允许" : "拒绝");
    printf("   删除：%s\n", permissions.can_delete ? "允许" : "拒绝");
    printf("   共享：%s\n", permissions.can_share ? "允许" : "拒绝");
    printf("   管理：%s\n", permissions.can_admin ? "允许" : "拒绝");
    printf("   用户等级：%u级\n", permissions.user_level);
    printf("   所属组：%u组\n", permissions.group_id);
    printf("\n");
}

/*============================================================================
  8.8 位域总结
============================================================================*/

void bitfield_summary(void) {
    printf("10. 位域总结\n\n");
    
    printf("   核心概念：\n");
    printf("   - 在结构体中按位分配成员空间\n");
    printf("   - 用于节省内存和精确控制数据布局\n");
    printf("   - 适用于硬件映射和协议处理\n\n");
    
    printf("   主要优势：\n");
    printf("   1. 内存效率高\n");
    printf("   2. 硬件寄存器直接映射\n");
    printf("   3. 协议字段精确对齐\n");
    printf("   4. 减少内存碎片\n\n");
    
    printf("   主要缺点：\n");
    printf("   1. 可移植性差\n");
    printf("   2. 访问速度较慢\n");
    printf("   3. 语法复杂\n");
    printf("   4. 调试困难\n\n");
    
    printf("   适用场景：\n");
    printf("   1. 嵌入式系统硬件寄存器\n");
    printf("   2. 网络协议数据包\n");
    printf("   3. 内存受限环境\n");
    printf("   4. 需要精确位布局的场景\n\n");
    
    printf("   最佳实践：\n");
    printf("   1. 使用无符号类型避免符号扩展\n");
    printf("   2. 添加注释说明位域布局\n");
    printf("   3. 考虑可移植性需求\n");
    printf("   4. 测试溢出行为\n");
    printf("   5. 使用联合方便整体访问\n\n");
    
    printf("   替代方案：\n");
    printf("   1. 位操作宏（可移植性好）\n");
    printf("   2. 手动位操作函数\n");
    printf("   3. 位集库\n\n");
    
    printf("================================================\n");
    printf("位域部分学习完成！\n");
    printf("位域是C语言的高级特性，\n");
    printf("合理使用能在特定场景下带来巨大优势。\n");
    printf("================================================\n");
}
