#include <stdio.h>

int main()
{
    int age;
    int x, a, c;
    float y;
    char z;

    printf("Masukkan umur anda: ");
    scanf("%d", &age);

    printf("Masukkan nilai a: ");
    scanf("%d", &a);

    printf("Masukkan nilai x: ");
    scanf("%d", &x);

    printf("\n\nNilai x: %d dan Nilai A: %d\n", x, a);

    c = a + x;

    printf("Penjumlahan A dan X adalah: %d\n", c);
    printf("Your age is: %d", age);

    return 0;
}