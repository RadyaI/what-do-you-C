#include <stdio.h>
#include <stdbool.h>
float luaslingkaran(float radius);
void tampilkanMenu();
float ambilInputRadius();
bool validasiInputRadius(float radius);
#define PHI 3.14159
int main()
{
    int pilihan;
    float radius, hasil;
    bool isValid = false;
    do
    {
        tampilkanMenu();
        printf("Pilih opsi (1 atau 2): ");
        scanf("%d", &pilihan);
        switch (pilihan)
        {
        case 1:
            do
            {
                radius = ambilInputRadius();
                isValid = validasiInputRadius(radius);
                if (!isValid)
                {
                    printf("Radius gabole negatif atau nol. Coba lagi lah.\n");
                }
            } while (!isValid);
            hasil = luaslingkaran(radius);
            printf("Luas lingkaran dengan radius %.2f adalah: %.2f\n\n", radius, hasil);
            break;
        case 2:
            printf("Woke semoga kamu tambah pintar.\n");
            break;
        default:
            printf("Pilih yang bener wak!\n");
        }
    } while (pilihan != 2);
    return 0;
}
float luaslingkaran(float radius)
{
    float L;
    L = PHI * radius * radius;
    return L;
}
void tampilkanMenu()
{
    printf("\n====== Program Penghitung Luas Lingkaran ======\n");
    printf("1. Hitung luas lingkaran\n");
    printf("2. Keluar\n");
    printf("=============================================\n");
}
float ambilInputRadius()
{
    float radius;
    printf("Masukkan nilai radius: ");
    scanf("%f", &radius);
    return radius;
}
bool validasiInputRadius(float radius)
{
    return (radius > 0);
}
