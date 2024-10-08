#include <stdio.h>

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

void tampilkanDashboard();
void pilihFilmDanTiket(int *film, int *tiket);
float hitungHargaFilm(int film);
float hitungHargaTiket(int tiket);
float hitungDiskon(float totalHarga, int member);
void tampilkanTotalHarga(float totalHarga);
void prosesPembayaran(float totalHarga);

int main()
{
    int film, tiket, member;
    float hargaFilm, hargaTiket, totalHarga, diskon;

    tampilkanDashboard();
    pilihFilmDanTiket(&film, &tiket);

    hargaFilm = hitungHargaFilm(film);
    hargaTiket = hitungHargaTiket(tiket);

    totalHarga = hargaFilm + hargaTiket;

    printf("\nApakah Anda member bioskop? (1 untuk Ya, 0 untuk Tidak): ");
    scanf("%d", &member);

    diskon = hitungDiskon(totalHarga, member);
    totalHarga -= diskon;

    if (member == 1)
    {
        printf("Anda mendapat diskon 10%%\n");
    }

    tampilkanTotalHarga(totalHarga);
    prosesPembayaran(totalHarga);

    return 0;
}

void tampilkanDashboard()
{
    printf("=== SELAMAT DATANG DI BIOSKOP ===\n");
    printf("1. Film Pilihan:\n");
    printf("   1. Avengers\n");
    printf("   2. Spiderman\n");
    printf("   3. Batman\n");
    printf("   4. Superman\n");
    printf("   5. Ironman\n");

    printf("\n2. Jenis Tiket:\n");
    printf("   1. Ekonomi\n");
    printf("   2. Bisnis\n");
    printf("   3. Utama\n");
}

void pilihFilmDanTiket(int *film, int *tiket)
{
    printf("\nMasukkan pilihan film (1-5): ");
    scanf("%d", film);
    printf("Masukkan jenis tiket (1-3): ");
    scanf("%d", tiket);
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

float hitungDiskon(float totalHarga, int member)
{
    if (member == 1)
    {
        return totalHarga * 0.10;
    }
    return 0;
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
        printf("Terima kasih! Pembayaran Anda tepat.\n");
    }
}
