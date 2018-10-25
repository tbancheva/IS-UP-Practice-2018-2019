#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int inputNumber;
    int digitCount = 1;
    cin >> inputNumber;
    int number = inputNumber;
    int sum = 0;

    while (number /= 10) {
        digitCount++;
    }

    int correction = inputNumber;
    for (int i = 0; i < digitCount; i++, correction /= 10) {
        sum += pow((correction % 10), digitCount);
    }

    cout << boolalpha << (sum == inputNumber && inputNumber != 0);
    return 0;
}