#include <stdio.h>

int main()
{

    float harga1, harga2, harga3, total, diskon, total_bayar;

    printf("Masukkan harga barang 1: ");
    scanf("%f", &harga1);
    printf("Masukkan harga barang 2: ");
    scanf("%f", &harga2);
    printf("Masukkan harga barang 3: ");
    scanf("%f", &harga3);

    total = harga1 + harga2 + harga3;

    if (total > 100000)
    {
        diskon = total * 0.10;
        total_bayar = total - diskon;
    }
    else
    {
        total_bayar = total;
    }

    printf("Total harga yang harus dibayar: %.2f\n", total_bayar);

    return 0;
}