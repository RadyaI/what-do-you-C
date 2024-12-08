#include <stdio.h>

#define PHI 3.14159;

int main()
{

    float jarijari, luasLingkaran, kelilingLingkaran;

    printf("Masukkan jari-jari: ");
    scanf("%f", &jarijari);

    if (jarijari <= 0)
    {
        printf("Jari-jari tidak boleh negatif");
        return 0;
    }
    luasLingkaran = PHI * jarijari * jarijari;
    kelilingLingkaran = 2 * PHI * jarijari;

    printf("\nLuas Lingkaran: %.2f\n", luasLingkaran);
    printf("Keliling Lingkaran: %.2f", kelilingLingkaran);
    return 0;
}