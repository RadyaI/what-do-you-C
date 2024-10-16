#include <stdio.h>

int main() {
    int arr[3][5] = {{1, 2, 3, 4, 5}, {2, 4, 6, 8, 10}, {3, 6, 9, 12, 15}};

    printf("Angka yang ditandai: \n");
    printf("%d ", arr[0][1]);
    printf("%d ", arr[1][2]);
    printf("%d\n", arr[2][3]);

    return 0;
}
