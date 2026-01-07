🎯 C 语言编程入门 - Steve-1219 的学习仓库
https://img.shields.io/github/last-commit/Steve-1219/c-learning
https://img.shields.io/github/repo-size/Steve-1219/c-learning
https://img.shields.io/github/license/Steve-1219/c-learning
https://img.shields.io/github/stars/Steve-1219/c-learning?style=social

一个完整的 C 语言学习项目，包含教程、示例、练习和实战项目。由 Steve-1219 创建和维护。

✨ 项目亮点
✅ 系统学习 - 从零开始的完整学习路径

✅ 丰富示例 - 100+ 个实用代码示例

✅ 互动练习 - 分级练习题和答案

✅ 实战项目 - 从简单到复杂的完整项目

✅ 详细文档 - 速查表、常见错误、学习资源

🚀 快速开始（5分钟内）
1. 获取代码
bash

复制

下载
# 克隆项目
git clone https://github.com/Steve-1219/c-learning.git

# 进入项目目录
cd c-learning
2. 运行第一个程序
bash

复制

下载
# 进入基础示例目录
cd src/basics

# 编译运行 Hello World
gcc hello-world.c -o hello
./hello
3. 查看输出
text

复制

下载
Hello, C World!
Welcome to Steve-1219's C Learning Project!
📁 项目结构概览
text

复制

下载
c-learning/
├── 📄 README.md                    # 你现在阅读的文件
├── 📘 tutorial.md                  # 📚 完整教程文档
├── ⚙️ setup-guide.md              # 🔧 环境配置指南
├── 💻 examples.md                  # 👨‍💻 代码示例索引
├── 🧪 practice-exercises.md       # 📝 练习题集
├── 🚀 projects.md                  # 🎮 项目实战指南
│
├── 📂 src/                         # 💾 源代码目录
│   ├── basics/                    # 🅰️ 基础语法示例
│   │   ├── hello-world.c
│   │   ├── variables.c
│   │   ├── operators.c
│   │   └── control-flow.c
│   ├── functions/                 # 🔢 函数相关
│   ├── pointers/                  # 🎯 指针专题
│   └── advanced/                  # ⚡ 高级主题
│
├── 📂 projects/                    # 🛠️ 实战项目
│   ├── calculator/               # 🧮 计算器程序
│   ├── student-system/           # 🎓 学生管理系统
│   └── file-manager/             # 📁 文件管理器
│
├── 📂 exercises/                   # 📚 练习题
│   ├── beginner/                 # 🟢 初级练习
│   ├── intermediate/             # 🟡 中级练习
│   └── solutions/                # 📋 参考答案
│
├── 📂 docs/                        # 📖 文档资料
│   ├── c-cheatsheet.md           # 📋 C语言速查表
│   ├── common-errors.md          # ⚠️ 常见错误
│   └── resources.md              # 🔗 学习资源
│
├── 🔧 .gitignore                  # Git忽略文件
└── 📄 LICENSE                     # 许可证文件
📚 学习路线图
🟢 第一阶段：基础入门（第1-2周）
✅ 环境配置与第一个程序

✅ 变量、数据类型、运算符

✅ 输入输出函数

✅ 条件语句与循环

🟡 第二阶段：核心概念（第3-4周）
🔄 函数与作用域

🔄 数组与字符串

🔄 指针基础

🔄 结构体与联合体

🔵 第三阶段：高级主题（第5-6周）
⏳ 动态内存管理

⏳ 文件操作

⏳ 预处理器

⏳ 多文件编程

🟣 第四阶段：项目实战（第7-8周）
⏳ 综合项目开发

⏳ 代码优化与调试

⏳ 项目文档编写

💡 特色示例
1. 基础输入输出
c

复制

下载
// src/basics/io-example.c
#include <stdio.h>

int main() {
    char name[50];
    int age;
    
    printf("请输入你的名字: ");
    scanf("%s", name);
    
    printf("请输入年龄: ");
    scanf("%d", &age);
    
    printf("\n👋 你好 %s！\n", name);
    printf("🎂 你今年 %d 岁\n", age);
    
    return 0;
}
2. 指针理解
c

复制

下载
// src/pointers/basic-pointer.c
#include <stdio.h>

int main() {
    int number = 42;
    int *ptr = &number;
    
    printf("变量值: %d\n", number);
    printf("变量地址: %p\n", &number);
    printf("指针值: %p\n", ptr);
    printf("指针指向的值: %d\n", *ptr);
    
    return 0;
}
3. 文件操作示例
c

复制

下载
// src/advanced/file-example.c
#include <stdio.h>

int main() {
    FILE *file;
    
    // 写入文件
    file = fopen("data.txt", "w");
    if (file != NULL) {
        fprintf(file, "C语言学习笔记\n");
        fprintf(file, "作者: Steve-1219\n");
        fclose(file);
    }
    
    // 读取文件
    char line[100];
    file = fopen("data.txt", "r");
    if (file != NULL) {
        printf("文件内容:\n");
        while (fgets(line, sizeof(line), file)) {
            printf("%s", line);
        }
        fclose(file);
    }
    
    return 0;
}
4. 九九乘法表
c

复制

下载
// src/basics/multiplication-table.c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d×%d=%-2d ", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}
