#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    bool flagTrue = true;
    bool flagFalse = false;

    printf("Boolean values demonstration:\n");
    printf("flagTrue: %d\n", flagTrue);
    printf("flagFalse: %d\n", flagFalse);

    char greeting[] = "Hello, World!";
    char copyGreeting[20];
    
    strcpy(copyGreeting, greeting);

    printf("\nString operations:\n");
    printf("Original greeting: %s\n", greeting);
    printf("Copied greeting: %s\n", copyGreeting);

    int number = 100;
    int *pointer = &number;

    printf("\nPointer demonstrations:\n");
    printf("Value of number: %d\n", number);
    printf("Address of number: %p\n", &number);
    printf("Value of pointer: %p\n", pointer);
    printf("Value pointed by pointer: %d\n", *pointer);

    return 0;
}

