#include <stdio.h>

int main()
{
    float tinggi_air;
    char status[4][10] = {"AMAN", "WASPADA", "SIAGA 2", "SIAGA 1"};

    printf("Masukkan Tinggi Air (meter):");
    scanf("%f", &tinggi_air);

    if (tinggi_air > 650)
    {
        printf("Status: %s", status[3]);
    }
    else if (tinggi_air >= 600.1 && tinggi_air <= 650.0)
    {
        printf("Status: %s", status[2]);
    }
    else if (tinggi_air >= 500.1 && tinggi_air <= 600.0)
    {
        printf("Status: %s", status[1]);
    }
    else
    {
        printf("Status: %s", status[0]);
    }

    return 0;
}