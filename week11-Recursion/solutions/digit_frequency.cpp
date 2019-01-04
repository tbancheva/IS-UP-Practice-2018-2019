#include <iostream>
using namespace std;

int get_digit_frequency(int num, int digit, int digit_frequency) {
    if (num / 10 == 0) {
        if (num % 10 == digit) {
            digit_frequency++;
        }
        return digit_frequency;
    }
    if (num % 10 == digit) {
        digit_frequency++;
    }
    return get_digit_frequency(num / 10, digit, digit_frequency);
}

//this is called a fucntion overload 
int get_digit_frequency(int num, int digit) {
    return get_digit_frequency(num, digit, 0);
}

int main() {
    int n = 30;
    int digit = 3;
    cout << get_digit_frequency(n, digit) << endl;
}
