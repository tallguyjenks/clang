#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Bryan Jenks");
    strcpy(student1.major, "Software");
    printf("%s\n", student1.name);
    printf("%s\n", student1.major);
    return 0;
}
