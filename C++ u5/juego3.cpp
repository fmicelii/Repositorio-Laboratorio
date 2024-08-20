#include <iostream>
#include <vector>

using namespace std;

enum class Cell { Empty, X, O };

class TicTacToe {
private:
    vector<Cell> board;
    Cell currentPlayer;
public:
    TicTacToe() : board(9, Cell::Empty), currentPlayer(Cell::X) {}

    void drawBoard() {
        cout << " " << getSymbol(board[0]) << " | " << getSymbol(board[1]) << " | " << getSymbol(board[2]) << endl;
        cout << "-----------" << endl;
        cout << " " << getSymbol(board[3]) << " | " << getSymbol(board[4]) << " | " << getSymbol(board[5]) << endl;
        cout << "-----------" << endl;
        cout << " " << getSymbol(board[6]) << " | " << getSymbol(board[7]) << " | " << getSymbol(board[8]) << endl;
    }

    char getSymbol(Cell cell) {
        switch (cell) {
            case Cell::X: return 'X';
            case Cell::O: return 'O';
            default: return ' ';
        }
    }

    bool placeMark(int position) {
        if (position < 0 || position >= 9 || board[position] != Cell::Empty) {
            cout << "Invalid move! Please choose an empty cell." << endl;
            return false;
        }
        board[position] = currentPlayer;
        return true;
    }

    bool checkWin() {
        // Check rows
        for (int i = 0; i < 3; ++i) {
            if (board[i * 3] != Cell::Empty && board[i * 3] == board[i * 3 + 1] && board[i * 3] == board[i * 3 + 2])
                return true;
        }
        // Check columns
        for (int i = 0; i < 3; ++i) {
            if (board[i] != Cell::Empty && board[i] == board[i + 3] && board[i] == board[i + 6])
                return true;
        }
        // Check diagonals
        if (board[0] != Cell::Empty && board[0] == board[4] && board[0] == board[8])
            return true;
        if (board[2] != Cell::Empty && board[2] == board[4] && board[2] == board[6])
            return true;
        return false;
    }

    bool checkDraw() {
        for (Cell cell : board) {
            if (cell == Cell::Empty)
                return false; // Found an empty cell, game is not a draw
        }
        return true; // No empty cells, game is a draw
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == Cell::X) ? Cell::O : Cell::X;
    }

    void play() {
        cout << "Welcome to Tic-Tac-Toe!" << endl;
        cout << "Jugador X comienza." << endl;
        drawBoard();

        while (true) {
            int position;
            cout << "jugador " << getSymbol(currentPlayer) << ", enter position (0-8): ";
            cin >> position;

            if (placeMark(position)) {
                drawBoard();
                if (checkWin()) {
                    cout << "jugador " << getSymbol(currentPlayer) << " gana!" << endl;
                    break;
                }
                if (checkDraw()) {
                    cout << "empate!" << endl;
                    break;
                }
                switchPlayer();
            }
        }
    }
};

int main() {
    TicTacToe game;
    game.play();
    return 0;
}
