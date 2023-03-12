#include <stdio.h>

int main()
{
	/*
	int grade1 = 75;
	int grade2 = 88;
	int grade3 = 72;
	int grade4 = 92;
	int grade5 = 79;

	int avg = ((grade1 + grade2 + grade3 +
		   grade4 + grade5) / 5);

	printf("Grade avg: %d\n", avg);
	*/

	//
	// index: 0   1  2  3  4
	//
	// grade: 75  88 72 92 79
	//
	int grade[5] = {75, 88, 72, 92, 79};


	for (int i = 0; i < 5; i++)
		printf("grade[%d]=%d\n", i, grade[i]);

	int total = 0;
	for (int i = 0; i < 5; i++)
                total += grade[i];
        printf("average: %d\n", total / 5);


	return 0;
}
