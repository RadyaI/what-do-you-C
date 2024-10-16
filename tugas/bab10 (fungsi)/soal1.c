#include <stdio.h>

float luasLingkaran(float radius) {
    return 3.14 * radius * radius;
}

int main() {
    float radius;

    printf("Masukkan radius lingkaran: ");
    scanf("%f", &radius);
    
    printf("Luas Lingkaran: %.2f\n", luasLingkaran(radius));

    return 0;
}
