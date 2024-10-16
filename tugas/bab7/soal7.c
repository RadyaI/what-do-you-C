#include <stdio.h>

int main() {
    char arr[] = {'i', 'n', 'd', 'o', 'n', 'e', 's', 'i', 'a'};
    char cari = 'a';
    int ditemukan = 0;

    for(int i = 0; i < 9; i++) {
        if(arr[i] == cari) {
            ditemukan = 1;
            break;
        }
    }

    if(ditemukan) {
        printf("Karakter '%c' ada dalam array\n", cari);
    } else {
        printf("Karakter '%c' tidak ditemukan\n", cari);
    }

    return 0;
}
