#include <stdio.h>

int main()
{
	int i = 0;

	while (i < 10)
	{
		printf("i: %d\n", i);
		i = i + 1;
		/* i += 1 & i++ are alternatives */
	}

	return 0;
}
