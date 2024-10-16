#include <stdio.h>

float hitungRataRata(int arr[], int panjang)
{
    int sum = 0;
    for (int i = 0; i < panjang; i++)
    {
        sum += arr[i];
    }
    return (float)sum / panjang;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    // Ukuran int 4 karena ada 5 jadi 4 * 5 = 20
    // ukuran int yang pertama [0] 4
    // 20 / 4 = 5
    int panjang = sizeof(arr) / sizeof(arr[0]);

    printf("Rata-rata elemen array: %.2f\n", hitungRataRata(arr, panjang));

    return 0;
}
