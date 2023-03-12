#include <stdio.h>
 
//scanf - is a function that allows us to read user input

int main(void)
{
	int length = 0;
	int width = 0;

	printf("Length: ");
	scanf("%d", &length);
	printf("Width: ");
	scanf("%d", &width);

	int area = length * width;

	printf("Ar: %d\n", area);

	return 0;
}
