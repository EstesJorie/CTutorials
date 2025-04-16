#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE * fPointer = fopen("employees.txt", "w"); //pointer to physical files
	fprintf(fPointer, "Jim, Sales\nPam, Receptionist\nOscar, Accounts");
	fclose(fPointer); //must always CLOSE file					return 0;
}
