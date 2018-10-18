#include <iostream>
using namespace std;

int main(){

	int month, day, daysLeft;
	cin >> month >> day;

	if (month < 1 || month > 12){
		cout << "There is no such month" << endl;
	}
	else if (day < 1 || day > 31 || (month == 2 && day >= 29) || (month == 4 || month == 6 || month == 9 || month == 11) && day == 31){
		cout << "There is no such day" << endl;
	}
	else{

		switch (month)
		{
			case 1: daysLeft = 7 * 31 + 28 + 4 * 30 - day; break;
			case 2: daysLeft = 6 * 31 + 4 * 30 + 28 - day; break;
			case 3: daysLeft = 6 * 31 + 4 * 30 - day; break;
			case 4: daysLeft = 5 * 31 + 4 * 30 - day; break;
			case 5: daysLeft = 5 * 31 + 3 * 30 - day; break;
			case 6: daysLeft = 4 * 31 + 3 * 30 - day; break;
			case 7: daysLeft = 4 * 31 + 2 * 30 - day; break;
			case 8: daysLeft = 3 * 31 + 2 * 30 - day; break;
			case 9: daysLeft = 2 * 31 + 2 * 30 - day; break;
			case 10: daysLeft = 2 * 31 + 30 - day; break;
			case 11: daysLeft = 31 + 30 - day; break;
			case 12: daysLeft = 31 - day;
		}

		cout << "There are " << daysLeft << " days left  till the end of the year" << endl;
	}


	system("pause");
	return 0;
}