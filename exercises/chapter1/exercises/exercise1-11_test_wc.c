/**
 * @file exercise1-11_test_wc.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-22
 * 
 * @copyright Copyright (c) 2024
 * 
 * Exercise 1-11. How would you test the word-count program?
 * What kind of input is likely to uncover the most bugs if 
 * there are any?
 * 
 * 实验结果：
 * 1.如何测试程序？
 *    a.使用管道工具：cc exercise1-11_test_wc.c && ./a.out < tt 
 * 2.什么情况下程序容易出错？
 *    a.输入的文件不存在
 *    b.输入的文件格式不正确，比如 `I'm` 可能会被识别为三个单词
 */