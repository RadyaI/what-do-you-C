#include <stdio.h>

int main()
{
    int arr[] = {0, 2, 4, 6, 8, 10};
    int *ptr = arr;

    printf("Bilangan genap antara 0-10: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", ptr[i]);

        printf("\n");
    }
    return 0;
}
