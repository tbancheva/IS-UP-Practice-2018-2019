#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n < 10 || n > 200) {
        cout << "Enter number in range" << endl;
    }

    for (int i = n; i >= 10; i--) {
        if (!(i % 7)) { // !(i % 7) returns 0 which in c++ can be evaluated in bool statement as false. Which is why it is equivalent to i % 7 == 0
            cout << i << endl;
        }
    }
    return 0;
}