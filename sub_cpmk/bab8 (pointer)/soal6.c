#include <stdio.h>

int main() {
    char source[100];
    char destination[100];
    char *srcPtr = source;
    char *destPtr = destination;

    printf("Masukkan sebuah string: ");
    fgets(source, sizeof(source), stdin);

    while (*srcPtr != '\0' && *srcPtr != '\n') {
        *destPtr = *srcPtr;
        srcPtr++;
        destPtr++;
    }
    *destPtr = '\0'; 
    printf("\nString Awal: %s", source);
    printf("String yang disalin: %s\n", destination);
    return 0;
}
