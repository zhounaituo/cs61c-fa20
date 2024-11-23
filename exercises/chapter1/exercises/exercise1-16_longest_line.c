/**
 * @file exercise1-16_longest_line.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2024-11-23
 * 
 * @copyright Copyright (c) 2024
 * 
 * Exercise 1-16. Revise the main routine of the longest-line 
 * program so it will correctly print the length of arbitrarily 
 * long input lines, and as much of the text as possible, 
 * without truncating output.
 */

#include <stdio.h>
#define MAXLINE 1000	/* maximum input line size */

int mgetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
	int len;			/* current line length */
	int max;			/* maximum length seen so far */
	char line[MAXLINE];		/* current input line */
	char longest[MAXLINE];  /* longest line saved here */

	max = 0;
	while ((len = mgetline(line, MAXLINE)) > 0)
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	if (max > 0)	/* there was a line */
		printf("%s", longest);
	return 0;
}

/* getline: read a line into s, return length */
int mgetline(char s[], int lim)
{
	int c, i;
	
	for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;
	
	i = 0;	
	while ((to[i] = from[i]) != '\0')
		++i;
}