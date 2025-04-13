#include <stdio.h>
#include <stdlib.h>

struct Student //captialise name
{
	char name[50];
	char degree[50];
	int age;
	int yearOfStudy;
	double gradeAvg;
};


int main(void)
{
	struct Student studentA;
	studentA.age = 22; //uses dot operator
	studentA.gradeAvg = 67.9;
	strcpy(studentA.name, "Jim"); //strcpy(dest, string)
	strcpy(studentA.degree, "Computer Science");

	return 0;
}