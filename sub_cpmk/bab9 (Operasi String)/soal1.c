#include <stdio.h>

void copyString(char *source, char *destination)
{
    while (*source != '\0' && *source != '\n')
    {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

int main()
{
    char source[100], destination[100];

    printf("Masukkan string yang ingin disalin: ");
    fgets(source, sizeof(source), stdin);

    copyString(source, destination);

    printf("String yang disalin: %s\n", destination);
    return 0;
}
