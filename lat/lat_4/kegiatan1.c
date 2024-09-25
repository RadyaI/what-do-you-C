#include <stdio.h>

int main() {
    char nama[50];
    char nim[15];
    float nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;

    printf("--- Program Penghitung Nilai Akhir Mahasiswa ---\n");

    printf("Masukkan Nama Mahasiswa: ");
    scanf("%s", &nama);  
    printf("Masukkan NIM Mahasiswa: ");
    scanf("%s", &nim);    
    printf("Masukkan Nilai Tugas (0-100): ");
    scanf("%f", &nilai_tugas);
    printf("Masukkan Nilai UTS (0-100): ");
    scanf("%f", &nilai_uts);
    printf("Masukkan Nilai UAS (0-100): ");
    scanf("%f", &nilai_uas);

    nilai_akhir = (nilai_tugas * 0.20) + (nilai_uts * 0.35) + (nilai_uas * 0.45);

    printf("------------------------------------------------\n");
    printf("Nama Mahasiswa: %s\n", nama);
    printf("NIM Mahasiswa: %s\n", nim);
    printf("Nilai Tugas: %.2f\n", nilai_tugas);
    printf("Nilai UTS: %.2f\n", nilai_uts);
    printf("Nilai UAS: %.2f\n", nilai_uas);
    printf("Nilai Akhir: %.2f\n", nilai_akhir);
    printf("------------------------------------------------\n");

    return 0;
}
