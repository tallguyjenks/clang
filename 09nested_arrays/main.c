#include <stdio.h>
#include <stdlib.h>

int main(){
    int nums[3][3] = {
                    {1,2,3},
                    {4,5,6},
                    {7,8,9}
                   };
    int i;
    int j;

    for(i = 0; i <= 2; i++){
        for(j = 0; j <= 2; j++){
            printf("%d\n", nums[i][j]);
        }
    }
    return 0;
}

