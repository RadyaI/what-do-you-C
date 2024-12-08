#include <stdio.h>

int main()
{
    char str1[100], str2[100], result[200];
    char *ptr1 = str1;
    char *ptr2 = str2;
    char *ptrResult = result;

    printf("Masukkan string pertama: ");
    fgets(ptr1, sizeof(str1), stdin);
    printf("Masukkan string kedua: ");
    fgets(ptr2, sizeof(str2), stdin);   

    while (*ptr1 != '\0' && *ptr1 != '\n')
    {
        *ptrResult = *ptr1;
        ptrResult++;
        ptr1++;
    }

    while (*ptr2 != '\0' && *ptr2 != '\n')
    {
        *ptrResult = *ptr2;
        ptrResult++;
        ptr2++;
    }

    *ptrResult = '\0';

    printf("\nHasil penggabungan: %s\n", result);
    return 0;
}
