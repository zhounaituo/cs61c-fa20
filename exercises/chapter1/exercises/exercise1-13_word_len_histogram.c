/**
 * @file exercise1-13_word_len.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-23
 * 
 * @copyright Copyright (c) 2024
 * 
 * Exercise 1-13. Write a program to print a histogram of 
 * the lengths of words in its input. It is easy to draw the 
 * histogram with the bars horizontal; a vertical orientation
 * is more challenging.
 */

#include <stdio.h>

#define MAXLEN 20	/* length of words */
#define SIGNAL '*'	/* signal of histogram */
#define IN     1	/* inside of word */
#define OUT    0	/* outside of word */

int isalphabet(char c);
void tohistogram(int *arr, int len);

int main()
{
	int c, i, nl, state;
	int nlen[MAXLEN];

	c = nl = 0;
	state = OUT;
	for (i = 0; i < MAXLEN; ++i)
		nlen[i] = 0;
	
	while ((c = getchar()) != EOF)
		if (isalphabet(c))
			++nl;
		else 
		{
			nlen[nl-1]++;
			nl = 0;
		}

	tohistogram(nlen, MAXLEN);
	return 0;
}

int isalphabet(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

void tohistogram(int *arr, int len)
{
	int i, j;
	for (i = 0; i < len; ++i)
	{
		if (arr[i] == 0)
			continue;
		printf("%d\t", i+1);
		for (j = 0; j < arr[i]; ++j)
			printf("%c", SIGNAL);
		printf("\n");
	}
}
