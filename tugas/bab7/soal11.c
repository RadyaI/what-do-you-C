#include <stdio.h>

int main() {
    int matriks[3][4] = {
        {12, 15, 6, 4},
        {8, 10, 45, 1},
        {2, 16, 5, 11}
    };

    printf("Matriks:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
