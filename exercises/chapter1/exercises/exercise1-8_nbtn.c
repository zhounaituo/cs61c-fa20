/**
 * @file exercise1-8.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-22
 * 
 * @copyright Copyright (c) 2024
 * 
 * Exercise 1-8. Write a program to count blanks, tabs, and newlines.
 */

#include <stdio.h>

int main()
{
	int c;
	int nb = 0, nt = 0, nl = 0; 
	
	while ((c = getchar()) != EOF)
		if (c == ' ')
			++nb;
		else if (c == '\t')
			++nt;
		else if (c == '\n')
			++nl;
	printf("Blanks: %d, Tabs: %d, Newlines: %d\n", nb, nt, nl);
}