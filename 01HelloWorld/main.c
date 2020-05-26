#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myName[] = "hello there";
    printf("\e[1mHello World!\e[0m\nI'd like to say %s\nAnd that my favorite number is %d\n",
            myName,
            500);
    return 0;
}
