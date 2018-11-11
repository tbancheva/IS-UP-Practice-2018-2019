#include <iostream>
using namespace std;

int main() {
	int inputNumber;
	cin >> inputNumber;

	for (int i = 0; i < inputNumber; i++)   //this is a loop that cycles to the middle of the figure(the upper part)
	{
		for (int k = 1; k <= i; k++)        //a loop for the spaces. I noticed that if the input is > 10 the numbers don't align
		{
			if (k >= 10)                    //this is for number > 10 in order for the numbers to be aligned properly(additional space)
			{
				cout << " ";
			}
			cout << " ";
		}

		for (int j = i + 1; j <= inputNumber; j++)  //nested loop for the numbers
		{
			cout << j;
		}
		cout << endl;
	}

	for (int i = inputNumber - 1; i > 0; i--)   //the second loop is for the lower part of the figure and it should be opposite(i--)
	{
		for (int k = i; k > 1; k--)          // the same thing with spaces but in opposite direction
		{
			if (k>10)
			{
				cout << " ";
			}
			cout << " ";
		}

		for (int j = i; j <= inputNumber; j++) //nested loop for numbers
		{
			cout << j;
		}
		cout << endl;
	}


	system("pause");
	return 0;

}
