#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, attempts = 0;

    srand(time(0));
    target = rand() % 100 + 1; 

    printf("Tebak angka dari 1 hingga 100!\n");

    do {
        printf("Masukkan tebakan Anda: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > target) {
            printf("Terlalu besar!\n");
        } else if (guess < target) {
            printf("Terlalu kecil!\n");
        } else {
            printf("Selamat! Anda menebak angka yang benar dalam %d percobaan.\n", attempts);
        }

    } while (guess != target);

    return 0;
}
