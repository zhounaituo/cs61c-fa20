/**
 * @file exercise1-14_c_histogram.c
 * @author zhounaituo (zhounaituo@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-23
 * 
 * @copyright Copyright (c) 2024
 * 
 * Exercise 1-14. Write a program to print a histogram of 
 * the frequencies of different characters in its input.
 */

#include <stdio.h>

#define MAXLEN 26
#define SIGNAL '*'

int isalphabet(char c);
void tohistogram(int *arr, int len);
int tolow(char c);

int main()
{
	int c, i;
	int arr[MAXLEN];

	i = c = 0;
	for (i = 0; i < MAXLEN; ++i)
		arr[i] = 0;

	while ((c = getchar()) != EOF)
		if (isalphabet(c))
			arr[tolow(c)-'a']++;
	tohistogram(arr, MAXLEN);
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
		printf("%c\t", i+'a');
		for (j = 0; j < arr[i]; ++j)
			printf("%c", SIGNAL);
		printf("\n");
	}
}

int tolow(char c)
{
	return c >= 'a' ? c : c + 'a' - 'A';
}
