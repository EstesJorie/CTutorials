#include <stdio.h>
#include <stdlib.h>

void sayHello(char user[])
{
	printf("Hello %s!\n", user);
}

double cube(double num)
{
	double result = num * num * num;
	return result; //breaks out of function, return value
}

int main(void)
{
	sayHello("Matthew");
	printf("Answer: %f", cube(3.1));
	return 0;
}