#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}

int main()
{
    int n;
    char fruits[10][50];

    printf("Masukkan jumlah buah (maksimal 10): ");
    scanf("%d", &n);

    if (n > 10 || n <= 0)
    {
        printf("Jumlah buah harus antara 1 sampai 10.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Masukkan nama buah ke-%d: ", i + 1);
        scanf("%s", fruits[i]);
    }

    printf("\nNama buah dalam urutan yang diinputkan:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", fruits[i]);
    }
    qsort(fruits, n, sizeof(fruits[0]), compare);

    printf("\nNama buah dalam urutan abjad:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", fruits[i]);
    }

    return 0;
}
