/**
  * While the symbols are entered from the keyboard, I check, using if(), whether they are obstacles("#") or not. Until the symbol "E" is entered,
  * we increase obstaclesLeft in order to count the number of obstacles on the left side of Ellie. When the symbol that is entered is "E", a
  * indicative variable flag changes values and becomes "true". After that when a symbol is entered, only obstaclesRight increases in case of
  * an obstacle("#"). On the screen the minimum of both obstaclesLeft and obstaclesRight is displayed.
  */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int obstaclesLeft = 0, obstaclesRight = 0;
	char symbol, obstacle = '#', Ellie = 'E';
	bool isOnRightSide = false;

	int corridorLength;
	cin >> corridorLength;

	for (int i = 0; i <corridorLength; i++) {
		cin >> symbol;

		if (symbol == obstacle) {
			isOnRightSide ? obstaclesRight++ : obstaclesLeft++;
		}
		if (symbol == Ellie){
			isOnRightSide = true;
		}
	}
	cout << "Min number of obstacles Ellie needs to blow is: " << min(obstaclesLeft, obstaclesRight) << ".\n";

	system("pause");
	return 0;
}