#include <iostream>
using namespace std;

const int ROWS = 100;
const int COLS = 100;

void print_matrix(const int matrix[][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void transpose(const int matrix[][COLS], int transposed_matrix[][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transposed_matrix[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[ROWS][COLS] = {{1,2,3},
                        {4,5,6},
                        {7,8,9},
                        {10,11, 12}};

    int transposed_matrix[ROWS][COLS];
    transpose(matrix, transposed_matrix, 4, 3);
    print_matrix(transposed_matrix, 3, 4);
    
    return 0;
}