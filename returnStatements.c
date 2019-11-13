#include <stdio.h>
#include <stdlib.h>

double cube(double num)
{
    return num * num * num;
}


int main ()
{
    printf("your cubed number is: %f\n", cube(2.0));
    return 0;
}