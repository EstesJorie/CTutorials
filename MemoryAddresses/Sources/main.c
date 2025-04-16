#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age = 30;
	double gradeAvg = 3.4;
	char grade = 'A';

	printf("Age: %p\n", "gradeAvg: %p", &age, &gradeAvg); //%p prints memory address, p = pointer
	return 0;
}