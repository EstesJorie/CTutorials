#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myNum = 90;
    printf("Print \"this!\"\n"); //function to print to console
    printf("%d", 500); //format specifier %d (type int) 
    printf("%d is my favourite %s", 100, "number"); //format specifier %d (type int) + %s (type string)
    printf("%f", 3.14159); //format specifier %f (type float)
    printf("This is my favourite number %d", myNum); //format specifier %d (type int) = myNum (type int)
    return 0;
}