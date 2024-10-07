#include <stdio.h>

int main(){

    int angka;

    printf("Masukkan angka 4 digit: ");
    scanf("%d", &angka);

    if(angka % 4 == 0 && angka % 5 == 0){
        printf("Angka Valid");
    } else {
        printf("Angka Tidak Valid");
    }

    return 0;
}