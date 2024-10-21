#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */ 
#define ML  20 /* max length of single kword */

/* Print a histogram of the lengths of words in its input */
int main()
{
    int c, nl, state, i;
    int nlength[ML];

    state = OUT;
    c = nl = 0;   

    for (i = 0; i < ML; ++i)
        nlength[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            state = IN;
            ++nl;
        }
        else if (state == IN)
        {
            ++nlength[nl];
            state = OUT;
            nl = 0;
        }
        else 
        {
            continue;
        }
    }
    
    printf("histogram: ");
    for (i = 0; i < ML; ++i)
        printf(" %d", nlength[i]);
}
