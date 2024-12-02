#include <stdio.h> // Header file standar untuk input dan output

int main() {
    int transaksi, total, ulang; // Deklarasi variabel untuk menyimpan transaksi, total, dan opsi ulang

    do {
        total = 0; // Mengatur ulang total menjadi 0 setiap kali memulai pencatatan baru
        printf("=== Pencatatan Transaksi ===\n"); // Menampilkan judul program
        printf("Masukkan transaksi selanjutnya (gunakan 0 untuk menyelesaikan):\n"); // Instruksi untuk pengguna

        // Loop untuk mencatat transaksi
        while (1) { // Loop tak terbatas yang hanya berhenti jika kondisi tertentu terpenuhi
            printf("> "); // Menampilkan prompt untuk memasukkan transaksi
            scanf("%d", &transaksi); // Membaca input transaksi dari pengguna
            if (transaksi == 0) { // Jika pengguna memasukkan 0
                break; // Keluar dari loop
            }
            total += transaksi; // Menambahkan nilai transaksi ke total
        }

        // Menampilkan total transaksi setelah loop selesai
        printf("\nTotal dari transaksi tersebut adalah: %d\n", total);

        // Menanyakan kepada pengguna apakah ingin mencatat transaksi lagi
        printf("Apakah Anda ingin mencatat transaksi lagi? (1=Ya, 0=Tidak): ");
        scanf("%d", &ulang); // Membaca input pilihan pengguna (1 untuk ya, 0 untuk tidak)

    } while (ulang == 1); // Ulangi proses jika pengguna memasukkan 1

    printf("\nTerima kasih!\n"); // Menampilkan pesan akhir setelah keluar dari loop
    return 0; // Program selesai dengan status sukses
}
