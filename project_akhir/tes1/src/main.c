#include <stdio.h>
#include "../include/book.h"
#include "../include/database.h"

int main() {
    load_database();

    int pilihan;
    do {
        printf("\n=== Menu ===\n");
        printf("1. Tambah Buku\n");
        printf("2. Lihat Buku\n");
        printf("3. Update Buku\n");
        printf("4. Hapus Buku\n");
        printf("5. Simpan & Keluar\n");
        printf("Pilih opsi: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambah_buku();
                break;
            case 2:
                lihat_buku();
                break;
            case 3:
                update_buku();
                break;
            case 4:
                hapus_buku();
                break;
            case 5:
                simpan_database();
                printf("Data disimpan, keluar program...\n");
                break;
            default:
                printf("Opsi tidak valid!\n");
        }
    } while (pilihan != 5);

    return 0;
}
