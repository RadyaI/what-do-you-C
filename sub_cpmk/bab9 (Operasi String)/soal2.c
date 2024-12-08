#include <stdio.h>

void concatStrings(char *str1, char *str2, char *result)
{
    char *ptrResult = result;

    while (*str1 != '\0' && *str1 != '\n')
    {
        *ptrResult = *str1;
        ptrResult++;
        str1++;
    }

    while (*str2 != '\0' && *str2 != '\n')
    {
        *ptrResult = *str2;
        ptrResult++;
        str2++;
    }

    *ptrResult = '\0';
}

int main()
{
    char str1[100], str2[100], result[200];

    printf("Masukkan string pertama: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Masukkan string kedua: ");
    fgets(str2, sizeof(str2), stdin);

    concatStrings(str1, str2, result);

    printf("\nHasil penggabungan: %s\n", result);
    return 0;
}
