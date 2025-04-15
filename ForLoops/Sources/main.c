#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	for(i = 1; i <= 5; i++)
	{
		printf("%d\n", i);
	}

	int luckyNums[] = {4, 8, 15, 16, 23, 42};
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", luckyNums[i]);
	}
	return 0;
}