#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double num1, num2;
    char op;
    printf("enter a number: ");
    scanf("%lf", &num1);
    printf("Enter Operator:");
    scanf(" %c", &op);
    printf("enter a number: ");
    scanf("%lf", &num2);

    if(op == '+'){
        printf("%f\n", num1 + num2);
    }else if(op == '-'){
        printf("%f\n", num1 - num2);
    }else if(op == '/'){
        printf("%f\n", num1 / num2);
    }else if(op == '*'){
        printf("%f\n", num1 * num2);
    }else{
        printf("ERROR: Invalid Operator\n");
    }


    /*
    printf("enter first number: ");
    scanf("%lf", &num1);
    printf("enter second number: ");
    scanf("%lf", &num2);
    printf("Answer: %f\n", num1 + num2);
    */
    return 0;
}