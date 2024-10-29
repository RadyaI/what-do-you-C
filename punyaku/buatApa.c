#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1, *ptr2;
    int i;

    // Alokasi dengan malloc (tanpa inisialisasi)
    ptr1 = (int *)malloc(5 * sizeof(int));
    printf("Nilai dalam memori yang dialokasikan dengan malloc:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", ptr1[i]);  // Nilainya bisa berupa nilai acak
    }
    printf("\n");

    // Alokasi dengan calloc (dengan inisialisasi 0)
    ptr2 = (int *)calloc(5, sizeof(int));
    printf("Nilai dalam memori yang dialokasikan dengan calloc:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", ptr2[i]);  // Nilainya pasti 0
    }
    printf("\n");

    // Jangan lupa untuk membebaskan memori
    free(ptr1);
    free(ptr2);

    return 0;
}
