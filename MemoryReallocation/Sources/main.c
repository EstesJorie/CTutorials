#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1, *ptr2, size;
    
    //memory allocation for four int's
    size = 4 * sizeof(*ptr1);
    ptr1 = malloc(size);
    printf("%d bytes allocated at address %p \n", size, ptr1);
    
    //resize memory for six int's
    size = 6 * sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);
    printf("%d bytes reallocated at address %p \n", size, ptr2);

    //error and NULL checking
    if(ptr2 == NULL)
    {
        printf("Failed. Unable to resize memory"); //if reallocation fails
    }
    else
    {
        printf("Success. %d bytes rellocated at address %p \n", ptr2);
        ptr1 = ptr2; //update ptr1 to point to new memory
    }
    free(ptr1) //free allocated memory

    return 0;
}
