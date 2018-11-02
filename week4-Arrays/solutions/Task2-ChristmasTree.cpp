#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n < 1 || n > 100) {
        cout << "Enter number in range" << endl;
        cin >> n;
    }

    for (int i = 1; i <= n + 1; i++) {

        for (int j = 0; j <= n-i; j++) {
            cout << ' ';
        }

        for (int j = 1; j < i; j++) {
            cout << '*';
        }

        cout << " " << '|' << " ";

        for (int j = 1; j < i; j++) {
            cout << '*';
        }
        cout << endl;
    }

	return 0;
}