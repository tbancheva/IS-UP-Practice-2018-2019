#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n < 1 || n > 50) {
        cout << "Enter number in range";
        cin >> n;
    }

    int numbers[50];

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int min = numbers[0];
    int minIndex = 0;
    int max = numbers[0];
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {

        if (numbers[i] < min) {
            min = numbers[i];
            minIndex = i;
        }

        if (numbers[i] > max) {
            max = numbers[i];
            maxIndex = i;
        }
    }

    int secondMin = max;
    int secondMax = min;

    for (int i = 0; i < n; i++) {
        if (i == minIndex || i == maxIndex) {
            continue;
        }

        if (numbers[i] > secondMax) {
            secondMax = numbers[i];
        }

        if (numbers[i] < secondMin) {
            secondMin = numbers[i];
        }
    }

    cout << "Max is : " << max << " " << " Min is : " << min << " Second max is : " << secondMax << " Second min is : " << secondMin << endl;

	return 0;
}