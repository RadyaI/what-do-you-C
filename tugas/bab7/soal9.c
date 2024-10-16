#include <stdio.h>

int main() {
    char arr[2][2][2] = {{{'a', 'b'}, {'c', 'd'}}, {{'e', 'f'}, {'g', 'h'}}};

    printf("Huruf yang ditandai: \n");
    printf("%c ", arr[0][1][1]);
    printf("%c ", arr[1][0][1]);  
    printf("%c\n", arr[1][1][0]); 

    return 0;
}
