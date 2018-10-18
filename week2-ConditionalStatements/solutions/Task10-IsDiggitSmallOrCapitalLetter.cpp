#include <iostream>
using namespace std;

int main(){

	char symbol;
	cin >> symbol;

	if (symbol >= '0' && symbol <= '9') {
		cout << symbol << " is a digit." << endl;
		int toNumber = symbol - '0';
		cout << symbol << " ^ 2 = " << toNumber * toNumber << endl;
	}

	int asciiDiff = 'a' - 'A';

	if (symbol >= 'a' && symbol <= 'z') {
		cout << symbol << " is a lowercase letter." << endl;
		char upperCase = symbol - asciiDiff;
		cout << "Its corresponding uppercase letter is " << upperCase << endl;
	}

	if (symbol >= 'A' && symbol <= 'Z') {
		cout << symbol << " is an uppercase letter." << endl;
		char lowerCase = symbol + asciiDiff;
		cout << "Its corresponding lowercase letter is " << lowerCase << endl;
	}

	system("pause");
	return 0;
}