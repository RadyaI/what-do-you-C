#include <stdio.h>

void tulisJam(int jam, int menit, int detik) {
    printf("%02d:%02d:%02d\n", jam, menit, detik);
}

int main() {
    int jam, menit, detik;

    printf("Masukkan jam, menit, dan detik: ");
    scanf("%d %d %d", &jam, &menit, &detik);

    printf("Jam: ");
    tulisJam(jam, menit, detik);

    return 0;
}
