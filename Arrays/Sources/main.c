#include <stdio.h>
#include <stdlib.h>

int main()
{
	int luckyNumbers[] = {4, 8, 15, 16, 23, 42}; //array syntax, comma separates elements
	luckyNumbers[1] = 200;
	printf("%d", luckyNumbers[0]);
	return 0;
}