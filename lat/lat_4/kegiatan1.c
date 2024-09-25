#include <stdio.h>

int main()
{

    char nama[50];
    int nim;
    float tugas, uts, uas;

    printf("Masukkan Nama Mahasiswa: ");
    scanf("%s", &nama);

    printf("Masukkan Nim: ");
    scanf("%d", &nim);

    printf("Masukkan Nilai tugas: ");
    scanf("%f", &tugas);

    printf("Masukkan Nilai uts: ");
    scanf("%f", &uts);

    printf("Masukkan Nilai uas: ");
    scanf("%f", &uas);

    printf("==============");

    printf("Nama Mahasiswa: %s\n", nama);
    printf("Nim: %d\n", nim);
    printf("Nilai tugas: %.2f\n", tugas);
    printf("Nilai uts: %.2f\n", uts);
    printf("Nilai uas: %.2f\n", uas);

    return 0;
}