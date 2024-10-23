#include <stdio.h>

int main() {
    int day, month, year;
    char dash;

    printf("Masukkan tanggal (format: dd-mm-yyyy): ");
    scanf("%d%c%d%c%d", &day, &dash, &month, &dash, &year);

    char* nama_bulan;
    switch (month) {
        case 1: nama_bulan = "Januari"; break;
        case 2: nama_bulan = "Februari"; break;
        case 3: nama_bulan = "Maret"; break;
        case 4: nama_bulan = "April"; break;
        case 5: nama_bulan = "Mei"; break;
        case 6: nama_bulan = "Juni"; break;
        case 7: nama_bulan = "Juli"; break;
        case 8: nama_bulan = "Agustus"; break;
        case 9: nama_bulan = "September"; break;
        case 10: nama_bulan = "Oktober"; break;
        case 11: nama_bulan = "November"; break;
        case 12: nama_bulan = "Desember"; break;
        default: nama_bulan = "Bulan tidak valid"; break;
    }

    if (month >= 1 && month <= 12) {
        printf("%d %s %d\n", day, nama_bulan, year);
    } else {
        printf("Bulan yang dimasukkan tidak valid.\n");
    }

    return 0;
}
