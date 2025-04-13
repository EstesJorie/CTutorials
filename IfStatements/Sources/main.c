#include <stdio.h>
#include <stdlib.h>

int maxNum(int numA, int numB, int numC)
{
	int result;
	if(numA >= numB && numA >= numC)
	{
		result = numA;
	}
	else if(numB >= numA && numB >= numC)
	{
		result = numB;
	}
	else
	{
		result = numC;
	}
	return result;
}

int main(void)
{
	printf("%d", maxNum(4, 10, 9)); //expected: 10
	return 0;
}