#include<iostream>

using namespace std;

char castle[1000];

int countPoints(int princess, int prince) {
	int start, finish;
	if (princess < prince) {
		start = princess;
		finish = prince;
	}
	else {
		start = prince;
		finish = princess;
	}
	int princePoints = 0;
	for (int room = start + 1; room < finish; room++) {
		switch (castle[room]) {
		case '~': princePoints += 18;
			break;
		case '%': princePoints += 24;
			break;
		case '#': princePoints += 35;
			break;
		case '$': princePoints = -1;
			break;
		default: 
			break;
		}
		castle[room] = '.';
		if (princePoints == -1) {
			return princePoints;
		}
	}
	return princePoints;
}
int main()
{
	int cleopatra, dagonet, arthur, castleSize;
	cin >> castleSize;
	for (int room = 1; room <= castleSize; room++) {
		cin >> castle[room];
		if (castle[room] == 'C') {
			cleopatra = room;
		}
		else if (castle[room] == 'D') {
			dagonet = room;
		}
		else if (castle[room] == 'A') {
			arthur = room;
		}
	}

	if (abs(cleopatra - dagonet) < abs(cleopatra - arthur)) {
		dagonet = countPoints(cleopatra, dagonet);
		arthur = countPoints(cleopatra, arthur);
	}
	else {
		arthur = countPoints(cleopatra, arthur);
		dagonet = countPoints(cleopatra, dagonet);
	}

	if (dagonet == -1) {
		cout << "Dagonet wins Cleopatra's heart by finding the engagement ring!\n";
	}
	else if (arthur == -1) {
		cout << "Arthur wins Cleopatra's heart by finding the engagement ring!\n";
	}
	else if (arthur == dagonet) {
		cout << "The castle is big enough for the three of them and so they all lived happily ever after!\n";
	}
	else if (arthur > dagonet) {
		cout << "Arthur wins Cleopatra's heart with " << arthur << " points.\n";
	}
	else {
		cout << "Dagonet wins Cleopatra's heart with " << dagonet << " points.\n";
	}

	system("pause");
	return 0;
}

