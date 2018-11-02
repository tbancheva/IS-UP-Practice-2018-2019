#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n < 1 || n > 50) {
        cout << "Enter number in range" << endl;
        cin >> n;
    }

    int numbers[50];
    bool marked[50];

    for (int i = 0; i < n; i++) {
        marked[i] = false;
    }

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        if (!marked[numbers[i]]) {
            int numberCount = 1;
            for (int j = i + 1; j < n; j++) {
                if (numbers[i] == numbers[j]) {
                    numberCount++;
                }
            }
            marked[numbers[i]] = true;
            cout << numbers[i] << " - " << numberCount << " , ";
        }
    }

    return 0;
}
