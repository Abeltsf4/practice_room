#include <stdio.h>

// returns true if the condition is not true

int main()
{
	int height = 0;
	printf("Height: ");
	scanf("%d", &height);


	if (! (height > 150))
	{
		printf("Underqualified\n");
		printf("We are sorry!\n");
	}
	else
	{
		printf("Good to ride\n");
		printf("Happy driving!\n");
	}
	return 0;
}
