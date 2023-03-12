#include <stdio.h>

int main()
{
	int number = 3;

	switch (number)
	{
		case 0:
			printf("Case 0!\n");
		case 1:
			printf("Case 1!\n");
		break;
		// Switch is over here
		default:
			printf("Default case!\n");
	}

	return 0;
}
