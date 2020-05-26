#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 27;
    double gpa = 3.6;
    char grade = 'A';

    printf("%p\n", &age);
    printf("%p\n", &gpa);
    printf("%p\n", &grade);
    return 0;

}
