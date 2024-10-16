#include <stdio.h>

int main() {
    int tahun[] = {2006, 2007, 2008, 2009};
    int jumlah[] = {367, 480, 495, 625};

    printf("Tahun  Jumlah\n");
    for (int i = 0; i < 4; i++) {
        printf("%d    %d\n", tahun[i], jumlah[i]);
    }

    return 0;
}
