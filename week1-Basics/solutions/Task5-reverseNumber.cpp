#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;
	int fourthDiggit = number % 10;
	int thirdDiggit = number / 10 % 10;
	int secondDiggit = number / 100 % 10;
	int firstDiggit = number / 1000;

	int reversedNumber = fourthDiggit * 1000 + thirdDiggit * 100 + secondDiggit * 10 + firstDiggit;
	cout << reversedNumber << endl;

	system("pause");
	return 0;
}

