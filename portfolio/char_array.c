#include <stdio.h>

// index:   0   1    2    3    4
// mydata: 'a' 'b'  'c'  'd'  \0

int main(void)
{
	char mydata[5];
	mydata[0] = 'a';
	mydata[1] = 'b';
	mydata[2] = 'c';
	mydata[3] = 'd';
	mydata[4] = '\0';

	printf("mydata[2] = %c\n", mydata[2]);
	printf("%s\n", mydata);

	return 0;
}
