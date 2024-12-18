#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void show();
void add();
void update();
void delete_product(); 

int main() {
    FILE *file;

    enum {
        ADD = 1,
        SHOW,
        UPDATE,
        DELETE,
        EXIT
    };

    int pilihan;
    int kondisi = 1;

    file = fopen("data_produk.txt", "r");
    if (file == NULL) {
        file = fopen("data_produk.txt", "w");
        printf("Berhasil membuat file!\n");
    }
    fclose(file);
	printf("Selamat datang di program Manajemen Toko Elektronik\n");
    do {
    	
        printf("\nMenu:\n");
        printf("1. Tambah Produk Baru\n");
        printf("2. Tampilkan Daftar Produk\n");
        printf("3. Update Informasi Produk\n");
        printf("4. Hapus Produk\n");
        printf("5. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);
        getchar(); // ben ra buffer

        switch (pilihan) {
            case ADD:
                add();
                break;
            case SHOW:
                show();
                break;
            case UPDATE:
                update();
                break;
            case DELETE:
                delete_product();
                break;
            case EXIT:
                kondisi = 0;
                printf("Terima Kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    } while (kondisi);

    return 0;
}

void add() {
    FILE *file;
    char idProduk[10];
    char namaProduk[100];
    char kategoriProduk[100];
    long long hargaProduk;
    int stokProduk;
    char data[200];
    int found = 0;

    file = fopen("data_produk.txt", "a+"); 
    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    printf("Masukkan ID Produk: ");
    fgets(idProduk, sizeof(idProduk), stdin);
    idProduk[strcspn(idProduk, "\n")] = '\0';

   
    while (fgets(data, sizeof(data), file)) {
        if (strstr(data, idProduk) && strstr(data, "ID: ")) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("ID sudah digunakan, mohon masukkan kembali data.\n");
    } else {
        printf("Masukkan Nama Produk: ");
        fgets(namaProduk, sizeof(namaProduk), stdin);
        namaProduk[strcspn(namaProduk, "\n")] = '\0';

        printf("Masukkan Kategori Produk: ");
        fgets(kategoriProduk, sizeof(kategoriProduk), stdin);
        kategoriProduk[strcspn(kategoriProduk, "\n")] = '\0';

        printf("Masukkan Harga Produk: ");
        scanf("%lld", &hargaProduk);

        printf("Masukkan Stok Produk: ");
        scanf("%d", &stokProduk);
        getchar(); 

        fprintf(file, "ID: %s\nNama: %s\nKategori: %s\nHarga: %lld\nStok: %d\n\n", 
                idProduk, namaProduk, kategoriProduk, hargaProduk, stokProduk);

        printf("Produk berhasil ditambahkan!\n");
    }

    fclose(file);
}

void show() {
    FILE *file;
    char data[200];

    file = fopen("data_produk.txt", "r");
    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    printf("\nDaftar Produk:\n");
    while (fgets(data, sizeof(data), file)) {
        printf("%s", data);
    }

    fclose(file);
}

void update() {
    FILE *file, *tempFile;
    char buffer[300], idProdukCari[10];
    int stokProdukBaru;
    char namaProdukBaru[100], kategoriProdukBaru[100];
    long long hargaProdukBaru;
    int found = 0;
    int i;

    printf("Masukkan ID Produk yang ingin di-update: ");
    fgets(idProdukCari, sizeof(idProdukCari), stdin);
    idProdukCari[strcspn(idProdukCari, "\n")] = '\0';

    file = fopen("data_produk.txt", "r");
    tempFile = fopen("temp_produk.txt", "w");

    if (!file || !tempFile) {
        printf("Gagal membuka file.\n");
        return;
    }

    while (fgets(buffer, sizeof(buffer), file)) {
        if (strstr(buffer, idProdukCari) && strstr(buffer, "ID: ")) {
            found = 1;
            printf("Masukkan Nama Baru: ");
            fgets(namaProdukBaru, sizeof(namaProdukBaru), stdin);
            printf("Masukkan Kategori Baru: ");
            fgets(kategoriProdukBaru, sizeof(kategoriProdukBaru), stdin);
            printf("Masukkan Harga Baru: ");
            scanf("%lld", &hargaProdukBaru);
            printf("Masukkan Stok Baru: ");
            scanf("%d", &stokProdukBaru);
            getchar();

            fprintf(tempFile, "ID: %s\nNama: %sKategori: %sHarga: %lld\nStok: %d\n\n", 
                    idProdukCari, namaProdukBaru, kategoriProdukBaru, hargaProdukBaru, stokProdukBaru);

            
            for ( i = 0; i < 4; i++) fgets(buffer, sizeof(buffer), file);
        } else {
            fputs(buffer, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("data_produk.txt");
    rename("temp_produk.txt", "data_produk.txt");

    if (found)
        printf("Produk berhasil di-update.\n");
    else
        printf("ID tidak ditemukan.\n");
}

void delete_product() {
    FILE *file, *tempFile;
    char buffer[300], idProdukCari[10];
    int found = 0;
	int i;
    printf("Masukkan ID Produk yang ingin dihapus: ");
    fgets(idProdukCari, sizeof(idProdukCari), stdin);
    idProdukCari[strcspn(idProdukCari, "\n")] = '\0';

    file = fopen("data_produk.txt", "r");
    tempFile = fopen("temp_produk.txt", "w");

    if (!file || !tempFile) {
        printf("Gagal membuka file.\n");
        return;
    }

    while (fgets(buffer, sizeof(buffer), file)) {
        if (strstr(buffer, idProdukCari) && strstr(buffer, "ID: ")) {
            found = 1;
            for ( i = 0; i < 4; i++) fgets(buffer, sizeof(buffer), file); // Skip 4 lines
        } else {
            fputs(buffer, tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("data_produk.txt");
    rename("temp_produk.txt", "data_produk.txt");

    if (found)
        printf("Produk berhasil dihapus.\n");
    else
        printf("ID tidak ditemukan.\n");
  
}
