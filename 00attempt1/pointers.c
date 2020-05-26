#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int age = 30;
        int *pAge = &age;
    double gpa = 3.4;
        double *pGpa = &gpa;
    char grade = 'A';
        char *pGrade = &grade;
    
    printf("age's Memory Address: \t\t\t\t%p\n", &age);
    printf("The pointer variable value for Age is:\t\t%p\n", pAge);
    printf("The pointer variable value for gpa is:\t\t%p\n", pGpa);
    printf("The pointer variable value for grade is:\t%p\n", pGrade);

// Dereferencing Pointers
    printf("dereferenced pointer:%d\n", *&age);
    printf("Dereferenced pointer is: %d\n", *pAge);
    return 0;
}