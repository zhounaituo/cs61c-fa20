#include <stdio.h>
#define MAXLEN 1000     /* maximum length of array */

int countLine(char line[], int maxlen);

/* remove trailing blanks and tabs from each line of input, and to delete entirely blank lines. */
int main()
{
    int len; /* current length of line */
    char line[MAXLEN]; /* current line */

    while ((len = countLine(line, MAXLEN)) > 0)
        if (len > 2)
            printf("%s", line);
    return 0;
}

int countLine(char line[], int maxlen)
{
    
    int c, i;
    int ns;   /* count number of signal*/
    
    i = ns = 0;
    
    for (i = 0; i < maxlen-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if (c == ' ' || c == '\t')
            if (ns == 0)
            {
                line[i] = c;
                ++ns;
            }
            else 
                continue;
        else
            line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
