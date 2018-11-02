#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    while (n < 1 || n > 100) {
        cout << "Please enter number in range" << endl;
        cin >> n;
    }

    int startingRow = 0, startingCol = 0;
    int endingRow = n - 1;
    int endingCol = n - 1;
    int value = 0;
    int spiral[100][100];

    while (startingRow <= endingRow && startingCol <= endingCol) {

        for (int j = startingCol; j <= endingCol ; j++) {
            spiral[startingRow][j] = ++value;
        }

        startingRow++;

        for (int i = startingRow; i <= endingRow; i++) {
            spiral[i][endingCol] = ++value;
        }
        endingCol--;

        if (startingRow < endingRow) {
            for (int j = endingCol; j >= startingCol; j--) {
                spiral[endingRow][j] = ++value;
            }
            endingRow--;
        }

        if (startingCol < endingCol) {
            for (int i = endingRow; i >= startingRow; i--) {
                spiral[i][startingCol] = ++value;
            }
            startingCol++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << spiral[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}