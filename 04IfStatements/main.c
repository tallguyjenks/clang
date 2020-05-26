#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
    int result;
    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }
    /* if(num1 > num2){ */
    /*     result = num1; */
    /* }else{ */
    /*     result = num2; */
    /* } */
    return result;
}

int main()
{
    printf("Max num is: %d\n", max(5,8, 40));
    return 0;
}
