#include <iostream>
using namespace std;

int main(){

	int number, diggit;
	cin >> number >> diggit;

	int fifthDiggit = number % 10;
	int fourthDiggit = number / 10 % 10;
	int thirdDiggit = number / 100 % 10;
	int secondDiggit = number / 1000 % 10;
	int firstDiggit = number / 10000;

	if (diggit == firstDiggit || diggit == secondDiggit || diggit == thirdDiggit|| diggit == fourthDiggit || diggit == fifthDiggit) {
		cout << "Diggit is in the number." << endl;
	} 
	else{
		cout << "Diggit is not in the number." << endl;
	}

	system("pause");
	return 0;
}