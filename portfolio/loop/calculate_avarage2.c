#include <stdio.h>

int main()
{
	int i = 0;
	int number = 0;
	float total = 0;
	float total_numbers = 0;

	printf("How many numbers: ");
	scanf("%f", &total_numbers);

	while (i < total_numbers)
	{
		printf("Enter Number %d: ", i+1);
		scanf("%d", &number);
		total = total + number;
		i++;
	}
	printf("total: %.2f\n", total);
	printf("average: %.2f\n", total / total_numbers);

	return 0;
}
