#include <stdio.h>
#include <stdbool.h>
float luaslingkaran(float radius);
float kelilinglingkaran(float radius);
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
        printf("Pilih opsi (1, 2, atau 3): ");
        scanf("%d", &pilihan);
        if (pilihan == 1)
        {
            do
            {
                radius = ambilInputRadius();
                isValid = validasiInputRadius(radius);
                if (!isValid)
                {
                    printf("Radius tidak boleh negatif atau nol. Silakan coba lagi.\n");
                }
            } while (!isValid);
            hasil = luaslingkaran(radius);
            printf("Luas lingkaran dengan radius %.2f adalah: %.2f\n\n", radius, hasil);
        }
        else if (pilihan == 2)
        {
            do
            {
                radius = ambilInputRadius();
                isValid = validasiInputRadius(radius);
                if (!isValid)
                {
                    printf("Radius tidak boleh negatif atau nol. Silakan coba lagi.\n");
                }
            } while (!isValid);
            hasil = kelilinglingkaran(radius);
            printf("Keliling lingkaran dengan radius %.2f adalah: %.2f\n\n", radius, hasil);
        }
        else if (pilihan == 3)
        {
            printf("Matur tengkyu, bye bye\n");
        }
        else
        {
            printf("Ga ada pilihan itu bro. Coba lagi.\n");
        }
    } while (pilihan != 3);
    return 0;
}
float luaslingkaran(float radius)
{
    float L;
    L = PHI * radius * radius;
    return L;
}
float kelilinglingkaran(float radius)
{
    float K;
    K = 2 * PHI * radius;
    return K;
}
void tampilkanMenu()
{
    printf("\n====== Program Penghitung Lingkaran ======\n");
    printf("1. Hitung luas lingkaran\n");
    printf("2. Hitung keliling lingkaran\n");
    printf("3. Keluar\n");
    printf("=========================================\n");
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