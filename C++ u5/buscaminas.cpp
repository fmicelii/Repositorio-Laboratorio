#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 10;
const int MINES = 15;

class Minesweeper {
private:
    vector<vector<char>> board;
    vector<vector<bool>> mineLocations;

public:
    Minesweeper() {
        board = vector<vector<char>>(SIZE, vector<char>(SIZE, '-'));
        mineLocations = vector<vector<bool>>(SIZE, vector<bool>(SIZE, false));
        placeMines();
        calculateAdjacentMines();
    }

    void placeMines() {
        srand(time(NULL));
        int count = 0;
        while (count < MINES) {
            int x = rand() % SIZE;
            int y = rand() % SIZE;
            if (!mineLocations[x][y]) {
                mineLocations[x][y] = true;
                count++;
            }
        }
    }

    void calculateAdjacentMines() {
        for (int x = 0; x < SIZE; ++x) {
            for (int y = 0; y < SIZE; ++y) {
                if (!mineLocations[x][y]) {
                    int count = 0;
                    for (int i = -1; i <= 1; ++i) {
                        for (int j = -1; j <= 1; ++j) {
                            int newX = x + i;
                            int newY = y + j;
                            if (newX >= 0 && newX < SIZE && newY >= 0 && newY < SIZE && mineLocations[newX][newY])
                                count++;
                        }
                    }
                    if (count > 0)
                        board[x][y] = '0' + count;
                }
            }
        }
    }

    void displayBoard(bool revealMines = false) {
        cout << "  ";
        for (int i = 0; i < SIZE; ++i)
            cout << i << " ";
        cout << endl;
        for (int i = 0; i < SIZE; ++i) {
            cout << i << " ";
            for (int j = 0; j < SIZE; ++j) {
                if (board[i][j] == '-' && !revealMines)
                    cout << "- ";
                else if (board[i][j] == 'X' || (mineLocations[i][j] && revealMines))
                    cout << "X ";
                else
                    cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    void revealCell(int x, int y) {
        if (x < 0 || x >= SIZE || y < 0 || y >= SIZE)
            return;
        if (board[x][y] != '-' || mineLocations[x][y])
            return;
        int count = 0;
        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                int newX = x + i;
                int newY = y + j;
                if (newX >= 0 && newX < SIZE && newY >= 0 && newY < SIZE && mineLocations[newX][newY])
                    count++;
            }
        }
        if (count > 0) {
            board[x][y] = '0' + count;
        } else {
            board[x][y] = ' ';
            for (int i = -1; i <= 1; ++i) {
                for (int j = -1; j <= 1; ++j) {
                    int newX = x + i;
                    int newY = y + j;
                    if (newX >= 0 && newX < SIZE && newY >= 0 && newY < SIZE)
                        revealCell(newX, newY);
                }
            }
        }
    }

    void play() {
        int x, y;
        while (true) {
            displayBoard();
            cout << "Enter the coordinates (x y) to reveal a cell: ";
            cin >> x >> y;
            if (x < 0 || x >= SIZE || y < 0 || y >= SIZE) {
                cout << "Invalid coordinates! Please try again." << endl;
                continue;
            }
            if (mineLocations[x][y]) {
                cout << "Perdiste! tocaste una mina." << endl;
                displayBoard(true);
                break;
            }
            revealCell(x, y);
            bool won = true;
            for (int i = 0; i < SIZE; ++i) {
                for (int j = 0; j < SIZE; ++j) {
                    if (board[i][j] == '-' && !mineLocations[i][j]) {
                        won = false;
                        break;
                    }
                }
                if (!won)
                    break;
            }
            if (won) {
                cout << "ganaste!" << endl;
                displayBoard(true);
                break;
            }
        }
    }
};

int main() {
    Minesweeper game;
    game.play();
    return 0;
}
