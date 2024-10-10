#include <stdio.h>
#include <string.h>
#include "../include/database.h"
#include "../include/book.h"

// Fungsi untuk memuat data buku dari file
void load_database() {
    FILE *file = fopen("database.txt", "r");
    if (file == NULL) {
        printf("Tidak dapat membuka file database.txt\n");
        return;
    }

    while (fscanf(file, "%d\n", &daftar_buku[jumlah_buku].id) != EOF) {
        fgets(daftar_buku[jumlah_buku].judul, sizeof(daftar_buku[jumlah_buku].judul), file);
        strtok(daftar_buku[jumlah_buku].judul, "\n");  // Menghapus newline di akhir

        fgets(daftar_buku[jumlah_buku].pengarang, sizeof(daftar_buku[jumlah_buku].pengarang), file);
        strtok(daftar_buku[jumlah_buku].pengarang, "\n");  // Menghapus newline di akhir

        fscanf(file, "%d\n", &daftar_buku[jumlah_buku].tahun_terbit);

        jumlah_buku++;
    }

    fclose(file);
}

// Fungsi untuk menyimpan data buku ke file
void simpan_database() {
    FILE *file = fopen("database.txt", "w");
    if (file == NULL) {
        printf("Tidak dapat membuka file database.txt\n");
        return;
    }

    for (int i = 0; i < jumlah_buku; i++) {
        fprintf(file, "%d\n", daftar_buku[i].id);
        fprintf(file, "%s\n", daftar_buku[i].judul);
        fprintf(file, "%s\n", daftar_buku[i].pengarang);
        fprintf(file, "%d\n", daftar_buku[i].tahun_terbit);
    }

    fclose(file);
}
