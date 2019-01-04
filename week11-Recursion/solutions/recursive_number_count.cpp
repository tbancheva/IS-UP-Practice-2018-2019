#include <iostream>
using namespace std;

int get_number_count(int num) {
    if (num / 10 == 0) {
        return 1;
    }
    return 1 + get_number_count(num / 10);
}

int main() {
    int n = 123421;
    cout << get_number_count(n) << endl;
    return 0;
}