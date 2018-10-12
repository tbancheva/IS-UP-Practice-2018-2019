#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cin >> x >> y;
	bool isPointOnLine = 2 * x + 5 == y;
	cout << boolalpha << isPointOnLine << endl;

	system("pause");
	return 0;
}

