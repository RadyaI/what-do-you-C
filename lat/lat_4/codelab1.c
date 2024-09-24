#include <stdio.h>

int main()
{
    int a, b;

    printf("Masukkan angka: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    printf("Penjumlahan: %d\n", sum);

    int min = a - b;
    printf("Pengurangan: %d\n", min);

    int product = a*b;
    printf("Perkalian: %d\n", product);

    if(b != 0){
        float division = (float) a / b; //Karena a,b di awal itu int jadi diconvert dulu ke int
        printf("Pembagian: %.2f", division);
    } else {
        printf("Tidak bisa pembagian dengan nilai 0");
    }

    return 0;
}