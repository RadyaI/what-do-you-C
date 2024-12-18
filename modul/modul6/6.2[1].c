#include <stdio.h>      // Mengimpor library untuk fungsi input/output standar seperti printf dan scanf
#include <string.h>     // Mengimpor library untuk fungsi manipulasi string seperti fgets dan strstr
#include <stdlib.h>     // Mengimpor library untuk fungsi umum seperti malloc dan free (tidak digunakan dalam kode ini)

void show();           // Deklarasi fungsi untuk menampilkan daftar produk
void add();            
void update();         
void delete_product(); 
int main() {
    FILE *file;       // Pointer file untuk membuka dan menulis file

    enum {             // Mendeklarasikan enumerasi untuk pilihan menu
        ADD = 1,       
        SHOW,          
        UPDATE,        
        DELETE,        
        EXIT           
    };

    int pilihan;       // Variabel untuk menyimpan pilihan menu
    int kondisi = 1;   // Kondisi untuk loop utama program

    file = fopen("data_produk.txt", "r"); // Membuka file "data_produk.txt" dalam mode baca r
    if (file == NULL) {  // Jika file tidak ada (NULL), maka buat file baru dengan mode tulis w
        file = fopen("data_produk.txt", "w");
        printf("Berhasil membuat file!\n"); // Menampilkan pesan bahwa file berhasil dibuat
    }
    fclose(file);  // Menutup file setelah pengecekan

    printf("Selamat datang di program Manajemen Toko Elektronik\n");

    do {  // Loop untuk terus menampilkan menu sampai pengguna memilih untuk keluar
        printf("\nMenu:\n");
        printf("1. Tambah Produk Baru\n");
        printf("2. Tampilkan Daftar Produk\n");
        printf("3. Update Informasi Produk\n");
        printf("4. Hapus Produk\n");
        printf("5. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);  // Mengambil input dari pengguna
        getchar(); // Membersihkan buffer setelah input angka

        switch (pilihan) {  // Menentukan tindakan berdasarkan pilihan pengguna
            case ADD:
                add(); // Memanggil fungsi add() untuk menambah produk
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
                kondisi = 0;  // Menghentikan loop jika memilih exit
                printf("Terima Kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");  
        }
    } while (kondisi);  // Teruskan loop selama kondisi bernilai 1 (true)

    return 0; // Program selesai
}

vvoid add() {
    FILE *file;
    char idProduk[10];       // Variabel untuk ID produk
    char namaProduk[100];    
    char kategoriProduk[100]; 
    long long hargaProduk;   
    int stokProduk;          
    char data[200];          
    int found = 0;           

    file = fopen("data_produk.txt", "a+");  // Membuka file untuk menambah data (append)
    if (file == NULL) {  // Jika gagal membuka file
        printf("Gagal membuka file.\n");
        return;  // Kembali dari fungsi jika gagal membuka file
    }

    // Meminta input ID produk
    printf("Masukkan ID Produk: ");
    fgets(idProduk, sizeof(idProduk), stdin);  // Membaca input ID produk dari pengguna
    idProduk[strcspn(idProduk, "\n")] = '\0'; // Menghapus karakter newline di akhir string

    // Mengecek apakah ID produk sudah ada dalam file
    while (fgets(data, sizeof(data), file)) {  
        if (strstr(data, idProduk) && strstr(data, "ID: ")) { // Jika ID ditemukan
            found = 1;  // Tandai bahwa ID sudah ada
            break;
        }
    }

    if (found) {  // Jika ID sudah ada, beri tahu pengguna untuk memasukkan ID lain
        printf("ID sudah digunakan, mohon masukkan kembali data.\n");
    } else {
        // Meminta input lainnya jika ID belum ada
        printf("Masukkan Nama Produk: ");
        fgets(namaProduk, sizeof(namaProduk), stdin);
        namaProduk[strcspn(namaProduk, "\n")] = '\0'; // Menghapus newline

        printf("Masukkan Kategori Produk: ");
        fgets(kategoriProduk, sizeof(kategoriProduk), stdin);
        kategoriProduk[strcspn(kategoriProduk, "\n")] = '\0'; // Menghapus newline

        printf("Masukkan Harga Produk: ");
        scanf("%lld", &hargaProduk); // Membaca harga produk

        printf("Masukkan Stok Produk: ");
        scanf("%d", &stokProduk); // Membaca stok produk
        getchar();  // Membersihkan buffer input

        // Menulis data produk baru ke file
        fprintf(file, "ID: %s\nNama: %s\nKategori: %s\nHarga: %lld\nStok: %d\n\n", 
                idProduk, namaProduk, kategoriProduk, hargaProduk, stokProduk);

        printf("Produk berhasil ditambahkan!\n");  // Menampilkan pesan sukses
    }

    fclose(file);  // Menutup file
}

void show() {
    FILE *file;
    char data[200];  // Variabel untuk membaca data dari file

    file = fopen("data_produk.txt", "r");  // Membuka file untuk membaca
    if (file == NULL) {  // Jika gagal membuka file
        printf("Gagal membuka file.\n");
        return;  // Kembali jika gagal membuka file
    }

    // Menampilkan daftar produk
    printf("\nDaftar Produk:\n");
    while (fgets(data, sizeof(data), file)) {  // Membaca setiap baris dari file
        printf("%s", data);  // Menampilkan data produk
    }

    fclose(file);  // Menutup file
}

void update() {
    FILE *file, *tempFile;
    char buffer[300], idProdukCari[10];  // Variabel untuk buffer dan ID produk yang ingin di-update
    int stokProdukBaru;  // Variabel untuk stok produk baru
    char namaProdukBaru[100], kategoriProdukBaru[100];  // Variabel untuk nama dan kategori baru
    long long hargaProdukBaru;  // Variabel untuk harga produk baru
    int found = 0;  // Variabel untuk menandakan apakah produk ditemukan
    int i;

    // Meminta input ID produk yang ingin di-update
    printf("Masukkan ID Produk yang ingin di-update: ");
    fgets(idProdukCari, sizeof(idProdukCari), stdin); 
    idProdukCari[strcspn(idProdukCari, "\n")] = '\0';  // Menghapus newline

    file = fopen("data_produk.txt", "r");  // Membuka file untuk membaca
    tempFile = fopen("temp_produk.txt", "w");  // Membuka file sementara untuk menulis perubahan

    if (!file || !tempFile) {  // Jika gagal membuka file
        printf("Gagal membuka file.\n");
        return;
    }

    // Membaca file baris per baris
    while (fgets(buffer, sizeof(buffer), file)) {
        if (strstr(buffer, idProdukCari) && strstr(buffer, "ID: ")) {  // Jika ID ditemukan
            found = 1;  // Tandai bahwa produk ditemukan
            // Meminta input produk yang baru
            printf("Masukkan Nama Baru: ");
            fgets(namaProdukBaru, sizeof(namaProdukBaru), stdin);

            printf("Masukkan Kategori Baru: ");
            fgets(kategoriProdukBaru, sizeof(kategoriProdukBaru), stdin);

            printf("Masukkan Harga Baru: ");
            scanf("%lld", &hargaProdukBaru);

            printf("Masukkan Stok Baru: ");
            scanf("%d", &stokProdukBaru);
            getchar();  // Membersihkan buffer

            // Menulis data produk yang diperbarui ke file sementara
            fprintf(tempFile, "ID: %s\nNama: %sKategori: %sHarga: %lld\nStok: %d\n\n", 
                    idProdukCari, namaProdukBaru, kategoriProdukBaru, hargaProdukBaru, stokProdukBaru);

            // Melewatkan data produk lama (4 baris per produk)
            for (i = 0; i < 4; i++) fgets(buffer, sizeof(buffer), file);
        } else {
            fputs(buffer, tempFile);  // Menyalin data yang tidak diubah ke file sementara
        }
    }

    fclose(file);  // Menutup file asli
    fclose(tempFile);  // Menutup file sementara

    remove("data_produk.txt");  // Menghapus file asli
    rename("temp_produk.txt", "data_produk.txt");  // Mengganti nama file sementara menjadi file asli

    if (found)
        printf("Produk berhasil di-update.\n");
    else
        printf("ID tidak ditemukan.\n");
}

void delete_product() {
    FILE *file, *tempFile;
    char buffer[300], idProdukCari[10];  // Variabel untuk buffer dan ID produk yang ingin dihapus
    int found = 0;  // Variabel untuk menandakan apakah produk ditemukan
    int i;

    // Meminta input ID produk yang ingin dihapus
    printf("Masukkan ID Produk yang ingin dihapus: ");
    fgets(idProdukCari, sizeof(idProdukCari), stdin); 
    idProdukCari[strcspn(idProdukCari, "\n")] = '\0';  // Menghapus newline

    file = fopen("data_produk.txt", "r");  // Membuka file untuk membaca
    tempFile = fopen("temp_produk.txt", "w");  // Membuka file sementara untuk menulis perubahan

    if (!file || !tempFile) {  // Jika gagal membuka file
        printf("Gagal membuka file.\n");
        return;
    }

    // Membaca file baris per baris
    while (fgets(buffer, sizeof(buffer), file)) {
        if (strstr(buffer, idProdukCari) && strstr(buffer, "ID: ")) {  // Jika ID ditemukan
            found = 1;  // Tandai bahwa produk ditemukan
            // Melewatkan 4 baris terkait produk yang dihapus
            for (i = 0; i < 4; i++) fgets(buffer, sizeof(buffer), file);
        } else {
            fputs(buffer, tempFile);  // Menyalin data yang tidak dihapus ke file sementara
        }
    }

    fclose(file);  // Menutup file asli
    fclose(tempFile);  // Menutup file sementara

    remove("data_produk.txt");  // Menghapus file asli
    rename("temp_produk.txt", "data_produk.txt");  // Mengganti nama file sementara menjadi file asli

    if (found)
        printf("Produk berhasil dihapus.\n");
    else
        printf("ID tidak ditemukan.\n");
}}
