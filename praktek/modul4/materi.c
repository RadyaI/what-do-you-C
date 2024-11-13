#include <stdio.h>

int main()
{
    int tinggi = 5;
    for (int baris = 1; baris <= tinggi; baris++)
    {
        for (int kolom = 0; kolom < baris; kolom++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}