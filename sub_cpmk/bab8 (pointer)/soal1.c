#include <stdio.h>

int main() {
    char arr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    char *ptr = arr;

    printf("Huruf A-J: \n");
    for(int i = 0; i < 10; i++) {
        printf("%c ", ptr[i]); 
    }

    printf("\n");
    return 0;
}
