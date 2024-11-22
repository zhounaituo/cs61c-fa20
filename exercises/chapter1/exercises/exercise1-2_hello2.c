/*
 * Exercise 1-1: Run the "hello, world" program on your system. 
 * Experiment with leaving out parts of the program, to see what error messages you get.
 *
 * 实验过程与结果：
 * 1. 完整程序运行：
 *    编译警告：unknown escape sequence: '\c'
 *    运行结果：正确输出 "hello, worldc"
 */

#include <stdio.h>

int main()
{
    printf("hello, world\c");
    return 0;
}

