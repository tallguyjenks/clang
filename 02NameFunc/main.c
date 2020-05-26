#include <stdio.h>
#include <stdlib.h>

void say_hi(char name[], int age){
    printf("Hello %s\nYou are %d years old\n", name, age);
}
int main(){
    say_hi("Bryan", 27);
    return 0;
}
