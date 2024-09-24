#include <stdio.h>

int main(){

    char nama[50];
    int umur;
    float gaji_pokok;

    printf("Masukkan Nama: ");
    gets(nama);

    printf("Masukkan Umur: ");
    scanf("%d", &umur);

    printf("Masukkan gaji pokok: ");
    scanf("%f", &gaji_pokok);

    float tunjangan = gaji_pokok * 0.1;
    float total_gaji = gaji_pokok + tunjangan;

    printf("\nNama: %s\n", nama);
    printf("Umur: %d\n", umur);
    printf("Gaji pokok: Rp.%.2f\n", gaji_pokok);
    printf("Tunjangan: Rp.%.2f\n", tunjangan);
    printf("Total gaji: Rp.%2.f\n", total_gaji);

    return 0;
}