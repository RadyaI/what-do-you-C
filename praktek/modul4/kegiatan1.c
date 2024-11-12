#include <stdio.h>

int inputJumlahTransaksi();
void inputTransaksi(int jumlahTransaksi, int *total);
void tambahTransaksi(int *total, int *jumlahTransaksi);
void tampilkanTotal(int total);

int main() {
    int total = 0;             
    int jumlahTransaksi = 0;       
    jumlahTransaksi = inputJumlahTransaksi();

    inputTransaksi(jumlahTransaksi, &total);
    tambahTransaksi(&total, &jumlahTransaksi);
    tampilkanTotal(total);

    return 0;
}

int inputJumlahTransaksi() {
    int jumlah;
    printf("Masukkan jumlah transaksi yang ingin dicatat: ");
    scanf("%d", &jumlah);
    return jumlah;
}

void inputTransaksi(int jumlahTransaksi, int *total) {
    int transaksi;
    for (int i = 1; i <= jumlahTransaksi;) {
        printf("Masukkan nilai transaksi ke-%d: ", i);
        scanf("%d", &transaksi);

        if (transaksi < 0) {
            printf("Transaksi tidak boleh negatif.\n");
            continue;
        }
        i++;
        *total += transaksi;
    }
}

void tambahTransaksi(int *total, int *jumlahTransaksi) {
    char pilihan;
    int transaksi;

    while (1) {
        printf("\nApakah Anda ingin menambah transaksi lain? (y/n): ");
        scanf(" %c", &pilihan);

        if (pilihan == 'n' || pilihan == 'N') {
            break;
        } else if (pilihan == 'y' || pilihan == 'Y') {
            printf("Masukkan nilai transaksi tambahan: ");
            scanf("%d", &transaksi);

            if (transaksi < 0) {
                printf("Transaksi tidak boleh negatif.\n");
                continue;
            }
            
            *total += transaksi;
            (*jumlahTransaksi)++;
            printf("Total sementara adalah: Rp.%d\n", *total);
        } else {
            printf("Pilihan tidak valid. Silakan masukkan 'y' atau 'n'.\n");
        }
    }
}


void tampilkanTotal(int total) {
    printf("\nTotal akhir dari semua transaksi: Rp.%d\n", total);
}
