/**
  * First, we use a for loop to initialize the elements of the array
  * Then we check if there is a way to make profit and if not we skip the rest of the code
  * We initialize the buy variable so you cannot buy stocks two times before you sell and you cannot sell before you buy stocks
  * and print out the days in which we are going to buy or sell stocks
  */

#include<iostream>
using namespace std;

int main()
{
	int stockprice[7];
	bool profit = false, buy = false;

	for (int i = 0; i < 7; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> stockprice[i];
	}

	for (int i = 0; i < 6; i++)
	{
		if (stockprice[i] < stockprice[i + 1])
		{
			profit = true;
			break;
		}
	}

	if (profit)
	{
		for (int i = 0; i < 7; i++)
		{
			if (!buy && stockprice[i] < stockprice[i + 1])
			{
				cout << "Buy on day: " << i << ", ";
				buy = true;
			}

			if (buy && stockprice[i] > stockprice[i + 1])
			{
				cout << "Sell on day: " << i << endl;
				buy = false;
			}
		}
	}
	else 
	{
		cout << "There is no day when buying the stock will make profit" << endl;
	}

	system("pause");
	return 0;
}
