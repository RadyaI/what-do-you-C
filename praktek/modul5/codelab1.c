#include <stdio.h>
#include <string.h>

int main()
{

    char nama[][50] = {"Alice", "Bob", "Charlie", "David", "Eva"};
    int nilai[] = {85, 90, 78, 92, 88};

    printf("Daftar nama dan nilai siswa sebelum diubah: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s: %d\n", nama[i], nilai[i]);
    }

    printf("\nDaftar nama dan nilai siswa setelah diubah: \n");
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(nama[i], "David") == 0)
        {
            nilai[i] = 95;
        }

        printf("%s: %d\n", nama[i], nilai[i]);
    }

    return 0;
}