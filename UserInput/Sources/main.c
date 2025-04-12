#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age;
	double gradeAvg;
	char grade;
	char name[20]; //string with max len of 20 characters

	printf("Enter your age: \n");
	scanf("%d", &age); //accept int, store it in age variable (deref)

	printf("Enter your grade average: \n");
	scanf("%lf", &gradeAvg); //lf = double

	printf("Enter your grade: \n");
	scanf("%c", &grade); //c = character

	printf("Enter your name: \n");
	fgets(name, 20, stdin); //does not need to be deferenced, fgets takes a line of text

	/*

	scanf(type, &targetVariable) --> ENTER is stored as a new line
	fgets(targetVariable, character input, location)
	
	*/

	return 0;
}