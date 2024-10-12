#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printChoice(int choice) {
    if (choice == 1) {
        printf("Batu");
    } else if (choice == 2) {
        printf("Gunting");
    } else if (choice == 3) {
        printf("Kertas");
    }
}

int main() {
    int playerChoice, computerChoice;

    srand(time(0));

    printf("Pilih: 1 = Batu, 2 = Gunting, 3 = Kertas\n");
    printf("Masukkan pilihan Anda: ");
    scanf("%d", &playerChoice);

    computerChoice = rand() % 3 + 1; 

    printf("Anda memilih: ");
    printChoice(playerChoice);
    printf("\nKomputer memilih: ");
    printChoice(computerChoice);
    printf("\n");

    if (playerChoice == computerChoice) {
        printf("Hasil: Seri!\n");
    } else if ((playerChoice == 1 && computerChoice == 2) ||
               (playerChoice == 2 && computerChoice == 3) ||
               (playerChoice == 3 && computerChoice == 1)) {
        printf("Anda menang!\n");
    } else {
        printf("Komputer menang!\n");
    }

    return 0;
}
