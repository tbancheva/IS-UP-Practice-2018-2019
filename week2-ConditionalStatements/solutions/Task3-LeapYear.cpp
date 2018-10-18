#include <iostream>
using namespace std;

int main(){

	int year;
	cin >> year;

	((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? cout << "Leap year" << endl
															: cout << "Non-Leap year" << endl;

	system("pause");
	return 0;
}