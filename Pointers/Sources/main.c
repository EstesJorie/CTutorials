#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age = 30;
	int * pAge = &age; //pointer (*) variable = memory address of variable
	double gpa = 3.4;
	double * pGpa = &gpa
	char grade = 'A';
	char * pGrade = &grade

	printf("int age address: %p\n", &age); //& = pointer (to memory address)
	return 0;
}