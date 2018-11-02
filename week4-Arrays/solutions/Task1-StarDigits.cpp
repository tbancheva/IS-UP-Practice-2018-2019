#include<iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    while (number < 100 || number > 99999) {
        cout << "Enter number in range" << endl;
        cin >> number;
    }

    while (number != 0) {
        int digit = number % 10;
        cout << digit;
        for (int i = 1; i <= digit; i++) {
            cout << '*';
        }
        cout << endl;
        number /= 10;
    }

    return 0;
}