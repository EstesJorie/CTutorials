#include <stdio.h>
#include <stdlib.h>

int main()
{
	char line[255];
	FILE * fPointer = fopen("employees.txt", "r");
	
	fgets(line, 255, fPointer); //fgets(dest, size, file loc)
	printf("%s", line);

	fclose(fPointer);
	return 0;
}
