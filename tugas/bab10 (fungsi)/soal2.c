#include <stdio.h>

void tulisMundur(int arr[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");   
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Elemen array terbalik: ");
    tulisMundur(arr, size);

    return 0;
}
