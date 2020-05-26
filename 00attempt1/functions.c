#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("Top\n");
    sayHi("bryan", 57);
    printf("Bottom\n");
    return 0;
}

void sayHi(char name[], int age)
{
    printf("hello %s you are %d years old\n", name, age);
}