#include <stdio.h>
#define CLEN 80         /* Length of comparison */ 
#define MAXLEN 1000     /* Max length of line */

int mgetline(char arr[], int maxline);

int main()
{
    int max = CLEN;    /* maximum length seen so far */
    int len;           /* current line length */
    char line[MAXLEN];    /* current input line */
    
    while ((len = mgetline(line, MAXLEN)) > 0)
        if (len >= max)
            printf("%s", line);
    return 0;
}

/* getline: read a line into s, return length */
int mgetline(char arr[], int maxline)
{
    int c, i;
    
    i = 0;
    while (i<maxline-1 && ((c = getchar()) != EOF) && c != '\n')
    {
        arr[i] = c; 
        ++i;
    }
    if (c == '\n')
    {
        arr[i] = c;
        ++i;
    }
    arr[i] = '\0';
    return i;
}
