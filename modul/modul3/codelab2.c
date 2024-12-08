#include <stdio.h>

enum kelas
{
    Economy = 500,
    Business = 1000,
    FirstClass = 1500
};

void menu();
void selectClass();

int main()
{
    menu();
    selectClass();
    return 0;
}

void menu()
{
    printf("Pilih Kelas Tiket: ");
    printf("\n1. Economy\n2. Business\n3. First Class\n");
}

void selectClass()
{
    int input;

    printf("Masukkan Pilihan (1-3): ");
    scanf("%d", &input);

    switch (input)
    {
    case 1:
        printf("Harga tiket kelas ekonomi: $%d", Economy);
        break;
    case 2:
        printf("Harga tiket kelas bisnis: $%d", Business);
        break;
    case 3:
        printf("Harga tikat First Class: $%d", FirstClass);
        break;
    default:
        printf("Input tidak valid!");
        break;
    }
}