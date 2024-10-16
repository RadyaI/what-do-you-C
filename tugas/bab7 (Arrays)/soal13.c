#include <stdio.h>

int main()
{
    int arr[3][2][3] = {
        {{1, 1, 1}, {2, 2, 2}},
        {{3, 3, 3}, {4, 4, 4}},
        {{5, 5, 5}, {6, 6, 6}}};

    printf("Angka yang ditandai: \n");
    printf("%d ", arr[0][0][0]);
    printf("%d ", arr[0][1][0]);
    printf("%d ", arr[1][0][0]);
    printf("%d ", arr[1][1][0]);
    printf("%d ", arr[2][0][0]);
    printf("%d\n", arr[2][1][0]);

    return 0;
}
