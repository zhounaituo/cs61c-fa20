#include <stdio.h>

/* Copy input to output, replacing each string of one or more blacks by a single blank; */
int main()
{
    int c, count;
    
    count = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ' && count == 0)
        {
            count++;
            putchar(c);
        }
        else if (c == ' ' && count > 0)
        {
            count++;
        }
        else
        {
            count = 0;
            putchar(c);
        }
    printf("\n");
}
