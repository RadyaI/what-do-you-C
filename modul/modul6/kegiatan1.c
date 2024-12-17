#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_CATEGORY_LENGTH 50

void create();
void get();
void update();
void delete();
int checkIDExist(int id);

int main()
{
    int menu;

    printf("\n===== SELAMAT DATANG DI TOKO ELEKTRONIK KAMI =====\n");
    printf("Program Manajemen Toko Elektronik\n");
    printf("Menu:\n");
    printf("1. Tambah Produk Baru\n");
    printf("2. Tampilkan Daftar Produk\n");
    printf("3. Update Informasi Produk\n");
    printf("4. Hapus Produk\n");
    printf("5. Keluar\n");

    while (1)
    {
        printf("\nPilih menu (1/2/3/4/5): ");
        if (scanf("%d", &menu) != 1)
        {
            printf("ERROR INPUT!\n");
            return 1;
        }

        switch (menu)
        {
        case 1:
            create();
            break;
        case 2:
            get();
            break;
        case 3:
            update();
            break;
        case 4:
            delete ();
            break;
        case 5:
            printf("Terima kasih telah menggunakan program ini.\n");
            return 0;
        default:
            printf("Menu tidak valid, coba lagi.\n");
        }
    }

    return 0;
}

void create()
{
    FILE *file = fopen("produk_toko.txt", "a");
    if (file == NULL)
    {
        printf("Gagal membuka file.\n");
        return;
    }

    int id;
    char name[MAX_NAME_LENGTH], category[MAX_CATEGORY_LENGTH];
    float price;
    int stock;

    while (1)
    {
        printf("Masukkan ID Produk: ");
        scanf("%d", &id);
        if (checkIDExist(id))
        {
            printf("ID SUDAH TERDAFTAR! Masukkan ID yang berbeda.\n");
        }
        else
        {
            break;
        }
    }

    printf("Masukkan Nama Produk: ");
    getchar();
    fgets(name, MAX_NAME_LENGTH, stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Masukkan Kategori Produk: ");
    fgets(category, MAX_CATEGORY_LENGTH, stdin);
    category[strcspn(category, "\n")] = '\0';

    printf("Masukkan Harga Produk: ");
    scanf("%f", &price);

    printf("Masukkan Stok Produk: ");
    scanf("%d", &stock);

    fprintf(file, "%d,%s,%s,%.2f,%d\n", id, name, category, price, stock);
    printf("Produk berhasil ditambahkan!\n");

    fclose(file);
}

void get()
{
    FILE *file = fopen("produk_toko.txt", "r");
    if (file == NULL)
    {
        printf("Gagal membuka file.\n");
        return;
    }

    int id;
    char name[MAX_NAME_LENGTH], category[MAX_CATEGORY_LENGTH];
    float price;
    int stock;

    printf("\n===== DAFTAR PRODUK =====\n");
    while (fscanf(file, "%d,%99[^,],%49[^,],%f,%d\n", &id, name, category, &price, &stock) != EOF)
    {
        printf("ID: %d, Nama: %s, Kategori: %s, Harga: %.2f, Stok: %d\n", id, name, category, price, stock);
    }

    fclose(file);
}

void update()
{
    FILE *file = fopen("produk_toko.txt", "r");
    if (file == NULL)
    {
        printf("Gagal membuka file.\n");
        return;
    }

    int id;
    char name[MAX_NAME_LENGTH], category[MAX_CATEGORY_LENGTH];
    float price;
    int stock;
    int targetID;
    int found = 0;

    printf("Masukkan ID Produk yang ingin diupdate: ");
    scanf("%d", &targetID);

    FILE *tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL)
    {
        printf("Gagal membuka file sementara.\n");
        fclose(file);
        return;
    }

    while (fscanf(file, "%d,%99[^,],%49[^,],%f,%d\n", &id, name, category, &price, &stock) != EOF)
    {
        if (id == targetID)
        {
            found = 1;

            printf("Masukkan Nama Produk Baru: ");
            getchar();
            fgets(name, MAX_NAME_LENGTH, stdin);
            name[strcspn(name, "\n")] = '\0';

            printf("Masukkan Kategori Produk Baru: ");
            fgets(category, MAX_CATEGORY_LENGTH, stdin);
            category[strcspn(category, "\n")] = '\0';

            printf("Masukkan Harga Produk Baru: ");
            scanf("%f", &price);

            printf("Masukkan Stok Produk Baru: ");
            scanf("%d", &stock);

            fprintf(tempFile, "%d,%s,%s,%.2f,%d\n", id, name, category, price, stock);
        }
        else
        {
            fprintf(tempFile, "%d,%s,%s,%.2f,%d\n", id, name, category, price, stock);
        }
    }

    if (!found)
    {
        printf("Produk dengan ID %d tidak ditemukan.\n", targetID);
    }

    fclose(file);
    fclose(tempFile);

    remove("produk_toko.txt");
    rename("temp.txt", "produk_toko.txt");

    if (found)
    {
        printf("Produk dengan ID %d berhasil diupdate.\n", targetID);
    }
}

void delete()
{
    FILE *file = fopen("produk_toko.txt", "r");
    FILE *tempFile = fopen("temp.txt", "w");
    if (file == NULL || tempFile == NULL)
    {
        printf("Gagal membuka file.\n");
        return;
    }

    int id;
    char name[MAX_NAME_LENGTH], category[MAX_CATEGORY_LENGTH];
    float price;
    int stock;
    int targetID;
    int found = 0;

    printf("Masukkan ID Produk yang ingin dihapus: ");
    scanf("%d", &targetID);

    while (fscanf(file, "%d,%99[^,],%49[^,],%f,%d\n", &id, name, category, &price, &stock) != EOF)
    {
        if (id != targetID)
        {
            fprintf(tempFile, "%d,%s,%s,%.2f,%d\n", id, name, category, price, stock);
        }
        else
        {
            found = 1;
        }
    }

    if (found)
    {
        printf("Produk dengan ID %d berhasil dihapus.\n", targetID);
    }
    else
    {
        printf("Produk dengan ID %d tidak ditemukan.\n", targetID);
    }

    fclose(file);
    fclose(tempFile);

    remove("produk_toko.txt");
    rename("temp.txt", "produk_toko.txt");
}

int checkIDExist(int id)
{
    FILE *file = fopen("produk_toko.txt", "r");
    if (file == NULL)
    {
        return 0;
    }

    int fileID;
    char name[MAX_NAME_LENGTH], category[MAX_CATEGORY_LENGTH];
    float price;
    int stock;

    while (fscanf(file, "%d,%99[^,],%49[^,],%f,%d\n", &fileID, name, category, &price, &stock) != EOF)
    {
        if (fileID == id)
        {
            fclose(file);
            return 1;
        }
    }

    fclose(file);
    return 0;
}
