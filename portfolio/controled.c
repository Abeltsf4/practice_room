#include <stdio.h>

// prints 'pass' if the condition is true
// conternt outside the block will be printed anyway

int main(void)
{
	int grade = 0;

	printf("Grade: ");
	scanf("%d", &grade);

	if (grade >= 50)
	{
		printf("Pass\n");
		printf("Congrats!\n");
	}

	printf("Printed anyway\n");

	return 0;
}
