#include <iostream>
#include <vector>

using namespace std;

// Function to display the Tic-tac-toe board with a box
void displayBoard(const vector<vector<char>>& board) {
    cout << " -------------" << endl;
    for (int i = 0; i < 3; ++i) {
        cout << " | ";
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] << " | ";
        }
        cout << endl << " -------------" << endl;
    }
}

// Function to check if a player has won
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' ')); // 3x3 Tic-tac-toe board
    char currentPlayer = 'X';

    cout << "Welcome to the Tic-tac-toe Game!" << endl;
    displayBoard(board);

    for (int move = 1; move <= 9; ++move) {
        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
            cout << "Invalid move. Try again." << endl;
            --move; // Decrement move to repeat current player's turn
            continue;
        }

        board[row - 1][col - 1] = currentPlayer;
        displayBoard(board);

        if (checkWin(board, currentPlayer)) {
            cout << "Player " << currentPlayer << " wins!" << endl;
            break;
        }

        if (move == 9) {
            cout << "It's a draw!" << endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
    return 0;
}
