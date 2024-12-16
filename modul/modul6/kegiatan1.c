#include <stdio.h>

void get();
void create();
void update();
void delete();

int main()
{
    int menu;

    printf("\n===== SELAMAT DATANG DI TOKO KAMI =====\n");
    printf("MENU: \n1.LIST BARANG\n2.TAMBAH BARANG\n3.UPDATE BARANG\n4.HAPUS BARANG\n5.KELUAR\n\n");

    while (1)
    {
        printf("PILIH: 1/2/3/4/5: ");
        if (scanf("%d", &menu) != 1)
        {
            printf("ERROR INPUT!");
            return 1;
        }
        else if (menu >= 1 && menu <= 5)
        {
            break;
        }
        else
        {
            printf("INVALID INPUT!\n");
        }
    }

    return 0;
}

void get()
{
}

void create()
{
}

void update()
{
}

void delete()
{
}