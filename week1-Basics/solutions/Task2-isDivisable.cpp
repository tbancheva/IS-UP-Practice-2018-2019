#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	bool isDivisableBy2 = number % 2 == 0;
	bool isDivisableBy3 = number % 3 == 0;
	bool isDivisableBy5 = number % 5 == 0;

	cout << boolalpha << (isDivisableBy2 && isDivisableBy3 && !isDivisableBy5) << endl;
	
	system("pause");
	return 0;
}

