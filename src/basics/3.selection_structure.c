#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>      // 字符处理函数
#include <stdlib.h>     // system函数

/*================================================================
  第一部分：选择结构概述
  说明：选择结构用于根据条件决定执行不同的代码块
================================================================*/

void part1_overview(void) {
    printf("\n");
    printf("================================================\n");
    printf("第一部分：选择结构概述\n");
    printf("================================================\n\n");
    
    printf("选择结构（Selection Structure）也称为分支结构\n");
    printf("作用：根据条件判断结果，选择执行不同的代码路径\n\n");
    
    printf("C语言中的选择结构语句：\n");
    printf("1. if语句          - 简单的条件判断\n");
    printf("2. if-else语句     - 二选一分支\n");
    printf("3. if-else if-else语句 - 多选一分支\n");
    printf("4. switch-case语句 - 多分支选择\n");
    printf("5. 条件运算符(?:)   - 简单的二选一表达式\n\n");
    
    printf("选择结构的应用场景：\n");
    printf("- 用户输入验证\n");
    printf("- 成绩等级判断\n");
    printf("- 菜单选择\n");
    printf("- 错误处理\n");
    printf("- 权限控制\n\n");
}

/*================================================================
  第二部分：if语句详解
  说明：if语句是最基本的选择结构
================================================================*/

void part2_if_statement(void) {
    printf("\n");
    printf("================================================\n");
    printf("第二部分：if语句详解\n");
    printf("================================================\n\n");
    
    /*
     * 1. 基本的if语句
     * 语法：if (条件) { 语句块; }
     * 执行：当条件为真（非零）时执行语句块
     */
    printf("1. 基本的if语句\n");
    printf("   语法：if (条件) { 语句块; }\n");
    printf("   条件为真（非零）时执行语句块\n\n");
    
    printf("   示例1：判断一个数是否为正数\n");
    int num1 = 10;
    if (num1 > 0) {
        printf("   %d是正数\n", num1);
    }
    printf("\n");
    
    printf("   示例2：判断一个数是否为偶数\n");
    int num2 = 8;
    if (num2 % 2 == 0) {
        printf("   %d是偶数\n", num2);
    }
    printf("\n");
    
    /*
     * 2. if-else语句
     * 语法：if (条件) { 语句块1; } else { 语句块2; }
     * 执行：条件为真执行语句块1，否则执行语句块2
     */
    printf("2. if-else语句（二选一）\n");
    printf("   语法：if (条件) { 语句块1; } else { 语句块2; }\n");
    printf("   条件为真执行语句块1，否则执行语句块2\n\n");
    
    printf("   示例1：判断一个数的正负\n");
    int num3 = -5;
    if (num3 > 0) {
        printf("   %d是正数\n", num3);
    } else {
        printf("   %d不是正数（可能是负数或零）\n", num3);
    }
    printf("\n");
    
    printf("   示例2：判断成绩是否及格\n");
    int score1 = 75;
    if (score1 >= 60) {
        printf("   成绩%d分：及格\n", score1);
    } else {
        printf("   成绩%d分：不及格\n", score1);
    }
    printf("\n");
    
    /*
     * 3. 多个if-else if-else语句（多分支）
     * 语法：if (条件1) { ... } else if (条件2) { ... } else { ... }
     * 执行：从上到下检查条件，第一个为真的条件对应的语句块被执行
     */
    printf("3. if-else if-else语句（多分支）\n");
    printf("   语法：if (条件1) { ... } else if (条件2) { ... } else { ... }\n");
    printf("   从上到下检查条件，执行第一个为真的条件对应的语句块\n\n");
    
    printf("   示例1：成绩等级判断\n");
    int score2 = 85;
    printf("   成绩：%d分\n", score2);
    
    if (score2 >= 90) {
        printf("   等级：优秀\n");
    } else if (score2 >= 80) {
        printf("   等级：良好\n");
    } else if (score2 >= 70) {
        printf("   等级：中等\n");
    } else if (score2 >= 60) {
        printf("   等级：及格\n");
    } else {
        printf("   等级：不及格\n");
    }
    printf("\n");
    
    printf("   示例2：根据年龄分类\n");
    int age = 25;
    printf("   年龄：%d岁\n", age);
    
    if (age < 0) {
        printf("   年龄无效\n");
    } else if (age <= 12) {
        printf("   儿童\n");
    } else if (age <= 17) {
        printf("   青少年\n");
    } else if (age <= 35) {
        printf("   青年\n");
    } else if (age <= 60) {
        printf("   中年\n");
    } else {
        printf("   老年\n");
    }
    printf("\n");
    
    /*
     * 4. 嵌套if语句
     * 说明：if语句内部可以包含另一个if语句
     */
    printf("4. 嵌套if语句\n");
    printf("   在一个if语句内部包含另一个if语句\n\n");
    
    printf("   示例：判断闰年\n");
    printf("   闰年规则：\n");
    printf("   1. 能被4整除但不能被100整除\n");
    printf("   2. 能被400整除\n");
    
    int year = 2024;
    printf("   年份：%d\n", year);
    
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("   %d年是闰年（能被400整除）\n", year);
            } else {
                printf("   %d年不是闰年（能被100整除但不能被400整除）\n", year);
            }
        } else {
            printf("   %d年是闰年（能被4整除但不能被100整除）\n", year);
        }
    } else {
        printf("   %d年不是闰年（不能被4整除）\n", year);
    }
    printf("\n");
    
    /*
     * 5. if语句的常见错误
     */
    printf("5. if语句的常见错误\n\n");
    
    printf("   错误1：误用赋值运算符=代替关系运算符==\n");
    int x = 5;
    printf("   if (x = 10) { ... }  // 错误：这是赋值，不是比较\n");
    printf("   应该写成：if (x == 10) { ... }\n\n");
    
    printf("   错误2：忘记大括号（单条语句时可以省略，但建议始终使用）\n");
    printf("   if (x > 0)\n");
    printf("       printf(\"正数\\n\");\n");
    printf("       printf(\"这是正数\\n\");  // 这条语句总是执行！\n\n");
    
    printf("   错误3：不必要的复杂条件\n");
    printf("   if (x > 0 && x < 10 || x == 5)  // 可读性差\n");
    printf("   应该：if ((x > 0 && x < 10) || x == 5)\n\n");
}

