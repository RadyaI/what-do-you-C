#include <stdio.h>

int main()
{

    char produk[][50] = {"Sikat Gigi", "Odol", "Kipas"};
    int toko[2][3] = {{5000, 8000, 6000},
                      {3000, 7000, 9000}};

    printf("Total penjualan untuk setiap produk: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s: %d\n", produk[i], toko[0][i] + toko[1][i]);
    }

    return 0;
}
