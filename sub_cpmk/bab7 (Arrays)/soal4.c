#include <stdio.h>

int main() {
    int arr[5][2] = {{1,70}, {2,85}, {3,90}, {4,75}, {5,85}};

    for(int i = 0; i < 5; i++) {
        printf("{%d, %d}\n", arr[i][0], arr[i][1]);
    }

    return 0;
}
