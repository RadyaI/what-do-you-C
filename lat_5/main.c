#include <stdio.h>

float luaslingkaran(float radius);

int main()
{

    float hasil;
    hasil = luaslingkaran(7);

    printf("Luas Lingkaran: %.2f", hasil);
    return 0;
}

float luaslingkaran(float radius)
{

    float L, phi, r;

    phi = 3.142;
    r = radius;
    L = phi * r * r;

    return L;
}