#include <stdio.h>

// returns true if both conditions are true

int main()
{
	int height = 0;
	printf("Height: ");
	scanf("%d", &height);

	int weight = 0;
	printf("Weight: ");
	scanf("%d", &weight);

	if (height >= 150 && weight >= 50)
	{
		printf("Good to ride\n");
		printf("Happy driving!\n");
	}
	else
	{
		printf("Under qualified\n");
		printf("We are sorry!\n");
	}
	return 0;
}
