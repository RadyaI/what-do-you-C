#include <stdio.h>

int main()
{
    int umur;

    printf("Masukkan umur penumpang: ");
    scanf("%d", &umur);

    if (umur == 0 || umur < 0)
    {
        printf("Mohon Maaf penumpang minimal berumur 1 tahun");
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