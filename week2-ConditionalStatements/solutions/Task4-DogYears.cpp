#include <iostream>
using namespace std;

int main(){

	int humanYears;
	double dogYears;

	cin >> humanYears;

	if (humanYears <= 2 && humanYears >= 0){
		dogYears = humanYears*10.5;
	}
	else{
		dogYears = 21 + (humanYears - 2) * 4;
	}

	cout << "Your dog is " << dogYears << " years old." << endl;

	system("pause");
	return 0;
}