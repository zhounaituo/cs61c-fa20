#include <stdio.h>

int isin(char c, char arr[]); 
int any(char s1[], char s2[]);

int main()
{
	printf("%d", any("hello, world", "l"));	
}

int any(char s1[], char s2[])
{
	int i, j;
	
	i = j = 0;
	while (s1[i++] != '\0')
		if (isin(s1[i-1], s2))
			return i;
	return -1;
}

int isin(char c, char arr[])
{
	int i = 0;

	while (arr[i++] != '\0')
		if (c == arr[i-1])
			return 1;
	return 0;
}

