#include <iostream>
using namespace std;

const int ROWS = 100;
const int COLS = 100;

int main() {

    int matrix[ROWS][COLS];
    int n;
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
    int sumAboveDiagonal = 0;
    int sumUnderDiagonal = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j > i) {
                sumAboveDiagonal += matrix[i][j];
            } else if (j < i) { // if we use only else we will involve the main diagonal
                sumUnderDiagonal += matrix[i][j];
            }
        }
    }

    cout << "Sum over diagonal : " << sumAboveDiagonal << endl;
    cout << "Sum under diagonal : " << sumUnderDiagonal;

    return 0;
}