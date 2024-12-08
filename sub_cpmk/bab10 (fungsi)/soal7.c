#include <stdio.h>

int findPos(char str[], char ch) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}

int main() {
    char str[100];
    char ch;

    printf("Masukkan string: ");
    fgets(str, sizeof(str), stdin);

    printf("Masukkan karakter yang dicari: ");
    scanf(" %c", &ch);

    int index = findPos(str, ch);
    if (index != -1) {
        printf("Karakter '%c' ditemukan pada indeks: %d\n", ch, index);
    } else {
        printf("Karakter '%c' tidak ditemukan dalam string.\n", ch);
    }

    return 0;
}
