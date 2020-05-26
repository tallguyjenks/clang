#include <stdio.h>
#include <stdlib.h>

int main () {
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("age: \t%p\ngpa: \t%p\ngrade: \t%p\n", &age, &gpa, &grade);// Prints out memory addresses of the variables
    return 0;
}