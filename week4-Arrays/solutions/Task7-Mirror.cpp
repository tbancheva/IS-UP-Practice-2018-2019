#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n < 1 || n > 100) {
        cout << "Enter number in range" << endl;
        cin >> n;
    }

	int numbers[50];

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    bool isMirroredImage = true;

    for (int i = 0; i < n / 2; i++) {
        if (numbers[i] != numbers[n - i - 1]) {
            isMirroredImage = false;
            break;
        }
    }
    cout << boolalpha << isMirroredImage;

    return 0;
}




