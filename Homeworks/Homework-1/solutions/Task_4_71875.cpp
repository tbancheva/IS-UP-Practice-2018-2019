/**
  * I'm making an array of 50 elements and the person using this program can enter a number between 1 and 50 to set the lenght of the array.
  * Then I use a loop for getting user input as numbers in the array. I'm keeping the true value in a bool so every number is different.
  * Then I'm making a loop to see if a number is entered twice or more times. If it sees the same number the loop breaks and starts searching for the next number.
  * In the end the bool is holding the value if this is the last occurance of the current number. And if it is I print it.
  */

#include <iostream>
using namespace std;

int main()
{
	int arr[50];
	int lenght;
	cin >> lenght;

	while (lenght < 1 || lenght > 50)
	{
		cout << "Enter a number between 1 and 50 " << endl;
		cin >> lenght;
	}

	for (int i = 0; i < lenght; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < lenght; i++)
	{
		bool isLastOccurance = true;
		for (int k = i + 1; k < lenght; k++)
		{
			if (arr[i] == arr[k])
			{
				isLastOccurance = false;
				break;						//I use "break" to help the program. It doesn't have to search for other equal numbers. It only needs one
			}
		}
		if (isLastOccurance)
		{
			cout << arr[i] << ",";
		}
	}

	system("pause");
	return 0;
}

