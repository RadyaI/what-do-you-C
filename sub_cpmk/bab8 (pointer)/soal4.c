#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;

    printf("Masukkan sebuah string: ");
    fgets(str, sizeof(str), stdin);

    printf("Karakter per karakter:\n");
    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }

    printf("\n");
    return 0;
}
