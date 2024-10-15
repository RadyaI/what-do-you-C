#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;
    int unique;

    printf("Masukkan sebuah string: ");
    fgets(str, sizeof(str), stdin);

    int find = strcspn(str, "\n");
    str[find] = '\0';

    printf("Hasil: ");

    for (i = 0; i < strlen(str); i++) {
        unique = 1;  

        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                unique = 0; 
                break; 
            }
        }

        if (!unique) {
            continue; 
        }

        printf("%c ", str[i]);
    }

    printf("\n");
    return 0;
}