#include <stdio.h>
#include "../include/book.h"
#include "../include/database.h"

Buku daftar_buku[100];
int jumlah_buku = 0;

// Fungsi untuk menambah buku
void tambah_buku() {
    Buku buku;
    buku.id = jumlah_buku + 1;
    printf("Masukkan judul buku: ");
    getchar();  // Menggunakan getchar() agar dapat menangani input string dengan benar
    fgets(buku.judul, sizeof(buku.judul), stdin);
    strtok(buku.judul, "\n");  // Menghapus newline di akhir input

    printf("Masukkan pengarang: ");
    fgets(buku.pengarang, sizeof(buku.pengarang), stdin);
    strtok(buku.pengarang, "\n");  // Menghapus newline di akhir input

    printf("Masukkan tahun terbit: ");
    scanf("%d", &buku.tahun_terbit);

    daftar_buku[jumlah_buku] = buku;
    jumlah_buku++;

    // Simpan database setelah menambah buku
    simpan_database();
    printf("Buku berhasil ditambahkan!\n");
}

// Fungsi untuk melihat buku
void lihat_buku() {
    if (jumlah_buku == 0) {
        printf("Belum ada buku yang terdaftar.\n");
        return;
    }

    printf("\n=== Daftar Buku ===\n");
    for (int i = 0; i < jumlah_buku; i++) {
        Buku buku = daftar_buku[i];
        printf("ID: %d | Judul: %s | Pengarang: %s | Tahun: %d\n", 
               buku.id, buku.judul, buku.pengarang, buku.tahun_terbit);
    }
}

// Fungsi untuk update buku
void update_buku() {
    int id;
    printf("Masukkan ID buku yang ingin di-update: ");
    scanf("%d", &id);

    for (int i = 0; i < jumlah_buku; i++) {
        if (daftar_buku[i].id == id) {
            printf("Masukkan judul baru: ");
            getchar();  // Agar newline dari input sebelumnya tidak terbaca
            fgets(daftar_buku[i].judul, sizeof(daftar_buku[i].judul), stdin);
            strtok(daftar_buku[i].judul, "\n");

            printf("Masukkan pengarang baru: ");
            fgets(daftar_buku[i].pengarang, sizeof(daftar_buku[i].pengarang), stdin);
            strtok(daftar_buku[i].pengarang, "\n");

            printf("Masukkan tahun terbit baru: ");
            scanf("%d", &daftar_buku[i].tahun_terbit);

            printf("Buku berhasil di-update!\n");

            // Simpan database setelah update buku
            simpan_database();
            return;
        }
    }

    printf("Buku dengan ID %d tidak ditemukan.\n", id);
}

// Fungsi untuk menghapus buku
void hapus_buku() {
    int id;
    printf("Masukkan ID buku yang ingin dihapus: ");
    scanf("%d", &id);

    for (int i = 0; i < jumlah_buku; i++) {
        if (daftar_buku[i].id == id) {
            for (int j = i; j < jumlah_buku - 1; j++) {
                daftar_buku[j] = daftar_buku[j + 1];  // Shift array
            }
            jumlah_buku--;

            printf("Buku berhasil dihapus!\n");

            // Simpan database setelah menghapus buku
            simpan_database();
            return;
        }
    }

    printf("Buku dengan ID %d tidak ditemukan.\n", id);
}
