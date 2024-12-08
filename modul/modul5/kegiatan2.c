#include <stdio.h>

void minta_jumlah_mahasiswa(int *jumlah_mahasiswa);
void masukkan_nilai_mahasiswa(int jumlah_mahasiswa, int nilai[][3]);
void hitung_rata_rata_per_matkul(int jumlah_mahasiswa, int nilai[][3], float rata_rata[]);
float hitung_rata_rata_keseluruhan(float rata_rata[]);
void tampilkan_tabel(int jumlah_mahasiswa, int nilai[][3], float rata_rata[], float rata_rata_keseluruhan);

int main()
{
    int jumlah_mahasiswa;

    minta_jumlah_mahasiswa(&jumlah_mahasiswa);

    int nilai[jumlah_mahasiswa][3];

    masukkan_nilai_mahasiswa(jumlah_mahasiswa, nilai);

    float rata_rata[3];
    hitung_rata_rata_per_matkul(jumlah_mahasiswa, nilai, rata_rata);

    float rata_rata_keseluruhan = hitung_rata_rata_keseluruhan(rata_rata);

    tampilkan_tabel(jumlah_mahasiswa, nilai, rata_rata, rata_rata_keseluruhan);

    return 0;
}

void minta_jumlah_mahasiswa(int *jumlah_mahasiswa)
{
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", jumlah_mahasiswa);
}

void masukkan_nilai_mahasiswa(int jumlah_mahasiswa, int nilai[][3])
{
    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        printf("Masukkan nilai untuk mahasiswa ke-%d (Matematika, Fisika, Kimia): ", i + 1);
        scanf("%d %d %d", &nilai[i][0], &nilai[i][1], &nilai[i][2]);
    }
}

void hitung_rata_rata_per_matkul(int jumlah_mahasiswa, int nilai[][3], float rata_rata[])
{
    for (int j = 0; j < 3; j++)
    {
        int total = 0;
        for (int i = 0; i < jumlah_mahasiswa; i++)
        {
            total += nilai[i][j];
        }
        rata_rata[j] = (float)total / jumlah_mahasiswa;
    }
}

float hitung_rata_rata_keseluruhan(float rata_rata[])
{
    return (rata_rata[0] + rata_rata[1] + rata_rata[2]) / 3;
}

void tampilkan_tabel(int jumlah_mahasiswa, int nilai[][3], float rata_rata[], float rata_rata_keseluruhan)
{
    printf("\nData Nilai Ujian:\n");
    printf("Mahasiswa\tMatematika\tFisika\tKimia\n");
    for (int i = 0; i < jumlah_mahasiswa; i++)
    {
        printf("Mhs %d\t\t%d\t\t%d\t%d\n", i + 1, nilai[i][0], nilai[i][1], nilai[i][2]);
    }
    printf("\nRata-rata Nilai:\n");
    printf("Matematika: %.2f\n", rata_rata[0]);
    printf("Fisika: %.2f\n", rata_rata[1]);
    printf("Kimia: %.2f\n", rata_rata[2]);
    printf("Rata-rata Keseluruhan: %.2f\n", rata_rata_keseluruhan);
}
