#include <stdio.h>

int main() {
    int n, nilai, total = 0;
    float rata_rata;

    printf("Masukkan jumlah pengulangan: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("Masukkan nilai: ");
        scanf("%d", &nilai);
        total += nilai;
    }

    rata_rata = (float) total / n;
    printf("Rata-rata nilai: %.2f\n", rata_rata);
    return 0;
}