/*================================================================
  第三部分：switch-case语句详解
  说明：switch-case用于多分支选择，比多个if-else更清晰
================================================================*/

void part3_switch_statement(void) {
    printf("\n");
    printf("================================================\n");
    printf("第三部分：switch-case语句详解\n");
    printf("================================================\n\n");
    
    /*
     * 1. switch-case语句基本语法
     */
    printf("1. switch-case语句基本语法\n");
    printf("   语法：\n");
    printf("   switch (表达式) {\n");
    printf("       case 常量1: 语句块1; break;\n");
    printf("       case 常量2: 语句块2; break;\n");
    printf("       ...\n");
    printf("       default: 默认语句块;\n");
    printf("   }\n\n");
    
    printf("   执行流程：\n");
    printf("   1. 计算表达式的值\n");
    printf("   2. 与各个case的常量值比较\n");
    printf("   3. 找到匹配的case，执行对应的语句块\n");
    printf("   4. 遇到break跳出switch，否则继续执行后面的case\n");
    printf("   5. 没有匹配的case时执行default（可选）\n\n");
    
    /*
     * 2. switch-case基本示例
     */
    printf("2. switch-case基本示例\n\n");
    
    printf("   示例1：星期几判断\n");
    int day = 3;
    printf("   数字：%d\n", day);
    
    switch (day) {
        case 1:
            printf("   星期一\n");
            break;
        case 2:
            printf("   星期二\n");
            break;
        case 3:
            printf("   星期三\n");
            break;
        case 4:
            printf("   星期四\n");
            break;
        case 5:
            printf("   星期五\n");
            break;
        case 6:
            printf("   星期六\n");
            break;
        case 7:
            printf("   星期日\n");
            break;
        default:
            printf("   输入错误！请输入1-7的数字\n");
    }
    printf("\n");
    
    /*
     * 3. switch-case的多个case共用代码块
     */
    printf("3. 多个case共用代码块\n");
    printf("   多个case可以共享相同的代码，省略break实现\n\n");
    
    printf("   示例：成绩等级判断\n");
    char grade = 'B';
    printf("   等级：%c\n", grade);
    
    switch (grade) {
        case 'A':
        case 'a':
            printf("   优秀\n");
            break;
        case 'B':
        case 'b':
            printf("   良好\n");
            break;
        case 'C':
        case 'c':
            printf("   中等\n");
            break;
        case 'D':
        case 'd':
            printf("   及格\n");
            break;
        case 'F':
        case 'f':
            printf("   不及格\n");
            break;
        default:
            printf("   无效的等级\n");
    }
    printf("\n");
    
    /*
     * 4. switch-case与if-else的比较
     */
    printf("4. switch-case与if-else的比较\n\n");
    
    printf("   switch-case的优势：\n");
    printf("   - 多分支时代码更清晰易读\n");
    printf("   - 执行效率可能更高（跳转表）\n");
    printf("   - 适合离散值的判断\n\n");
    
    printf("   if-else的优势：\n");
    printf("   - 可以处理范围判断（如 x > 10）\n");
    printf("   - 可以处理复杂的逻辑表达式\n");
    printf("   - 更灵活，没有类型限制\n\n");
    
    printf("   选择建议：\n");
    printf("   - 判断单个变量的离散值：使用switch-case\n");
    printf("   - 范围判断或复杂逻辑：使用if-else\n");
    printf("   - 分支较少（2-3个）：使用if-else\n");
    printf("   - 分支较多（4个以上）：考虑switch-case\n\n");
    
    /*
     * 5. switch-case的注意事项
     */
    printf("5. switch-case的注意事项\n\n");
    
    printf("   注意1：case后面必须是整型常量表达式\n");
    printf("   case 1+2:   // 正确，常量表达式\n");
    printf("   case x:     // 错误，x是变量\n");
    printf("   case 1.5:   // 错误，必须是整数\n\n");
    
    printf("   注意2：不要忘记break语句\n");
    printf("   如果没有break，会继续执行下一个case\n");
    printf("   （有时故意省略break实现多个case共享代码）\n\n");
    
    printf("   注意3：default子句是可选的\n");
    printf("   但建议总是包含default，处理意外情况\n\n");
    
    printf("   注意4：switch只能判断相等，不能判断范围\n");
    printf("   switch (score) {\n");
    printf("       case > 90:  // 错误！不能这样写\n");
    printf("       ...\n");
    printf("   }\n\n");
}

