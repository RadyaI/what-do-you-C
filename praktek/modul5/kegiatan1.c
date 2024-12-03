#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bandingkan(const void *a, const void *b);
int mintaJumlahBuah();
void inputNamaBuah(char buah[][50], int n);
void tampilkanUrutanInput(char buah[][50], int n);
void tampilkanUrutanAbjad(char buah[][50], int n);
void urutkanBuah(char buah[][50], int n);

int main() {
    int n;
    char buah[10][50];

    n = mintaJumlahBuah();
    if (n == -1) {
        return 1; 
    }
    inputNamaBuah(buah, n);
    tampilkanUrutanInput(buah, n);
    urutkanBuah(buah, n);
    tampilkanUrutanAbjad(buah, n);

    return 0;
}

int bandingkan(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int mintaJumlahBuah() {
    int n;
    printf("Masukkan jumlah buah (maksimal 10): ");
    scanf("%d", &n);

    if (n > 10 || n <= 0) {
        printf("Jumlah buah harus antara 1 sampai 10.\n");
        return -1; 
    }

    return n;
}

void inputNamaBuah(char buah[][50], int n) {
    for (int i = 0; i < n; i++) {
        printf("Masukkan nama buah ke-%d: ", i + 1);
        scanf("%s", buah[i]);
    }
}

void tampilkanUrutanInput(char buah[][50], int n) {
    printf("\nNama buah dalam urutan yang diinputkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", buah[i]);
    }
}

void tampilkanUrutanAbjad(char buah[][50], int n) {
    printf("\nNama buah dalam urutan abjad:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", buah[i]);
    }
}

void urutkanBuah(char buah[][50], int n) {
    qsort(buah, n, sizeof(buah[0]), bandingkan);
}