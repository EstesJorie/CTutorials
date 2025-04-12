#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char color[20];
	char plural[20];
	char person[20];
	char personL[20];

	printf("Enter a color: ");
	scanf("%s", color);
	printf("Enter a plural-noun: ");
	scanf("%s", plural);
	printf("Enter a person: ");
	scanf("%s%s", person, personL);

	printf("Roses are %s\n", color);
	printf("%s are blue\n", plural);
	printf("I love %s %s.\n", person, personL);
}