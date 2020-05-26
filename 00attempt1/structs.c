#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;

};

/*
Arrays can hold multiple values but they must all be the same data type
structs can be arrays of values but of different types akin to an object
*/

int main () {
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Business");
        printf("%s\n",student1.name);
        printf("%d\n",student1.age);
        printf("%s\n",student1.major);
        printf("%f\n",student1.gpa);

    struct Student student2;
    student2.age = 20;
    student2.gpa = 2.5;
    strcpy(student2.name,"Pam");
    strcpy(student2.major, "Art");
        printf("%s\n",student2.name);
        printf("%d\n",student2.age);
        printf("%s\n",student2.major);
        printf("%f\n",student2.gpa);

    return 0;
}
