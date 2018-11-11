#include <iostream>
using namespace std;

int main() {
    int matrix[100][100];
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

    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }

    cout << "Sum of matrix elements : " << sum << endl;
    cout << "Average  of matrix elements: " << sum / (n * n) << endl;
    return 0;
}