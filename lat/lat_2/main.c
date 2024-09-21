    #include <stdio.h>

    int main(){
        int umur;
        char nama[50];

        printf("Masukkan nama: ");
        scanf("%49s", nama);
        printf("Masukkan umur: ");
        scanf("%d", &umur);

        printf("\nNama anda adalah: %s \n", nama);
        printf("Umur anda: %d", umur);

        return 0;
    }