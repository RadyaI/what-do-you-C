#include <stdio.h>

enum TicketClass
{
    Economy = 1,
    Business,
    FirstClass
};

int main()
{
    int pilihan;

    printf("Pilih kelas tiket:\n1. Economy (Kelas Ekonomi)\n2. Business (Kelas Bisnis)\n3. FirstClass (Kelas Utama)\n");

    printf("Masukkan pilihan Anda (1-3): ");
    scanf("%d", &pilihan);

    switch (pilihan)
    {
    case Economy:
        printf("\nAnda memilih Kelas Ekonomi.\n");
        printf("Harga tiket Kelas Ekonomi adalah: Rp. 500.000\n");
        break;
    case Business:
        printf("\nAnda memilih Kelas Bisnis.\n");
        printf("Harga tiket Kelas Bisnis adalah: Rp. 1.500.000\n");
        break;
    case FirstClass:
        printf("\nAnda memilih Kelas Utama.\n");
        printf("Harga tiket Kelas Utama adalah: Rp. 5.000.000\n");
        break;
    default:
        printf("\nPilihan tidak valid. Silakan pilih antara 1-3.\n");
        break;
    }

    return 0;
}
