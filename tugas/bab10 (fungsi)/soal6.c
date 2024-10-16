#include <stdio.h>

int isPositive(int num) {
    return (num > 0) ? 1 : 0;
}

int main() {
    int number;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &number);

    if (isPositive(number)) {
        printf("%d adalah bilangan positif\n", number);
    } else {
        printf("%d bukan bilangan positif\n", number);
    }

    return 0;
}
