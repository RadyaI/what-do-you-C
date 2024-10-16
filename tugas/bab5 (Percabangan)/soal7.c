#include <stdio.h>

int main()
{

    int jam, menit, detik;
    char separator1, separator2;

    printf("Masukkan waktu (jam:menit:detik): ");
    scanf("%d%c%d%c%d", &jam, &separator1, &menit, &separator2, &detik);

    if (separator1 == ':' && separator2 == ':' &&
        jam >= 0 && jam < 24 &&
        menit >= 0 && menit < 60 &&
        detik >= 0 && detik < 60)
    {
        printf("Waktu valid: %02d:%02d:%02d\n", jam, menit, detik);
    }
    else
    {
        printf("Waktu tidak valid. \n");
    }

    return 0;
}