/*================================================================
  第四部分：条件运算符详解
  说明：条件运算符(?:)是三目运算符，用于简单的条件判断
================================================================*/

void part4_conditional_operator(void) {
    printf("\n");
    printf("================================================\n");
    printf("第四部分：条件运算符(?:)详解\n");
    printf("================================================\n\n");
    
    /*
     * 1. 条件运算符基本语法
     */
    printf("1. 条件运算符基本语法\n");
    printf("   语法：条件 ? 表达式1 : 表达式2\n");
    printf("   执行：条件为真时返回表达式1的值，否则返回表达式2的值\n\n");
    
    printf("   等价于：\n");
    printf("   if (条件) {\n");
    printf("       结果 = 表达式1;\n");
    printf("   } else {\n");
    printf("       结果 = 表达式2;\n");
    printf("   }\n\n");
    
    /*
     * 2. 条件运算符示例
     */
    printf("2. 条件运算符示例\n\n");
    
    printf("   示例1：求两个数的最大值\n");
    int a = 10, b = 20;
    int max = (a > b) ? a : b;
    printf("   a = %d, b = %d\n", a, b);
    printf("   最大值：max = (a > b) ? a : b = %d\n\n", max);
    
    printf("   示例2：判断奇偶数\n");
    int num = 15;
    printf("   数字：%d\n", num);
    printf("   结果：%s\n", (num % 2 == 0) ? "偶数" : "奇数");
    printf("\n");
    
    printf("   示例3：成绩是否及格\n");
    int score = 75;
    printf("   成绩：%d分\n", score);
    printf("   状态：%s\n", (score >= 60) ? "及格" : "不及格");
    printf("\n");
    
    /*
     * 3. 嵌套条件运算符
     */
    printf("3. 嵌套条件运算符\n");
    printf("   条件运算符可以嵌套，但会降低可读性\n\n");
    
    printf("   示例：成绩等级判断\n");
    int score2 = 85;
    char *grade = (score2 >= 90) ? "优秀" :
                  (score2 >= 80) ? "良好" :
                  (score2 >= 70) ? "中等" :
                  (score2 >= 60) ? "及格" : "不及格";
    
    printf("   成绩：%d分\n", score2);
    printf("   等级：%s\n", grade);
    printf("\n");
    
    /*
     * 4. 条件运算符的优缺点
     */
    printf("4. 条件运算符的优缺点\n\n");
    
    printf("   优点：\n");
    printf("   - 简洁，一行代码完成简单的条件判断\n");
    printf("   - 可以作为表达式的一部分\n");
    printf("   - 在某些情况下比if-else更清晰\n\n");
    
    printf("   缺点：\n");
    printf("   - 复杂的嵌套会降低可读性\n");
    printf("   - 只能处理简单的二选一情况\n");
    printf("   - 调试比if-else困难\n\n");
    
    printf("   使用建议：\n");
    printf("   - 简单的条件赋值：使用条件运算符\n");
    printf("   - 复杂逻辑或需要执行多条语句：使用if-else\n");
    printf("   - 避免多层嵌套的条件运算符\n\n");
}

