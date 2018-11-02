#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n < 1 || n > 50) {
		cout << "Enter number in range" << endl;
		cin >> n;
	}

	int numbers[50];
	double sum = 0.0;

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	for (int i = 0; i < n; i++) {
		sum += numbers[i];
	}

	double average = sum / n;

	double minDiff = abs(numbers[0] - average);
	int closestToAverage = numbers[0];

	for (int i = 1; i < n; i++) {
		int currDiff = abs(numbers[i] - average);

		if (currDiff < minDiff) {
			minDiff = currDiff;
			closestToAverage = numbers[i];
		}
	}

	int lowerThanAverage[50];
	int lowerIndex = 0;
	int greaterThanAverage[50];
	int greaterIndex = 0;

	for (int i = 0; i < n; i++) {
		if (numbers[i] >= average) {
			greaterThanAverage[greaterIndex++] = numbers[i];
		}
		else {
			lowerThanAverage[lowerIndex++] = numbers[i];
		}
	}

	cout << "The number closest to average is: " << closestToAverage << endl;

	cout << "The numbers smaller than average are: ";
	for (int i = 0; i < lowerIndex; i++) {
		cout << lowerThanAverage[i] << " ";
	}
	cout << endl;

	cout << "The numbers greater than average are: ";
	for (int i = 0; i < greaterIndex; i++) {
		cout << greaterThanAverage[i] << " ";
	}
	cout << endl;

	return 0;
}