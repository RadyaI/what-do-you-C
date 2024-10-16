#include <stdio.h>
#include <string.h>

int main(){
    char input[3];

    printf("Masukkan 2 karakter: ");
    scanf("%2s", input);

    if(strcmp(input, "ab") == 0 || strcmp(input, "ba") == 0){
        printf("Silahkan Masuk!");
    } else {
        printf("Identifikasi Gagal");
    }

    return 0;
}