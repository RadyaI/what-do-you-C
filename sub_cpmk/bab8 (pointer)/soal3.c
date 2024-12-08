#include <stdio.h>

int main() {
    int arr[5];
    int *ptr = arr;

    printf("Masukkan 5 angka:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr[i]);
    }

    printf("Angka yang dimasukkan:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    printf("\n");
    return 0;
}
