#include <stdio.h>

int main()
{
    char huruf;

    printf("Masukkan sebuah huruf: ");
    scanf("%c", &huruf);

    if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o' || huruf == 'A' || huruf == 'I' || huruf == 'U' || huruf == 'E' || huruf == 'O')
    {
        printf("Huruf %c adalah konsonan", huruf);
    }
    else
    {
        printf("Huruf %c bukan huruf konsonan", huruf);
    }

    return 0;
}