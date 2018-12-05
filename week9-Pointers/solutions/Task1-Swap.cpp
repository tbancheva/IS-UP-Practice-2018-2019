#include <iostream>
using namespace std;

void swap_values(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 5;
    int b = 6;
    swap_values(a, b);
    cout << a << " " << b;

    return 0;
}