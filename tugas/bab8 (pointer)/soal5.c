#include <stdio.h>

int main() {
    char str[100];
    char *ptr = str;
    int length = 0;

    printf("Masukkan sebuah string: ");
    fgets(str, sizeof(str), stdin);

    while (*ptr != '\0' && *ptr != '\n') {
        length++;
        ptr++;
    }

    printf("Panjang string: %d\n", length);
    return 0;
}