/*================================================================
  第五部分：选择结构应用实例
  说明：通过实际例子展示选择结构的应用
================================================================*/

void part5_practical_examples(void) {
    printf("\n");
    printf("================================================\n");
    printf("第五部分：选择结构应用实例\n");
    printf("================================================\n\n");
    
    /*
     * 1. 计算器程序
     */
    printf("1. 简单计算器程序\n\n");
    
    char operator = '+';
    double num1 = 10.5, num2 = 5.2;
    double result;
    
    printf("   计算：%.2f %c %.2f\n", num1, operator, num2);
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("   结果：%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("   结果：%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("   结果：%.2f × %.2f = %.2f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("   结果：%.2f ÷ %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("   错误：除数不能为0！\n");
            }
            break;
        default:
            printf("   错误：不支持的运算符！\n");
    }
    printf("\n");
    
    /*
     * 2. 根据月份判断季节
     */
    printf("2. 根据月份判断季节\n\n");
    
    int month = 7;
    printf("   月份：%d月\n", month);
    
    if (month >= 1 && month <= 12) {
        if (month >= 3 && month <= 5) {
            printf("   季节：春季\n");
        } else if (month >= 6 && month <= 8) {
            printf("   季节：夏季\n");
        } else if (month >= 9 && month <= 11) {
            printf("   季节：秋季\n");
        } else {
            printf("   季节：冬季\n");
        }
    } else {
        printf("   错误：月份必须在1-12之间！\n");
    }
    printf("\n");
    
    /*
     * 3. 用户登录验证
     */
    printf("3. 简单的用户登录验证\n\n");
    
    char username[] = "admin";
    char password[] = "123456";
    
    char input_username[] = "admin";
    char input_password[] = "123456";
    
    printf("   用户名：%s\n", input_username);
    printf("   密码：%s\n", input_password);
    
    // 比较用户名和密码
    int username_match = 1;  // 简化：假设用户名匹配
    int password_match = 1;  // 简化：假设密码匹配
    
    if (username_match && password_match) {
        printf("   登录成功！\n");
        
        // 判断用户权限
        int user_type = 2;  // 1-普通用户，2-管理员
        
        if (user_type == 1) {
            printf("   欢迎，普通用户！\n");
        } else if (user_type == 2) {
            printf("   欢迎，管理员！\n");
        } else {
            printf("   未知用户类型\n");
        }
    } else if (!username_match) {
        printf("   错误：用户名不存在！\n");
    } else {
        printf("   错误：密码不正确！\n");
    }
    printf("\n");
    
    /*
     * 4. 三角形类型判断
     */
    printf("4. 三角形类型判断\n\n");
    
    double side1 = 3.0, side2 = 4.0, side3 = 5.0;
    printf("   三角形三边：%.1f, %.1f, %.1f\n", side1, side2, side3);
    
    // 检查是否能构成三角形
    if (side1 + side2 > side3 && 
        side1 + side3 > side2 && 
        side2 + side3 > side1) {
        
        // 判断三角形类型
        if (side1 == side2 && side2 == side3) {
            printf("   类型：等边三角形\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("   类型：等腰三角形\n");
        } else {
            // 判断是否为直角三角形
            double a = side1, b = side2, c = side3;
            // 确保c是最大边
            if (a > b && a > c) {
                double temp = a; a = c; c = temp;
            } else if (b > a && b > c) {
                double temp = b; b = c; c = temp;
            }
            
            // 使用勾股定理判断
            if (a*a + b*b == c*c) {
                printf("   类型：直角三角形\n");
            } else {
                printf("   类型：一般三角形\n");
            }
        }
    } else {
        printf("   错误：这三条边不能构成三角形！\n");
    }
    printf("\n");
    
    /*
     * 5. 菜单选择程序
     */
    printf("5. 菜单选择程序\n\n");
    
    int choice = 2;
    printf("   请选择操作：\n");
    printf("   1. 添加记录\n");
    printf("   2. 查询记录\n");
    printf("   3. 修改记录\n");
    printf("   4. 删除记录\n");
    printf("   5. 退出系统\n");
    printf("   当前选择：%d\n\n", choice);
    
    switch (choice) {
        case 1:
            printf("   执行：添加记录操作\n");
            // 添加记录的代码
            break;
        case 2:
            printf("   执行：查询记录操作\n");
            // 查询记录的代码
            break;
        case 3:
            printf("   执行：修改记录操作\n");
            // 修改记录的代码
            break;
        case 4:
            printf("   执行：删除记录操作\n");
            // 删除记录的代码
            break;
        case 5:
            printf("   执行：退出系统\n");
            // 退出系统的代码
            break;
        default:
            printf("   错误：无效的选择！\n");
    }
    printf("\n");
}

/*================================================================
  第六部分：选择结构编程技巧
  说明：编写高质量选择结构的技巧和建议
================================================================*/

void part6_programming_tips(void) {
    printf("\n");
    printf("================================================\n");
    printf("第六部分：选择结构编程技巧\n");
    printf("================================================\n\n");
    
    printf("1. 使用适当的选择结构\n");
    printf("   - 简单的二选一：if-else\n");
    printf("   - 多分支（离散值）：switch-case\n");
    printf("   - 复杂条件：if-else if-else\n");
    printf("   - 简单的条件赋值：条件运算符\n\n");
    
    printf("2. 保持条件简单清晰\n");
    printf("   - 避免复杂的嵌套条件\n");
    printf("   - 使用变量存储中间结果\n");
    printf("   - 使用括号明确优先级\n\n");
    
    printf("   不好的写法：\n");
    printf("   if (x > 0 && y > 0 || z == 0 && !flag) { ... }\n\n");
    
    printf("   好的写法：\n");
    printf("   bool condition1 = (x > 0) && (y > 0);\n");
    printf("   bool condition2 = (z == 0) && !flag;\n");
    printf("   if (condition1 || condition2) { ... }\n\n");
    
    printf("3. 处理所有可能的情况\n");
    printf("   - 总是考虑else或default情况\n");
    printf("   - 检查边界条件\n");
    printf("   - 处理异常输入\n\n");
    
    printf("4. 优化条件判断顺序\n");
    printf("   - 把最常见的情况放在前面\n");
    printf("   - 把简单的条件放在前面（短路求值）\n");
    printf("   - 减少不必要的判断\n\n");
    
    printf("   优化前：\n");
    printf("   if (is_valid(x) && x > 100) { ... }\n");
    printf("   // 如果x无效，仍然会调用is_valid函数\n\n");
    
    printf("   优化后：\n");
    printf("   if (x > 100 && is_valid(x)) { ... }\n");
    printf("   // 如果x <= 100，不会调用is_valid函数\n\n");
    
    printf("5. 使用枚举提高可读性\n");
    printf("   - 用枚举代替魔法数字\n");
    printf("   - 使代码更易理解和维护\n\n");
    
    printf("   不好的写法：\n");
    printf("   if (status == 1) { ... }\n");
    printf("   else if (status == 2) { ... }\n\n");
    
    printf("   好的写法：\n");
    printf("   enum Status { IDLE = 1, RUNNING, PAUSED };\n");
    printf("   if (status == IDLE) { ... }\n");
    printf("   else if (status == RUNNING) { ... }\n\n");
    
    printf("6. 避免深层嵌套\n");
    printf("   - 嵌套过深会降低可读性\n");
    printf("   - 使用早期返回减少嵌套\n");
    printf("   - 重构复杂条件\n\n");
    
    printf("   深层嵌套（不好）：\n");
    printf("   if (condition1) {\n");
    printf("       if (condition2) {\n");
    printf("           if (condition3) {\n");
    printf("               // 真正的逻辑\n");
    printf("           }\n");
    printf("       }\n");
    printf("   }\n\n");
    
    printf("   早期返回（好）：\n");
    printf("   if (!condition1) return;\n");
    printf("   if (!condition2) return;\n");
    printf("   if (!condition3) return;\n");
    printf("   // 真正的逻辑\n\n");
    
    printf("7. 测试所有分支\n");
    printf("   - 编写测试用例覆盖所有分支\n");
    printf("   - 特别注意边界条件\n");
    printf("   - 测试异常情况\n\n");
}
