#include<iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	bool isNumberPrime = number % 2 != 0;  // if the number is even then it's not prime

	// if it is odd we check all the numbers by skipping the 
	// even ones up to the square root of the number
	if (isNumberPrime) {
		for (int i = 3; i <= sqrt(number); i += 2) {
			if (number % i == 0) {
				isNumberPrime = false;
				break;
			}
		}
	}
	cout << boolalpha << (number != 1 && isNumberPrime);

	system("pause");
	return 0;
}