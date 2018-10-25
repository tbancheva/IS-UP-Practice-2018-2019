#include <iostream>

using namespace std;

int main() {
    int firstFibNumber = 0;
    int secondFibNumber = 1;

    cout << firstFibNumber << ", " << secondFibNumber << ", ";

    for (int i = 1; i < 19; i++) {
        int result = firstFibNumber + secondFibNumber;
        cout << result << ", ";

        firstFibNumber = secondFibNumber;
        secondFibNumber = result;
    }
    return 0;
}