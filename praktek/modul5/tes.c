#include <stdio.h>
#include <string.h>

int main()
{
    // Deklarasi array 2D untuk nama dan nilai
    char names[5][20] = {"Alice", "Bob", "Charlie", "David", "Eva"};
    int scores[5] = {85, 90, 78, 92, 88};
    int i, j;

    // Menampilkan daftar siswa dan nilai sebelum diubah
    printf("Daftar siswa dan nilai sebelum diubah:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s: %d\n", names[i], scores[i]);
    }

    // perulangan disini tak apus

    // Menampilkan daftar siswa dan nilai setelah diubah
    printf("\nDaftar siswa dan nilai setelah diubah:\n");
    for (j = 0; j < 5; j++)
    {
        // buat cek nilai/ubah pindah kesini
        if (strcmp(names[j], "David") == 0)
        {
            scores[j] = 95;
            break;
        }

        printf("%s: %d\n", names[j], scores[j]);
    }

    return 0;
}
