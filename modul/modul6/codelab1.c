#include <stdio.h>

int faktorial(int n);
int fibonacci(int n);

int main()
{
    int angka, n;

    printf("Masukkan angka untuk menghitung faktorial: ");
    scanf("%d", &angka);
    printf("Faktorial dari %d adalah: %d\n", angka, faktorial(angka));

    printf("Masukkan angka untuk menghasilkan deret Fibonacci: ");
    scanf("%d", &n);
    printf("Deret Fibonacci hingga suku ke-%d adalah: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}

int faktorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktorial(n - 1);
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
