/**
 * Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
 * 
 * 实验结果：EOF 既不是 0 也不是 1.
 */

#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF)
        ;
    printf("%d\n", c);
    return 0;
}