#include <iostream>
using namespace std;

int main()
{
	int firstNumber, secondNumber;
	cin >> firstNumber >> secondNumber;
	bool isDivisor = secondNumber % firstNumber == 0;
	cout << boolalpha << isDivisor << endl;

	system("pause");
	return 0;
}

