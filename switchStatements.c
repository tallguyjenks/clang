#include <stdio.h>
#include <stdlib.h>

int main (){
    char grade;

    printf("What Did you score on your test?\n->A\n->B\n->C\n->D\nor\n->F\n");
    scanf(" %c",&grade);

    switch (grade)
    {
    case 'A':
        printf("You Did Great!\n");
        break;
    case 'B':
        printf("You Did Alright\n");
        break;
    case 'C':
        printf("You Did Poorly!\n");
        break;
    case 'D':
        printf("You Did Very Bad\n");
        break;
    case 'F':
        printf("You Failed!\n");
        break;
    default:
        printf("ERROR: Invalid Grade\n");
        break;
    }
    return 0;    
}