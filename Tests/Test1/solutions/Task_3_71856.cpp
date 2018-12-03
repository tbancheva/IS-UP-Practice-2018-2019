#include<iostream>

using namespace std;

int main()
{
	int array[50];
	int length;
	cin >> length;

	for (int counter = 0; counter < length; counter++)
	{
		cout << "Enter array element " << counter + 1 << ": ";
		cin >> array[counter];
	}

	for (int counter = 0; counter < length; counter++)
	{
		int bigger_number = -1;

		for (int rev_counter = counter; rev_counter >= 0; rev_counter--)
		{
			if (array[rev_counter] > array[counter])
			{
				bigger_number = array[rev_counter];
				break;
			}
		}

		cout << array[counter] << " -> " << bigger_number << endl;
	}

	system("pause");
	return 0;
}

