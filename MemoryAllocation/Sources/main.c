#include <stdio.h>
#include <stdlib.h>

int main()
{
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	printf("%lu\n", sizeof(myInt));      // 4 bytes
	printf("%lu\n", sizeof(myFloat));    // 4 bytes
	printf("%lu\n", sizeof(myDouble));   // 8 bytes
	printf("%lu\n", sizeof(myChar));     // 1 byte

	/*STATIC*/
	int students[20]; //(20*4 = 80bytes)
	printf("%lu", sizeof(students)); // 80
	
	/*DYNAMIC/RUNTIME */
	int *ptr1, *ptr2;
	ptr1 = malloc(sizeof(*ptr1)); // how memory is allocated in bytes
	ptr2 = calloc(1, sizeof(*ptr2)); //amount of items, size per item in bytes
	int *students;
	int numStudents = 12;
	students = calloc(numStudents, sizeof(*students));
	printf("%d", numStudents * sizeof(*students)); // 48 bytes
    
    free(ptr1);
    free(ptr2);
    free(dynamicStudents);
    
	return 0;
}
