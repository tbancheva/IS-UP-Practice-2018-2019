#include <iostream>
using namespace std;
const int ROWS = 100;
const int COLS = 100;

int main() {
    int n;
    int matrix[ROWS][COLS];
    int rotatedMatrix[ROWS][COLS];
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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rotatedMatrix[j][n - i - 1] = matrix[i][j];
        }
    }

    cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << rotatedMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}