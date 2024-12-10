#include <stdio.h>

void tulisDataMahasiswa();
void bacaDataMahasiswa();

int main() {
    int pilihan;

    while (1) {
        printf("Pilih aksi:\n");
        printf("1. Tulis data mahasiswa\n");
        printf("2. Baca data mahasiswa\n");
        printf("3. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tulisDataMahasiswa();
                break;
            case 2:
                bacaDataMahasiswa();
                break;
            case 3:
                printf("Keluar dari program.\n");
                return 0;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }

    return 0;
}

void tulisDataMahasiswa() {
    FILE *file = fopen("data_mahasiswa.txt", "w");
    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    int jumlah;
    printf("Masukkan jumlah mahasiswa yang ingin ditambahkan: ");
    scanf("%d", &jumlah);

    char nama[50], programStudi[50];
    char nim[20];

    for (int i = 0; i < jumlah; i++) {
        printf("Masukkan nama mahasiswa ke-%d: ", i + 1);
        scanf(" %[^\n]", nama);
        printf("Masukkan NIM mahasiswa ke-%d: ", i + 1);
        scanf("%s", nim);
        printf("Masukkan Program Studi mahasiswa ke-%d: ", i + 1);
        scanf(" %[^\n]", programStudi);

        fprintf(file, "Nama: %s\n", nama);
        fprintf(file, "NIM: %s\n", nim);
        fprintf(file, "Program Studi: %s\n", programStudi);
        fprintf(file, "\n");
    }

    fclose(file);
    printf("Data mahasiswa berhasil ditulis ke file.\n");
}

void bacaDataMahasiswa() {
    FILE *file = fopen("data_mahasiswa.txt", "r");
    if (file == NULL) {
        printf("Gagal membuka file. Pastikan data sudah ditulis terlebih dahulu.\n");
        return;
    }

    char buffer[255];
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);
    printf("\nData mahasiswa berhasil dibaca dari file.\n");
}
