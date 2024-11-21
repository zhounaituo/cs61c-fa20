/*
 * Exercise 1-1: Run the "hello, world" program on your system. 
 * Experiment with leaving out parts of the program, to see what error messages you get.
 *
 * 实验过程与结果：
 * 1. 完整程序运行：
 *    编译警告：return type defaults to 'int' [-Wimplicit-in]
 *    运行结果：正确输出 "hello, world"
 * 
 * 2. 实验过程：
 *    - 删除 #include <stdio.h>：编译错误，printf未定义
 *    - 删除 main()：编译错误，缺少程序入口点
 *    - 删除引号：编译错误，语法错误
 *    - 删除分号：编译错误，缺少语句终止符
 * 
 * 结论：
 * 1. C程序的基本结构都是必要的
 * 2. 编译器会给出有用的错误提示
 * 3. main函数最好明确指定返回类型为int
 */

#include <stdio.h>

int main()
{
    printf("hello, world\n");
    return 0;
}

