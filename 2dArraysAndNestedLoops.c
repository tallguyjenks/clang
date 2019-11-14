#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int nums[3][2] = {{1,2}, {3,4}, {5,6}};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\n", nums[i][j]);
        } 
    }
    
    return 0;
}