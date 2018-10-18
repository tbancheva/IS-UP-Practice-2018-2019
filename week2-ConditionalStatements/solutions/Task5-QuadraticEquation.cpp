#include <iostream>
using namespace std;

int main(){

	int a, b, c;
	int D;
	double x1, x2; //double because they are calculated by using division

	cin >> a >> b >> c;

	if (a == 0) {  //the case when the equation is linear
		cout << "Solution is x = " << (double) -c / b << endl;
	}
	else {
		D = b*b - (4 * a*c);

		if (D < 0) {
			cout << "No solution." << endl;
		}
		else {
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);

			x1 == x2 ? cout << "Solution is x = " << x1 << endl
					 : cout << "Solution is x1 = " << x1 << " and " << "x2 = " << x2 << endl;
		}
	}

	system("pause");
	return 0;
}