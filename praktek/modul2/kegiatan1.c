#include <stdio.h>
#include <stdbool.h>

const float PHI = 3.14159;

float luasLingkaran(float radius);
float kelilingLingkaran(float radius);
void ambilInputRadius(float *radius);
bool validasiInputRadius(float radius);

int main()
{
    float radius;
    ambilInputRadius(&radius);

    if (!validasiInputRadius(radius))
    {
        printf("Jari-jari tidak boleh negatif atau nol.\n");
        return 1;
    }

    float luas = luasLingkaran(radius);
    float keliling = kelilingLingkaran(radius);

    printf("\nLuas lingkaran: %.2f\n", luas);
    printf("Keliling lingkaran: %.2f\n", keliling);

    return 0;
}

float luasLingkaran(float radius)
{
    return PHI * radius * radius;
}

float kelilingLingkaran(float radius)
{
    return 2 * PHI * radius;
}

void ambilInputRadius(float *radius)
{
    printf("Masukkan nilai jari-jari lingkaran: ");
    scanf("%f", radius);
}

bool validasiInputRadius(float radius)
{
    return radius > 0;
}
