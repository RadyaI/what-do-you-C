#include <stdio.h>

int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    int a, b, c;

    printf("Masukkan 3 bilangan bulat: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Nilai maksimum: %d\n", findMax(a, b, c));

    return 0;
}
