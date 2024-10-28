#include <stdio.h>
#include <stdlib.h>

enum Film
{
    Film1 = 1,
    Film2,
    Film3,
    Film4,
    Film5
};

enum JenisTiket
{
    Ekonomi = 1,
    Bisnis,
    Utama
};

void pilihFilmDanTiket(int *film, int *tiket);
float hitungHargaFilm(int film);
float hitungHargaTiket(int tiket);
float hitungDiskon(float totalHarga);
void tampilkanTotalHarga(float totalHarga);
void prosesPembayaran(float totalHarga);

int main()
{
    int film, tiket;
    char member;
    float hargaFilm, hargaTiket, totalHarga, diskon;

    pilihFilmDanTiket(&film, &tiket);

    hargaFilm = hitungHargaFilm(film);
    hargaTiket = hitungHargaTiket(tiket);

    totalHarga = hargaFilm + hargaTiket;

    do
    {
        printf("\nApakah Anda member bioskop? (Y/N): ");
        scanf(" %c", &member);
        if (member != 'Y' && member != 'y' && member != 'N' && member != 'n')
        {
            printf("Input tidak valid, silakan masukkan Y atau N.\n");
        }
    } while (member != 'Y' && member != 'y' && member != 'N' && member != 'n');

    if (member == 'Y' || member == 'y')
    {
        printf("Anda mendapat diskon 10%%\n");
        diskon = hitungDiskon(totalHarga);
        totalHarga -= diskon;
    }

    tampilkanTotalHarga(totalHarga);
    prosesPembayaran(totalHarga);

    return 0;
}

void pilihFilmDanTiket(int *film, int *tiket)
{
    printf("=== SELAMAT DATANG DI BIOSKOP ===\n");
    printf("1. Film Pilihan:\n");
    printf("   1. Avengers\n");
    printf("   2. Spiderman\n");
    printf("   3. Batman\n");
    printf("   4. Superman\n");
    printf("   5. Ironman\n");

    while (1) {
        printf("\nMasukkan pilihan film (1-5): ");
        if (scanf("%d", film) != 1) {
            printf("Mohon masukkan angka!\n");
            exit(1);
        }
        if (*film >= 1 && *film <= 5) {
            break;
        } else {
            printf("Pilihan film tidak valid, silakan coba lagi.\n");
        }
    }

    printf("\n2. Jenis Tiket:\n");
    printf("   1. Ekonomi\n");
    printf("   2. Bisnis\n");
    printf("   3. Utama\n");

    while (1) {
        printf("Masukkan jenis tiket (1-3): ");
        if (scanf("%d", tiket) != 1) {
            printf("Mohon masukkan angka!\n");
            exit(1);
        }
        if (*tiket >= 1 && *tiket <= 3) {
            break;
        } else {
            printf("Pilihan jenis tiket tidak valid, silakan coba lagi.\n");
        }
    }
}

float hitungHargaFilm(int film)
{
    switch (film)
    {
    case Film1:
        return 75000;
    case Film2:
        return 80000;
    case Film3:
        return 85000;
    case Film4:
        return 90000;
    case Film5:
        return 95000;
    default:
        return 0;
    }
}

float hitungHargaTiket(int tiket)
{
    switch (tiket)
    {
    case Ekonomi:
        return 50000;
    case Bisnis:
        return 100000;
    case Utama:
        return 150000;
    default:
        return 0;
    }
}

float hitungDiskon(float totalHarga)
{
    return totalHarga * 0.10;
}

void tampilkanTotalHarga(float totalHarga)
{
    printf("\nTotal harga yang harus dibayar: Rp. %.2f\n", totalHarga);
    printf("Alamat memori total harga: %p\n", &totalHarga);
}

void prosesPembayaran(float totalHarga)
{
    float uangDibayar;
    printf("\nMasukkan jumlah uang yang dibayarkan: Rp. ");
    scanf("%f", &uangDibayar);

    if (uangDibayar > totalHarga)
    {
        printf("Kembalian Anda: Rp. %.2f\n", uangDibayar - totalHarga);
    }
    else if (uangDibayar < totalHarga)
    {
        printf("Uang Anda kurang! Kekurangan: Rp. %.2f\n", totalHarga - uangDibayar);
    }
    else
    {
        printf("Terima kasih! Uang anda pas.\n");
    }
}
