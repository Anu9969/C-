#include <iostream>
#include <vector>

using namespace std;

const int BOARD_SIZE = 3;

// Function to print the tic-tac-toe board
void printBoard(const vector<vector<char>>& board) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check if a player has won
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }

    return false;
}

// Function to check if the board is full
bool isBoardFull(const vector<vector<char>>& board) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<char>> board(BOARD_SIZE, vector<char>(BOARD_SIZE, ' '));
    char currentPlayer = 'X';
    int row, col;

    cout << "Tic-Tac-Toe Game" << endl;
    cout << "Player 1: X" << endl;
    cout << "Player 2: O" << endl;
    cout << "Enter row and column numbers to make a move (e.g., 1 2):" << endl;

    while (true) {
        printBoard(board);

        cout << "Player " << currentPlayer << ", make your move: ";
        cin >> row >> col;

        // Validate the input
        if (row < 1 || row > BOARD_SIZE || col < 1 || col > BOARD_SIZE || board[row - 1][col - 1] != ' ') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        // Make the move
        board[row - 1][col - 1] = currentPlayer;

        // Check for a win
        if (checkWin(board, currentPlayer)) {
            printBoard(board);
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        // Check for a draw
        if (isBoardFull(board)) {
            printBoard(board);
            cout << "It's a draw!" << endl;
            break;
        }

        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
