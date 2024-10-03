#include <stdio.h>

void getKalori();
float hitungKalori(float pertama, float kedua, float ketiga);

int main()
{
    getKalori();
    return 0;
}

void getKalori()
{
    const float batasHarian = 2500;
    float mPertama, mKedua, mKetiga, hasil;

    printf("\n===== Program Penghitung Kalori Harian =====\n");
    printf("Masukkan kalori pertama: ");
    scanf("%f", &mPertama);

    printf("Masukkan kalori kedua: ");
    scanf("%f", &mKedua);

    printf("Masukkan kalori ketiga: ");
    scanf("%f", &mKetiga);

    do
    {
        hasil = hitungKalori(mPertama, mKedua, mKetiga);
    } while (mPertama < 0 || mKedua < 0 || mKetiga < 0);

    printf("\nTotal Kalori: %.0f\n", hasil);
    if (hasil > batasHarian)
    {
        printf("Total Kalori Melebihi Batas, Diet broo!");
    }
    else if (hasil > batasHarian - 500)
    {
        printf("Kalori anda terpenuhi, Mantap broo!");
    }
    else if (hasil < batasHarian - 500)
    {
        printf("Kalori anda kurang, makan broo!");
    }
}

float hitungKalori(float pertama, float kedua, float ketiga)
{
    float hasil;

    hasil = pertama + kedua + ketiga;

    return hasil;
}