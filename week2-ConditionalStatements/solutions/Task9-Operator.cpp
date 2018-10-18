#include <iostream>
using namespace std;

int main(){

	int firstNumber, secondNumber;
	char symbol;
	cin >> symbol >> firstNumber >> secondNumber;

	switch (symbol){
		case '+': cout << firstNumber + secondNumber << endl; break;
		case '*': cout << firstNumber * secondNumber << endl; break;
		case '-': cout << firstNumber - secondNumber << endl; break;
		case '/': cout << firstNumber / secondNumber << endl; break;
		case '%': cout << firstNumber % secondNumber << endl; break;
		default: cout << "Invalid operator" << endl;
	}

	system("pause");
	return 0;
}