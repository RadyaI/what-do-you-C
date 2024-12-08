#include <stdio.h>

int isPrima(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int number;

    printf("Masukkan sebuah bilangan bulat positif: ");
    scanf("%d", &number);

    if (isPrima(number)) {
        printf("%d adalah bilangan prima\n", number);
    } else {
        printf("%d bukan bilangan prima\n", number);
    }

    return 0;
}
