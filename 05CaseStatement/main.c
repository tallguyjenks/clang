#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    scanf("%c",&grade);
    switch(grade){
        case 'A':
            printf("You did great!\n");
            break;
        case 'B':
            printf("You did okay!\n");
            break;
        case 'C':
            printf("You did mediocre!\n");
            break;
        case 'D':
            printf("You did bad!\n");
            break;
        case 'F':
            printf("You did shitty!\n");
            break;
        default:
            printf("YOU DONT EVEN GO HERE!\n");
            break;
    }
    return 0;
}
