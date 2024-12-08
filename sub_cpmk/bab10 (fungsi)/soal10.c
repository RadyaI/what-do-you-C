#include <stdio.h>

void fibonacci(int n) {
    int a = 1, b = 1, next;
    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);
    
    for (int i = 3; i <= n; i++) {
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int n;

    printf("Masukkan jumlah deret Fibonacci: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
