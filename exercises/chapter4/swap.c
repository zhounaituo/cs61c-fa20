#include <stdio.h>
#define swap(t,x,y) do {t temp = x; x = y; y = temp;} while (0);

int main()
{
	int a = 10;
	int b = 11;
	swap(int, a, b);
	printf("a:%d, b:%d", a, b);
}
