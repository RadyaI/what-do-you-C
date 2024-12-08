#include <stdio.h> // Menggunakan library stdio

#define PHI 3.14159 // Set nilai PHI menggunakan define

int main()
{

    /* Membuat variabel jarijari, luasLingkaran, kelilingLingkaran 
    dengan tipe data float */
    float jarijari, luasLingkaran, kelilingLingkaran;

    //Minta memasukkan jari jari
    printf("Masukkan jari-jari: ");
    scanf("%f", &jarijari); // Memasukkan hasil input ke variabel jarijari

    // Cek apakah variabel jari jari kurang dari 0
    if (jarijari <= 0)
    {
        printf("Jari-jari tidak boleh negatif");
        // jika variabel jari jari kurang dari nol program berhenti
        return 0;
    }

    // Menghitung luas dan keliling lingkaran menggunakan rumus
    luasLingkaran = PHI * jarijari * jarijari;
    kelilingLingkaran = 2 * PHI * jarijari;


    // Menampilkan hasil dari perhitungan di atas
    printf("\nLuas Lingkaran: %.2f\n", luasLingkaran);
    printf("Keliling Lingkaran: %.2f", kelilingLingkaran);
    return 0;
}