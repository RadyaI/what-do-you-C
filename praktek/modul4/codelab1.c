#include <stdio.h>

int main()
{
    int num;
    int total = 0;
    int count = 0;
    float average;

    while (1)
    {
        printf("Masukkan bilangan bulat positif (masukkan bilangan negatif untuk berhenti):");
        if(scanf("%d", &num) != 1){
            printf("Input Tidak Valid!");
            return 1;
        }

        if (num < 0)
        {
            break;
        }

        total += num;
        count++;
    }

    if (count > 0)
    {
        average = (float)total / count;
        printf("\nTotal bilangan: %d\n", total);
        printf("Rata-rata bilangan: %.2f\n", average);
    }
    else
    {
        printf("Tidak ada bilangan yang dimasukkan.\n");
    }

    return 0;
}
