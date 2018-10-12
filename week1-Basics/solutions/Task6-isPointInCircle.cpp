#include <iostream>
using namespace std;

int main()
{
	//mathematic explanation - https://math.stackexchange.com/questions/198764/how-to-know-if-a-point-is-inside-a-circle
	
	int radius = 6;
	int x, y;
	cin >> x >> y;
	int d = x * x + y * y;

	bool isInCircle = d < radius * radius;

	cout << boolalpha << isInCircle << endl;

	system("pause");
	return 0;
}

