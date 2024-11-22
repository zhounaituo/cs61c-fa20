/**
 * @file exercise1-10_copy_visible.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-22
 * 
 * @copyright Copyright (c) 2024
 * 
 * Exercise 1-10. Write a program to copy its input to its 
 * output, replacing each tab by \t, each backspace by \b, 
 * and each backslash by \\. This makes tabs and backspaces 
 * visible in an unambiguous way.
 */

#include <stdio.h>

int main()
{
	int c;
	
	c = 0;
	while ((c = getchar()) != EOF)
	{
		switch (c)
		{
			case '\t':
				printf("\\t");
                break;
			case '\b':
				printf("\\b");
                break;
			case '\\':
				printf("\\\\");
                break;
			default:
				printf("%c", c);
                break;
		}
	}
    printf("%d", ' ' == '\b');
    return 0;
}
