#include <stdio.h>

#define IN  1  /* Inside of word */
#define OUT 0  /* Outside of word */
#define NCL 26 /* Length of nc array */

/* Print a histogram of the frequencies of different characters in its input. */
int main()
{
    int i, j, c; 
    int nc[NCL];
    
    c = 0;
    
    for (i = 0; i < NCL; ++i)
        nc[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';
        if (c >= 'a' && c <= 'z')
            ++nc[c-'a'];
    }
    
    printf("Histogram: \n"); 
    for (i = 0; i < NCL; ++i)
    {
        printf("%c: ", 'a' + i);
        for (j = 0; j < nc[i]; ++j)
            printf("#");
        printf("\n");
    }
        
}
            
