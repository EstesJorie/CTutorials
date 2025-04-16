#include <stdio.h>
#include <stdlib.h>

int main()
{
    //allocate memory
    int *ptr;
    ptr = calloc(4, sizeof(*ptr));
    
    //write to memory
    *ptr = 2;
    ptr[1] = 4;
    ptr[2] = 6;
    
    //read from memory
    printf("%d\n", *ptr); //returns 2
    printf("%d %d %d", ptr[1], ptr[2], ptr[3]); //returns 4, 6, 0
    
    int *ptr1 = malloc(4);
    char *ptr2 = (char*) ptr1;
    ptr1[0] = 1684234849;
    printf("%d is %c %c %c %c", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]); //returns [num] is a b c d
    
    free(ptr)
    free(ptr1)
	return 0;
}
