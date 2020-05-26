#!/usr/bin/tcc -run
#include <stdio.h>
#include <stdlib.h>

int main ()
{

    // Create and Overwrite a file
    FILE *fpointer = fopen("employees.txt", "w");// r:read w:write a:append
    fprintf(fpointer, "Kelly\nBryan\nJohn\nMargaret\n");
    fclose(fpointer);

    // Append Information to a file
    fopen("employees.txt", "a");// r:read w:write a:append
    fprintf(fpointer, "Oscar\n");
    fclose(fpointer);

    // Read Information from a file
    char line[255];
    fopen("employees.txt", "r");// r:read w:write a:append
    fgets(line, 255, fpointer);
    printf("%s", line);

    fclose(fpointer);
    return 0;
}
