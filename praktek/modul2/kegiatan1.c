#include <stdio.h>
#include <stdbool.h>

const float PHI = 3.14159;

float luaslingkaran(float radius);
float kelilinglingkaran(float radius);
float ambilInputRadius();
bool validasiInputRadius(float radius);

int main()
{
    float radius = ambilInputRadius();

    if (!validasiInputRadius(radius))
    {
        printf("Jari-jari tidak boleh negatif atau nol.\n");
        return 1;
    }

    float luas = luaslingkaran(radius);
    float keliling = kelilinglingkaran(radius);

    printf("\nLuas lingkaran: %.2f\n", luas);
    printf("Keliling lingkaran: %.2f\n", keliling);

    return 0;
}

float luaslingkaran(float radius)
{
    return PHI * radius * radius;
}

float kelilinglingkaran(float radius)
{
    return 2 * PHI * radius;
}

float ambilInputRadius()
{
    float radius;
    printf("Masukkan nilai jari-jari lingkaran: ");
    scanf("%f", &radius);
    return radius;
}

bool validasiInputRadius(float radius)
{
    return (radius > 0);
}
