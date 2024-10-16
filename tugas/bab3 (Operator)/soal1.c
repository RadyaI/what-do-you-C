#include <stdio.h>

int main()
{
    int hasil_a, hasil_b, hasil_c, hasil_d, hasil_e, hasil_f, hasil_g;

    hasil_a = 2 + 3 * 5;
    hasil_b = 10 - 7 + 3 % 6;
    hasil_c = 3 % 7 / 2 - 1;
    hasil_d = 5 * 3 / 6 % 7;
    int x = 2;
    hasil_e = 3 * x++ - 4 * 7;
    hasil_f = 6 << 2;
    hasil_g = 12 >> 3;

    printf("Hasil ekspresi a: %d\n", hasil_a);
    printf("Hasil ekspresi b: %d\n", hasil_b);
    printf("Hasil ekspresi c: %d\n", hasil_c);
    printf("Hasil ekspresi d: %d\n", hasil_d);
    printf("Hasil ekspresi e: %d\n", hasil_e);
    printf("Hasil ekspresi f: %d\n", hasil_f);
    printf("Hasil ekspresi g: %d\n", hasil_g);
}