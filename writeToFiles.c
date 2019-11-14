#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char line[255];
    // Write information to a file
    FILE *fpointer = fopen("employees.txt", "r");// r:read w:write a:append
    //fprintf(fpointer, "Kelly\nBryan\nJohn\nMargaret\n");
    
    // Append Information to a file
    //fopen("employees.txt", "a");// r:read w:write a:append
    //fprintf(fpointer, "Oscar\n");

    // Read Information from a file
    //fopen("employees.txt", "r");// r:read w:write a:append
    fgets(line, 255, fpointer);
    printf("%s", line);

    fclose(fpointer);
    return 0;
}