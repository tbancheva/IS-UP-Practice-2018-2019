#include<iostream>
using namespace std;

int main() {
	int number;
	cin >> number;
	int digitCount = 0;

	while (number < 0) {
		digitCount++;
		number /= 10;
	}
	cout << digitCount << endl;

	/*digitCount can start from 1 in that case because in the first iteration the number is already
	one digit less as it is divided in the loop condition first, which is a valid boolean expression
	and will be true until the number becomes 0(false)

	int digitCount = 1;
	while (number /= 10) {
	digitCount++;
	}*/

	system("pause");
	return 0;
}