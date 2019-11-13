#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    
    //    strings, int, template literals
    
    /*
    char characterName[] = "Tom";
    int characterAge = 67;
    printf("There was once a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);
    characterAge *= 3;
    printf("he really liked the name %s\n", characterName);
    printf("but did not like being %d.\n", characterAge);
    */

    /*
    int age = 40;
    double gpa = 3.7;
    float pie = 3.146276777;
    char grade = 'A'; // char is in single quotes
    char phrase[] = "string"; // strings are in double quotes
    printf("%s\n",phrase); // %s string %d number %f is a decimal number %c is character
    printf("age: %d, GPA: %f, pie: %f\n%c\n", age, gpa, pie, grade);
    
    const int NUM = 40;
    printf("%d\n",NUM);
    
    double gpa;
    printf("Enter Your gpa: ");
    scanf("%f",&gpa);
    printf("you are %f Years Old\n", gpa);
    */

    // char name[20];
    // const int num = 70;
    // printf("enter your name:");
    // scanf("%s",name);
    // printf("your name is: %s\nand you are %d Years old\n",name ,num);

    int nameLength = 20;
    char name[nameLength];
    printf("enter your name:");
    fgets(name, nameLength, stdin);
    printf("your name is: %s\n", name);
    return 0;
}