#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char grade = 'A';

	switch(grade)
	{
	case 'A' :
		printf("Nice work!\n");
		break;
	case 'B' :
		printf("That was a good try!");
		break;
	case 'C' :
		printf("You passed!");
		break;
	case 'D' :
		printf("Nearly there!");
		break;
	case 'F' :
		printf("You failed!");
		break;

	default:
		printf("No grade");
	}

	return 0;
}