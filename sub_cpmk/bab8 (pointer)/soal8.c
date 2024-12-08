#include <stdio.h>

int main() {
    int tahun[] = {2009, 2008, 2007, 2006};
    int jumlah[] = {1750, 1345, 950, 657};
    int *ptrTahun = tahun;
    int *ptrJumlah = jumlah;

    printf("Tahun\tJumlah\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t%d\n", ptrTahun[i], ptrJumlah[i]);
    }

    return 0;
}
