/**
 * @file exercise1-12_word_per_line.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-22
 * 
 * @copyright Copyright (c) 2024
 * 
 * Exercise 1-12. Write a program that prints its input 
 * one word per line.
 */

#include <stdio.h>

#define IN  1	/* inside of a word */
#define OUT 0	/* outside of a word */

int main()
{
	int c, state;
	
	state = OUT;
	c = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\b' || c == '\t')
			state = OUT;
		else if (state == OUT) 
			state = IN;
		
		if (state)
			printf("%c", c);
		else 
			printf("\n");
	}
	return 0;
}
