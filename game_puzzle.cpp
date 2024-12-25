#include <iostream>
#include <vector>
using namespace std;

class PuzzleGame {
private:
    vector<vector<int>> grid;
    int zero_row;
    int zero_col;

public:
    // Constructor to initialize the puzzle grid.
    PuzzleGame() : grid({{1, 2, 3}, {4, 5, 6}, {7, 8, 0}}), zero_row(2), zero_col(2) {}

    // Function to display the current state of the puzzle grid.
    void displayGrid() {
        for (int row = 0; row < grid.size(); row++) {
            for (int col = 0; col < grid[row].size(); col++) {
                cout << "\t" << grid[row][col] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Function to update the grid based on user input.
    bool processInput(int user_input) {
        for (int row = 0; row < grid.size(); row++) {
            for (int col = 0; col < grid[row].size(); col++) {
                if (user_input == grid[row][col]) {
                    if ((col + 1 < grid[row].size() && grid[row][col + 1] == 0) ||
                        (col - 1 >= 0 && grid[row][col - 1] == 0) ||
                        (row + 1 < grid.size() && grid[row + 1][col] == 0) ||
                        (row - 1 >= 0 && grid[row - 1][col] == 0)) {

                        // Swap the input number with zero.
                        grid[zero_row][zero_col] = user_input;
                        grid[row][col] = 0;

                        // Update the position of zero.
                        zero_row = row;
                        zero_col = col;
                        return true;
                    } else {
                        // Input number is not adjacent to zero.
                        cout << "\n\n\tInvalid Number!!!\n\n";
                        return false;
                    }
                }
            }
        }
        // Input number not found in the grid.
        cout << "\n\n\tInvalid Input!!!\n\n";
        return false;
    }

    // Function to start the game loop.
    void playGame() {
        cout << "\n\n\t\t   ***** PUZZLE GAME *****\n";
        cout << "\tNote: Enter input number which is adjacent to Zero (0)\n\n\n";

        displayGrid();

        while (true) {
            int user_input;
            cout << "\tEnter input number to replace with empty space (Zero): ";
            cin >> user_input;
            processInput(user_input);
            displayGrid();
        }
    }
};

int main() {
    // Create an instance of the PuzzleGame class and start the game.
    PuzzleGame puzzle;
    puzzle.playGame();
    return 0;
}
