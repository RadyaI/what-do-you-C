#include <stdio.h>

const float PHI = 3.14159;

int main()
{

    float r, hLuas, hKeliling;

    printf("Masukkan jari-jari: ");
    scanf("%f", &r);

    if (r <= 0)
    {
        printf("Jari-jari tidak boleh negatif");
        return 0;
    }
    else
    {
        hLuas = PHI * r * r;
        hKeliling = 2 * PHI * r;

        printf("\nLuas Lingkaran: %.2f\n", hLuas);
        printf("Keliling Lingkaran: %.2f", hKeliling);
    }

    return 0;
}