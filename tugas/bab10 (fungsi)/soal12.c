#include <stdio.h>

float hitungVolumeSilinder(float radius, float tinggi) {
    const float phi = 3.14;
    return phi * radius * radius * tinggi;
}

int main() {
    float radius, tinggi;

    printf("Masukkan radius silinder: ");
    scanf("%f", &radius);
    
    printf("Masukkan tinggi silinder: ");
    scanf("%f", &tinggi);

    printf("Volume silinder: %.2f\n", hitungVolumeSilinder(radius, tinggi));

    return 0;
}
