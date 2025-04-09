#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int num = 6;
    float numNew = 46.457;
    //printf("%f", 9.00 + 4.50); //can do simple math (+ - / *)
    //printf("%f", 5 - 4.50); //will always return a float
    //printf("%d", num);

    printf("%f\n", pow(3, 2)); //power 
    printf("%f\n", sqrt(36)); //square root
    printf("%f\n", ceil(36.356)); //round up
    printf("%f\n", floor(36.356)); //round down
    printf("%f\n", round(36.356)); //round to nearest whole number
    printf("%f\n", round(numNew)); //absolute value


    return 0;
}