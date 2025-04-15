#include <stdio.h>
#include <stdlib.h>

int main()
{
	int index = 1;
	int index1 = 1;

	while(index <= 5) //while loop
	{
		printf("%d\n", index);
		index++;
	}

	do //do-while loop
	{
		printf("%d\n", index1);
		index++;
	} while (index1 <= 5);
	return 0;
}