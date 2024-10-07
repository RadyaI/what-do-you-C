#include <stdio.h>
void main()
{
    int nilai = 80;
    char grade;

    // if (nilai >= 80)
    // {
    //     grade = 'A';
    //     printf("nilai dapat %c\n", grade);
    // }
    // else if (nilai >= 60)
    // {
    //     grade = 'B';
    //     printf("nilai dapat %c\n", grade);
    // }
    // else
    // {
    //     grade = 'C';
    //     printf("nilai dapat %c\n", grade);
    // }

    switch (grade)
    {
    case 'A':
        printf("Selamat Anda Lulus");
        break;

    case 'B':
        printf("Anda Lulus dengan remidi");
        break;

    case 'C':
        printf("Anda Tidak Lulus");
        break;
    default:
        break;
    }
}