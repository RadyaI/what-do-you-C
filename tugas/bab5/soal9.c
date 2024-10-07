#include <stdio.h>
#include <string.h>

int main(){
    char input[5];

    printf("Masukkan 4 Karakter: ");
    scanf("%4s", input);

    if(strcmp(input, "abcd") == 0){
        printf("Proses berhasil.\n");
    } else {
        printf("Masukkan Ulang. \n");
    }

    return 0;
}
