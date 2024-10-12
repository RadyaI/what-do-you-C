#include <stdio.h>

#define PI 3.14159

int main()
{
    float jariJari;
    float luas, keliling;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &jariJari);

    if (jariJari <= 0)
    {
        printf("Input tidak valid. Pastikan jari-jari lebih besar dari 0.\n");
        return 1;
    }

    luas = PI * jariJari * jariJari;
    keliling = 2 * PI * jariJari;

    printf("Luas lingkaran: %.2f\n", luas);
    printf("Keliling lingkaran: %.2f\n", keliling);

    return 0;
}
