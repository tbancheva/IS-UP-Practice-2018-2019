#include <iostream>
using namespace std;

int get_digit_sum(int num, int sum) {
    if (num / 10 == 0) {
        sum += num % 10;
        return sum;
    }
    sum += num % 10;
    return get_digit_sum(num / 10, sum);
}   

int get_digit_sum(int num) {
    return get_digit_sum(num, 0);
}

int main() {
    int num = 1;
    cout << get_digit_sum(num) << endl;
}