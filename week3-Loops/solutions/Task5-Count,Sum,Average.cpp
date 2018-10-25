#include <iostream>
using namespace std;

int main() {
    int number;
    int numberCount = 0;
    int numberSum = 0;
    do {
        cin >> number;
        if (number >= 1 && number <= 200) {
            numberCount++;
            numberSum += number;
        }
    } while (number >= 1);

    if (numberCount < 1) {
        cout << "Number count is " << number << " Sum is " << number << " Average is " << number << endl;
    } else {
        cout << "Number count is " << numberCount << " Sum is " << numberSum << " Average is "
             << (double) numberSum / numberCount << endl;
    }

    return 0;
}