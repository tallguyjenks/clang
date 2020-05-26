#include <stdio.h>
#include <stdlib.h>

int main(){

    int index = 1;
    // checks condition before execution
    while(index <= 5){
        printf("Hello World!\n");
        index++;
    }

    // do will execute once before
    // checking the condition
    do{
        printf("Hello World!\n");
        index++;
    }while(index <= 5)
    return 0;

}


