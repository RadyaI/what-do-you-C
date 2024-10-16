#include <stdio.h>

int main() {
    int n, nilai, total = 0;

    printf("Masukkan jumlah pengulangan: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Masukkan nilai: ");
        scanf("%d", &nilai);
        if (nilai > 0) {
            total += nilai;
        }
    }

    printf("Total penjumlahan bilangan positif: %d\n", total);
    return 0;
}
