#include<iostream>

using namespace std;

int main()
{
	long long ID;

	cout << "Enter ID: ";
	cin >> ID;
	
	int gender;
	gender = (ID / 10) % 10;

	cout << "Gender: ";
	if (gender % 2 == 0)
	{
		cout << " Male" << endl;
	}
	else
	{
		cout << " Female" << endl;
	}

	system("pause");
	return 0;
}

