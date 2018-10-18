#include <iostream>
using namespace std;

int main(){

	int a, b, c;
	cin >> a >> b >> c;

	//For convinience we accept that the third side is the longest

	if (a + b < c || a + c < b || b + c < a || a <= 0 || b <= 0 || c <= 0){
		cout << "Invalid triangle" << endl;
	}
	else if (a*a + b*b == c*c){
		cout << "Right-angled triangle" << endl;
	}
	else if (a*a + b*b > c*c){
		cout << "Acute-angled triangle" << endl;
	}
	else{
		cout << "Obtuse triangle" << endl;
	}

	system("pause");
	return 0;
}