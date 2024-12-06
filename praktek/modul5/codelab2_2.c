#include <stdio.h>

int main()
{
    char produk[][50] = {"Sikat Gigi", "Odol", "Kipas"};
    int toko[2][3] = {{5000, 8000, 6000}, {3000, 7000, 9000}};
// [2] total array[3] total data
    printf("Total penjualan untuk setiap produk: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s: %d\n", produk[i], toko[0][i] + toko[1][i]);
        // Toko[0][i] 0 ambil data dari index yang pertama, untuk yang Toko[1][i] 1 untuk ambil data dari index yang kedua
    }

    return 0;
}