#include <stdio.h>

// integer division returns integer number
// modules returns a remainder

int main(void)
{
	int x = 11, y = 3;

	int div = x / y;
	int mod = x % y;

	printf("div: %d\n", div);
	printf("mod: %d\n", mod);

	return 0;
}
