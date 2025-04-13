#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double numA;
	double numB;
	char op;

	printf("Enter the first number: ");
	scanf("%lf", &numA);
	printf("Enter the second number: ");
	scanf("%lf", &numB);
	printf("Enter the operator: ");
	scanf(" %c", &op); //requires a space before %c

	printf("----------------------------------\n");
	printf("The result of %lf and %lf: \n", numA, numB);

	if(op == '+')
	{
		printf("%f\n", numA + numB);
	}
	else if(op == '-')
	{
		printf("%f\n", numA - numB);
	}
	else if(op == '/')
	{
		printf("%f\n", numA / numB);
	}
	else if(op == '*')
	{
		printf("%f\n", numA * numB);
	}
	else 
	{
		printf("Invalid Operator!\n");
	}

	return 0;
}