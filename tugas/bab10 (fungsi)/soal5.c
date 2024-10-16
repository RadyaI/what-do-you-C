#include <stdio.h>

int isEven(int num) {
    return (num % 2 == 0) ? 1 : 0;
}

int main() {
    int number;

    printf("Masukkan sebuah bilangan: ");
    scanf("%d", &number);

    if (isEven(number)) {
        printf("%d adalah bilangan genap\n", number);
    } else {
        printf("%d adalah bilangan ganjil\n", number);
    }

    return 0;
}
