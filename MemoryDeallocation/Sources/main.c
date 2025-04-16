#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    ptr = malloc(sizeof(*ptr)); //memory for one int
    
    if (ptr == NULL)
    {
        printf("Unable to allocate memory.");
        return 1;
    }
    
    *ptr = 20; //set value of int
    printf("Integer value: %d\n", *ptr);
    free(ptr);
    ptr = NULL //set to NULL to prevent accidental usage
}
