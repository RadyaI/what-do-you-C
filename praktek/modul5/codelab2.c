#include <stdio.h>

int main()
{

    char produk[][50] = {"Sikat Gigi", "Odol", "Kipas"};
    int toko1[] = {5000, 8000, 6000};
    int toko2[] = {3000, 7000, 9000};

    printf("Total penjualan untuk setiap produk: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s: %d\n", produk[i], toko1[i] + toko2[i]);
    }

    return 0;
}