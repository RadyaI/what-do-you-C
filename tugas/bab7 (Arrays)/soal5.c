#include <stdio.h>

int main() {
    int arr[50];
    int num = 1;

    for(int i = 0; i < 50; i++) {
        arr[i] = num;
        num += 2;
    }

    for(int i = 0; i < 50; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
