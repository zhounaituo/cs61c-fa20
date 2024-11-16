#include <stdio.h>

int strrindex(char s[], char t);

/* Returns the position of the rightmost occurrence of t in s, or -1 if there is none. */
int main()
{
	char* string = "This is array.";
	printf("i: %d", strrindex(string, 'i')); 
}

int strrindex(char s[], char t)
{
	int i;
	
	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == t)
			return i;
	return -1;
}
