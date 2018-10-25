#include<iostream>

using namespace std;

int main() {
    for (int i = 100; i < 1000; i++) {

        int thirdDigit = i % 10;
        int secondDigit = (i / 10) % 10;
        int firstDigit = (i / 100) % 10;

        if ((firstDigit != secondDigit) && (secondDigit != thirdDigit) && (firstDigit != thirdDigit)) {
            cout << i << endl;
        }
    }
    return 0;
}