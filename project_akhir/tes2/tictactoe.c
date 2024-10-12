#include <stdio.h>

char board[3][3];  // Papan permainan 3x3
char currentPlayer = 'X';  // Pemain saat ini, mulai dengan X

void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';  // Mengosongkan setiap kotak
        }
    }
}

void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

int checkWin() {
    // Cek baris, kolom, dan diagonal
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) return 1;
        if (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer) return 1;
    }
    if (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) return 1;
    if (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer) return 1;

    return 0;
}

int checkDraw() {
    // Cek apakah papan penuh tanpa pemenang
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

void switchPlayer() {
    // Bergantian antara pemain X dan O
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}

void makeMove() {
    int row, col;

    // Meminta input dari pemain
    printf("Player %c, enter row (1-3) and column (1-3): ", currentPlayer);
    scanf("%d %d", &row, &col);

    // Mengoreksi input agar sesuai dengan indeks array (0-2)
    row--;
    col--;

    // Validasi input
    if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
        board[row][col] = currentPlayer;
    } else {
        printf("Invalid move! Try again.\n");
        makeMove();  // Jika input tidak valid, coba lagi
    }
}

int main() {
    initializeBoard();
    printBoard();

    while (1) {
        makeMove();
        printBoard();

        if (checkWin()) {
            printf("Player %c wins!\n", currentPlayer);
            break;
        } else if (checkDraw()) {
            printf("It's a draw!\n");
            break;
        }

        switchPlayer();  // Bergantian pemain
    }

    return 0;
}
