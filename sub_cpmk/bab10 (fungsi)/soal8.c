#include <stdio.h>

int absolut(float num) {
    return (num < 0) ? -num : num;
}

int main() {
    float number;

    printf("Masukkan sebuah bilangan pecahan: ");
    scanf("%f", &number);
    
    printf("Nilai absolut: %.2f\n", absolut(number));

    return 0;
}
