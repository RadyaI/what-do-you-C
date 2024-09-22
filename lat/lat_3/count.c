#include <stdio.h>

int main()
{
    int pilihan;
    int angka1, angka2;
    float bagi1, bagi2;

    printf("Pilih Operasi: \n\n");
    printf("1.Penjumlahan \n2.Pengurangan \n3.Pembagian \n4.Perkalian \n\n");
    printf("Pilih 1/2/3/4: ");
    scanf("%d", &pilihan);

    if (pilihan == 1)
    {
        printf("Masukkan angka pertama: ");
        scanf("%d", &angka1);
        printf("Masukkan angka kedua: ");
        scanf("%d", &angka2);
        printf("Hasilnya: %d", angka1 + angka2);
    }
    else if (pilihan == 2)
    {
        printf("Masukkan angka pertama: ");
        scanf("%d", &angka1);
        printf("Masukkan angka kedua: ");
        scanf("%d", &angka2);
        printf("Hasilnya: %d", angka1 - angka2);
    }
    else if (pilihan == 3)
    {
        printf("Masukkan angka pertama: ");
        scanf("%d", &bagi1);
        printf("Masukkan angka kedua: ");
        scanf("%d", &bagi2);
        printf("Hasilnya: %.2f", bagi1 / bagi2);
    }
    else if (pilihan == 4)
    {
        printf("Masukkan angka pertama: ");
        scanf("%d", &angka1);
        printf("Masukkan angka kedua: ");
        scanf("%d", &angka2);
        printf("Hasilnya: %d", angka1 * angka2);
    }
    else
    {
        printf("Pilih yang tersedia");
    }

    return 0;
}