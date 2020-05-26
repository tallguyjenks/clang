#include <stdio.h>
#include <stdlib.h>

int main () {
    int secretNumber = 5;
    int guess;
    int counter = 0;

    while (guess != secretNumber) {
        if (counter < 3) {
            printf("Enter A Number\n");
            scanf("%d", &guess);
            if (guess > secretNumber) {
                printf("Too High\n");
                counter++;
            }else if (guess == secretNumber) {
                printf("You Got It!\n");
            }else {
                printf("Too Low\n");
                counter++;
            } 
        }else {
            printf("You have guessed %d times, you lose\n", counter);
            return 0;
        }
    }
    return 0;
}