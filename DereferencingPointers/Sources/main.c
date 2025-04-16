#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age = 30;
	int *pAge = &age;
			

	printf("%d", *pAge); //dereferenced pointer pAge  --> becomes int 
	printf("%d", *&age); //same as above line but without pointer

}
