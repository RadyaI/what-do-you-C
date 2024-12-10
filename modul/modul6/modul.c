#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *fptr;

    fptr = fopen("tes.txt", "w");

    if (!fptr)
    {
        printf("Gagal buat file");
    }
    else
    {
        printf("Berhasil");
    }

    return 0;
}