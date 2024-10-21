#include <stdio.h>

/* Prints input one word per line. */
int main()
{
    int c; 

    while ((c = getchar()) != EOF)
    {
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
        {
            printf("\n");
        }
        else
        {
            putchar(c);
        }
    }
}

