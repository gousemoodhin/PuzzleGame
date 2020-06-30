#include <iostream>
#include <vector>
using namespace std;

void DisplayElements(vector<vector<int>> vec, int *zero_i, int *zero_j) {
    for (int i = 0; i < vec.size(); i++) {
    for (int j = 0; j < vec.size(); j++) {
      cout << "\t" << vec[i][j] << "\t";
      if (vec[i][j] == 0) {
        *zero_i = i;  // Update position of Zero.
        *zero_j = j;
      }
    }
    cout << endl;
  }
  cout << endl;
}

int main() {
  cout << "\n\n\t\t   ***** PUZZLE GAME ****\n";
  cout << "\tNote: Enter input number which is adjacent to Zero(0)\n\n\n";

  int input, zero_i, zero_j;
  vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 0}};
  DisplayElements(vec, &zero_i, &zero_j);

  while (true) {
    cout << "\tEnter input number to replace with empty space(Zero): ";
    cin >> input;
    int flag = 0;
    for (int i = 0; i < vec.size(); i++) {
      for (int j = 0; j < vec.size(); j++) {
        if (input == vec[i][j]) {
          if (vec[i][j + 1] == 0 || vec[i][j - 1] == 0 || vec[i + 1][j] == 0 ||
              vec[i - 1][j] == 0) {
            vec[zero_i][zero_j] = input;
            vec[i][j] = 0;
            zero_i = i;
            zero_j = j;
            flag = 1;
            break;
          } else {
            flag = 1;
            cout << "\n\n\tInvalid Number!!!\n\n";
            continue;
          }
        }
      }
      if (flag == 1)
        break;
    }
    DisplayElements(vec, &zero_i, &zero_j);
  }
}
