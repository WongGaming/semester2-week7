#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(int argc, char* argv[])
{
    char* str = malloc(100);
    strcpy(str, "Hello World!");

    printf("String is: %s\n", str);

    return 0;
}
