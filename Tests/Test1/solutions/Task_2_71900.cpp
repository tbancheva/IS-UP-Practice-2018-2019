#include<iostream>

using namespace std;

void printRomanNumbers(int a, int b)
{
	for (int i = a; i <= b; i++)
	{
		if (i >= 1 && i <= 9)
		{
			switch (i)
			{
			case 1:cout << " I "; break;
			case 2:cout << " II "; break;
			case 3:cout << " III "; break;
			case 4:cout << " IV "; break;
			case 5:cout << " V "; break;
			case 6:cout << " VI "; break;
			case 7:cout << " VII "; break;
			case 8:cout << " VIII "; break;
			case 9:cout << " IX "; break;
			}
		}
		else
		{
			cout << " " << i*i << " ";
		}
	}
}
int main()
{
	int a, b;
	cin >> a >> b;

	printRomanNumbers(a, b);

	system("pause");
	return 0;
}

