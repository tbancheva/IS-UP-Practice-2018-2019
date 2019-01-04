#include <iostream>

using namespace std;

const int  MAX_SIZE = 100;

int binary_search(const int *numbers, const int value, int left, int right) {
    if (left > right) {
        return -1;
    }
    int mid = (left + right) / 2;
    if (numbers[mid] == value) {
        return mid;
    } else if (numbers[mid] > value) {
        right = mid - 1;
    } else {
        left = mid + 1;
    }
    return binary_search(numbers, value, left, right);
}

int main() {
    int n, value;
    cin >> n >> value;

    int numbers[MAX_SIZE];
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    cout << binary_search(numbers, value, 0, n - 1) << endl;
    return 0;
}