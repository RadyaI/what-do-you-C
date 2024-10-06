#include <stdio.h>

// Fungsi dideklarasiin dulu
// Apa jadinya kalo tidak dideklarasiin? => Error karena pada fungsi main sudah memanggil fungsi getUmur()
// tapi di atas fungsi main tidak ada apa apa

// fyi file kodingan di eksekusi dari atas ke bawah

int getUmur();

int main()
{
    // Disini fungsi getUmur() dipanggil
    int u = getUmur();
    printf("Umur saya %d", u);

    return 0;
}

// Nah disini baru dipake
int getUmur()
{
    int umurKu = 20;
    return umurKu;
}