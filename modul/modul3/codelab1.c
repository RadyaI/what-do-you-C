#include <stdio.h>

int main()
{
    int umur, bulan;

    printf("Masukkan umur penumpang: ");
    scanf("%d", &umur);

    if (umur == 0)
    {
        printf("Masukkan bulan keberapa (1 - 12): ");
        scanf("%d", &bulan);

        if (bulan > 3 && bulan < 12)
        {
            printf("Penumpang mendapatkan tiket gratis.\n");
        }
        else
        {
            printf("Mohon maaf jika dibawah 1 tahun penumpang minimal berumur 4 bulan dan maximal 12 bulan\n");
        }
    }
    else if (umur < 0)
    {
        printf("Input tidak valid\n");
    }
    else if (umur > 120)
    {
        printf("Mohon maaf penumpang maximal berumur 120 tahun");
    }
    else
    {   

        if (umur < 2)
        {
            printf("Penumpang mendapatkan tiket gratis.\n");
        }
        else if (umur >= 2 && umur <= 12)
        {
            printf("Harga tiket untuk penumpang anak-anak adalah 50%% dari harga normal.\n");
        }
        else if (umur > 12 && umur <= 60)
        {
            printf("Harga tiket untuk penumpang dewasa adalah harga normal.\n");
        }
        else
        {
            printf("Harga tiket untuk penumpang lanjut usia adalah 75%% dari harga normal.\n");
        }
    }

    return 0;
}