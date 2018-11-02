#include<iostream>
using namespace std;

int main() {
	int numbers[50];
	bool areElementsUnique = true;

	int n;
	cin >> n;
	while (n < 1 || n > 50) {
		cout << "Enter number in range";
		cin >> n;
	}

	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (numbers[i] == numbers[j]) {
				areElementsUnique = false;
				break;
			}
		}
		if (!areElementsUnique) {
			break;
		}
	}

	cout << boolalpha << areElementsUnique << endl;

    return 0;
}