#include <stdio.h>

void balikNilai(int *a, int *b, int *c, int *d) {
    int temp;
    
    temp = *a; *a = *d; *d = temp;
    temp = *b; *b = *c; *c = temp;
}

int main() {
    int a = 1, b = 2, c = 3, d = 4;

    printf("Sebelum dibalik: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);
    balikNilai(&a, &b, &c, &d);
    printf("Setelah dibalik: a=%d, b=%d, c=%d, d=%d\n", a, b, c, d);

    return 0;
}
