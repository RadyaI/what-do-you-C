#include <stdio.h>

void main()
{
    char judul[3][50] = {"Pemrograman C", "Algoritma dan Struktur Data", "Dasar-dasar Komputer"};
    char penulis[3][30] = {"John Doe", "Jane Smith", "Alice Johnson"};
    int t_terbit[3] = {2020, 2019, 2021};

    for (int i = 0; i < 3; i++)
    {
        printf("Judul: %s \nPenulis: %s \nTahun Terbit: %d \n\n", judul[i], penulis[i], t_terbit[i]);
    }
}
