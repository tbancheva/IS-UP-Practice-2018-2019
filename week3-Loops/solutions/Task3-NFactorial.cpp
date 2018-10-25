#include<iostream>
using namespace std;

int main() {

    int number;
	cin >> number;

	int nFactorial = 1;
	  
    for (int i = number; i > 1; i--) {
        nFactorial *= i;
    }
    cout << nFactorial << endl;
    return 0;
}