/**
 * Exercise 1-17: Write a program to print all input lines that
 *  are longer than 80 characters.
 * 
 * 2024-11-29 11:06:06
 */

#include <stdio.h>

#define MAX 80	/* maxium of line */ 

int mgetline(char *line);

int main()
{
	int max, i, c, len;
	max = MAX;

	i = c = len = 0;
	char line[max];
	for (i = 0; i < max; ++i)
		line[i] = 0;
		
	
	while ((len = mgetline(line)) > 0)
		if (len >= max-1 && line[max-1] != '\n')
		{
			printf("%s", line);
			while ((c = getchar()) != EOF && c != '\n')
				printf("%c", c);
            printf("\n");
		}
		else if (len >= max-1)
			printf("%s", line);
		else
			continue;
	return 0;
}

int mgetline(char *line)
{
	int i, c;
	
	for (i = 0; i < MAX && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n')
	{
		line[i] = '\n';
		++i;
	}
	line[i] = '\0';
	return i;
}
