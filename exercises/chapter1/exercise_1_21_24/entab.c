#include <stdio.h>

#define NB  8    /* number of blanks for on tab */
#define MAX 1000 /* maximum len of array */
    
void printAscii(char line[]);

int main()
{
    int c, i, t, j;
    int diff; /* differnces of index after replacement */
    char line[MAX];
    for (i = 0; i < MAX; ++i)
        line[i] = 0;

    diff = 0;
    for (i = 0, t = 0; i < MAX && ((c = getchar()) != EOF); ++i)
    {
        t = i + diff;
        if (c == '\t')
        {
            diff = diff + NB;
            for (j = 0; j < NB; ++j)
                line[t + j] = ' ';
        }
        else
            line[t] = c;
    }
    line[i] = '\0';
    printAscii(line);
}

/* Print ascii int for char in line */
void printAscii(char line[])
{
    int i = 0;
    
    while (line[i] != '\0')
    {
        printf("%d_", line[i]);
        ++i;
    }
}
