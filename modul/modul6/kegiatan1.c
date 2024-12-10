#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    int id;
    char nama[50];
    char kategori[30];
    float harga;
    int stok;
} Produk;

void tampilkanMenu() {
    printf("\nManajemen Toko Elektronik\n");
    printf("1. Tambah Produk Baru\n");
    printf("2. Tampilkan Daftar Produk\n");
    printf("3. Update Informasi Produk\n");
    printf("4. Hapus Produk\n");
    printf("5. Keluar\n");
    printf("Pilih menu: ");
}

void tambahProduk(FILE *file) {
    Produk produkBaru;
    FILE *tempFile;
    int idExists;
    
    printf("\nMasukkan ID Produk: ");
    scanf("%d", &produkBaru.id);

    tempFile = fopen("produk_toko.txt", "r");
    if (tempFile == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    idExists = 0;
    while (fscanf(tempFile, "%d\n%[^\n]\n%[^\n]\n%f\n%d\n", 
                  &produkBaru.id, produkBaru.nama, produkBaru.kategori, 
                  &produkBaru.harga, &produkBaru.stok) != EOF) {
        if (produkBaru.id == produkBaru.id) {
            printf("ID SUDAH TERDAFTAR, silakan masukkan ID yang berbeda.\n");
            idExists = 1;
            break;
        }
    }
    fclose(tempFile);

    if (!idExists) {
        printf("Masukkan Nama Produk: ");
        getchar(); 
        fgets(produkBaru.nama, sizeof(produkBaru.nama), stdin);
        produkBaru.nama[strcspn(produkBaru.nama, "\n")] = 0; 
        printf("Masukkan Kategori Produk: ");
        fgets(produkBaru.kategori, sizeof(produkBaru.kategori), stdin);
        produkBaru.kategori[strcspn(produkBaru.kategori, "\n")] = 0;
        printf("Masukkan Harga Produk: ");
        scanf("%f", &produkBaru.harga);
        printf("Masukkan Stok Produk: ");
        scanf("%d", &produkBaru.stok);

        file = fopen("produk_toko.txt", "a");
        if (file == NULL) {
            printf("Gagal membuka file.\n");
            return;
        }
        fprintf(file, "%d\n%s\n%s\n%.2f\n%d\n", produkBaru.id, produkBaru.nama, produkBaru.kategori, produkBaru.harga, produkBaru.stok);
        fclose(file);
        printf("Produk berhasil ditambahkan!\n");
    }
}

void tampilkanProduk(FILE *file) {
    Produk produk;
    file = fopen("produk_toko.txt", "r");
    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    printf("\nDaftar Produk Toko:\n");
    while (fscanf(file, "%d\n%[^\n]\n%[^\n]\n%f\n%d\n", &produk.id, produk.nama, produk.kategori, &produk.harga, &produk.stok) != EOF) {
        printf("\nID Produk: %d\n", produk.id);
        printf("Nama Produk: %s\n", produk.nama);
        printf("Kategori Produk: %s\n", produk.kategori);
        printf("Harga: %.2f\n", produk.harga);
        printf("Stok: %d\n", produk.stok);
    }
    fclose(file);
}

void updateProduk(FILE *file) {
    Produk produk;
    int idProduk;
    int found = 0;
    FILE *tempFile;

    printf("\nMasukkan ID Produk yang ingin diupdate: ");
    scanf("%d", &idProduk);

    file = fopen("produk_toko.txt", "r");
    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Gagal membuka file sementara.\n");
        fclose(file);
        return;
    }

    while (fscanf(file, "%d\n%[^\n]\n%[^\n]\n%f\n%d\n", &produk.id, produk.nama, produk.kategori, &produk.harga, &produk.stok) != EOF) {
        if (produk.id == idProduk) {
            found = 1;
            printf("Masukkan Nama Produk baru: ");
            getchar(); 
            fgets(produk.nama, sizeof(produk.nama), stdin);
            produk.nama[strcspn(produk.nama, "\n")] = 0;
            printf("Masukkan Kategori Produk baru: ");
            fgets(produk.kategori, sizeof(produk.kategori), stdin);
            produk.kategori[strcspn(produk.kategori, "\n")] = 0;
            printf("Masukkan Harga Produk baru: ");
            scanf("%f", &produk.harga);
            printf("Masukkan Stok Produk baru: ");
            scanf("%d", &produk.stok);
        }

        fprintf(tempFile, "%d\n%s\n%s\n%.2f\n%d\n", produk.id, produk.nama, produk.kategori, produk.harga, produk.stok);
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove("produk_toko.txt");
        rename("temp.txt", "produk_toko.txt");
        printf("Produk berhasil diupdate.\n");
    } else {
        printf("Produk dengan ID %d tidak ditemukan.\n", idProduk);
    }
}

void hapusProduk(FILE *file) {
    Produk produk;
    int idProduk;
    int found = 0;
    FILE *tempFile;

    printf("\nMasukkan ID Produk yang ingin dihapus: ");
    scanf("%d", &idProduk);

    file = fopen("produk_toko.txt", "r");
    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Gagal membuka file sementara.\n");
        fclose(file);
        return;
    }

    while (fscanf(file, "%d\n%[^\n]\n%[^\n]\n%f\n%d\n", &produk.id, produk.nama, produk.kategori, &produk.harga, &produk.stok) != EOF) {
        if (produk.id == idProduk) {
            found = 1;
            continue;
        }

        fprintf(tempFile, "%d\n%s\n%s\n%.2f\n%d\n", produk.id, produk.nama, produk.kategori, produk.harga, produk.stok);
    }

    fclose(file);
    fclose(tempFile);

    if (found) {
        remove("produk_toko.txt");
        rename("temp.txt", "produk_toko.txt");
        printf("Produk berhasil dihapus.\n");
    } else {
        printf("Produk dengan ID %d tidak ditemukan.\n", idProduk);
    }
}

int main() {
    FILE *file;
    int pilihan;

    printf("Selamat datang di Manajemen Toko Elektronik!\n");
    printf("Program ini memungkinkan Anda untuk mengelola data produk elektronik di toko.\n");

    while (1) {
        tampilkanMenu();
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambahProduk(file);
                break;
            case 2:
                tampilkanProduk(file);
                break;
            case 3:
                updateProduk(file);
                break;
            case 4:
                hapusProduk(file);
                break;
            case 5:
                printf("Terima kasih! Program selesai.\n");
                return 0;
            default:
                printf("Pilihan tidak valid! Coba lagi.\n");
        }
    }

    return 0;
}
