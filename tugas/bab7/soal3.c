#include <stdio.h>

int main() {
    float arr[] = {1.2, 3.4, 5.6, 7.8, 9.0};

    for(int i = 0; i < 5; i++) {
        printf("%.1f ", arr[i]);
    }

    return 0;
}
