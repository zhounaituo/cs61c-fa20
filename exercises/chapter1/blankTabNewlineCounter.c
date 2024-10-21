#include <stdio.h>

/* Count blanks, tabs, and newlines. */
int main()
{
    int c, counter;

    while ((c = getchar()) != EOF)
        if (c == ' ' || c == '\t' || c == '\n')
            ++counter;
    printf("%d\n", counter);
}
