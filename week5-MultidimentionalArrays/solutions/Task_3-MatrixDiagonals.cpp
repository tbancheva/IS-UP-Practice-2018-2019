#include <iostream>
using namespace std;
const int ROWS = 100;
const int COLS = 100;

int main() {
    int n;
    int matrix[ROWS][COLS];
    int mainDiagonal[ROWS];
    int antidiagonal[ROWS];
    cin >> n;

    while (n < 0 || n > 100) {
        cout << "Enter number in range" << endl;
        cin >> n;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }


    int mainDiagonalCounter = 0;
    int antidiagonalCounter = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                mainDiagonal[mainDiagonalCounter++] = matrix[i][j];
            }

            if (j == n - i - 1) {
                antidiagonal[antidiagonalCounter++] = matrix[i][j];
            }
        }
    }

    cout << "Main diagonal : ";
    for (int i = 0; i < n; i++) {
        cout << mainDiagonal[i] << " ";
    }

    cout << endl << "Antidiagonal : ";
    for (int i = 0; i < n; i++) {
        cout << antidiagonal[i] << " ";
    }

    return 0;
}