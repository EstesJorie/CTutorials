#include <stdio.h>
#include <stdlib.h>

int main()
{
	double num1;
	double num2;

	printf("Enter first number: \n" );
	scanf("%lf", &num1);
	printf("Enter second number: \n" );
	scanf("%lf", &num2);

	printf("Answer: %f", num1 + num2);

	return 0;
}
