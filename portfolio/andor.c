#include <stdio.h>

int main(void)
{
	int height = 0;
	printf("Height: ");
	scanf("%d", &height);

	int weight = 0;
	printf("Weight: ");
	scanf("%d", &weight);

	if (height >= 165 && weight >= 50)
		printf("Good to join the military!\n");
	else
		printf("Note good enough!\n");

	return 0;
}
