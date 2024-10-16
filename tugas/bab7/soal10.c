#include <stdio.h>

int main() {
    char *arr[] = {"jakarta", "surabaya", "medan"};

    for(int i = 0; i < 3; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
