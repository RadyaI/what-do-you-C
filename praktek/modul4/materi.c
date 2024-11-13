#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d", i);
        if (i == 3)
        {
            break;
        }
    }

    printf("\n");

    for (int j = 1; j <= 5; j++)
    {
        if (j == 3)
        {
            continue;
        }
        printf("%d", j);
    }

    printf("\n");

    return 0;
}