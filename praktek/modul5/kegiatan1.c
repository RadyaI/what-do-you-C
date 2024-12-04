#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int bandingkanBuah(const void *a, const void *b);
void kelolaBuah();

int main() {
    kelolaBuah();
    return 0;
}

void kelolaBuah() {
    int n;
    char buah[10][50];

    printf("Masukkan jumlah buah (maksimal 10): ");
    scanf("%d", &n);
    if (n > 10 || n <= 0) {
        printf("Jumlah buah harus antara 1 sampai 10.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("Masukkan nama buah ke-%d: ", i + 1);
        scanf("%s", buah[i]);
    }

    printf("\nNama buah dalam urutan yang diinputkan:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", buah[i]);
    }

    qsort(buah, n, sizeof(buah[0]), bandingkanBuah);

    printf("\nNama buah dalam urutan abjad:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", buah[i]);
    }
}

int bandingkanBuah(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}
