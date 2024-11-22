/**
 * @file exercise1-9_copy_fb.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-22
 * 
 * @copyright Copyright (c) 2024
 * 
 * Exercise 1-9. Write a program 
 * to copy its input to its output, replacing each
 */

#include <stdio.h>

int main()
{
	int c, nb;
	
	c = nb = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			++nb;
		else 
			nb = 0;
		
		if (nb > 1 && c == ' ')
			continue;
		
        printf("%c", c);
	}
	
	return 0;
}
