#include <stdio.h>

#define MAX 1000

int mgetline(char line[], int len);
void reverses(char line[]);
int getlen(char line[]);

int main()
{
    int len, i;
    char line[MAX];
    
    for (i = 0; i < MAX; ++i)
        line[i] = 0;

    len = 0;
    while ((len = mgetline(line, MAX)) > 0)
    {
        reverses(line);
        printf("%s", line);
    }
}

/* Get ont line in to line[] */
int mgetline(char line[], int len)
{
    int i, c;

    for (i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

/* Rreverses input a line at a time. */
void reverses(char line[])
{
    int i, t;
    int temp;
    int len = getlen(line); 
    
    temp, t = 0;
    for (i = 0; i < len/2; ++i)
    {
        t = len - i - 1; 
        temp = line[t];
        line[t] = line[i];
        line[i] = temp;
    }
}

/* Get len of line */
int getlen(char line[])
{
    int i = 0;
    while (line[i] != '\0')
       ++i; 
    return i-1;
}
