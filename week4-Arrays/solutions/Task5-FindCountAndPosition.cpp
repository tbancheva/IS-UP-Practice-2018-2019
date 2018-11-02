#include <iostream>
using namespace std;

int main() {
	int numbers[50];
	int positions[50];

	int n, number;
	cin >> n;
	while (n < 1 || n > 50) {
		cout << "Enter number in range" << endl;
		cin >> n;
	}

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	cout << "Enter a number to see if it is present in the array:" << endl;
	cin >> number;

	int numberCount = 0; // the counter for how many times the number is present in the array is also used 
	// to measure the length of the positions

	for (int i = 0; i < n; i++) {
		if (numbers[i] == number) {
			positions[numberCount++] = i; // the index i of the number is saved in the position array and the 
			//counter is incremented at the same time
		}
	}

	if (numberCount) { // if the counter is greater than zero then the element is present in the array
		cout << number << " is present " << numberCount << " times in the array at positions: ";
		for (int i = 0; i < numberCount; i++) {
			cout << positions[i] << ',';
		}
	}
	else {
		cout << number << " is present " << numberCount << " times in the array." << endl;
	}

    return 0;
}