#include <stdio.h>

int main()
{
    int status;

    printf("Input 1 untuk menyalakan lampu \nInput 0 untuk mematikan lampu\n\n");
    printf("Masukkan pilihan: ");
    scanf("%d", &status);

    if (status == 1)
    {
        printf("Ting* lampu menyala");
    }
    else if (status == 0)
    {
        printf("Tap* lampu mati");
    }
    else
    {
        printf("Konslet mas~");
    }

    return 0;
}