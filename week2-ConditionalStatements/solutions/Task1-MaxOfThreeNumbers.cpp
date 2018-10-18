#include <iostream>
using namespace std;

int main(){

	int a, b, c;
	cin >> a >> b >> c;
	int max;

	if (a > b && a > c){
		max = a;
	}
	else if (b > c){
		max = b;
	}
	else{
		max = c;
	}
	
	//Everything done with if/else could be done with a ternary operator
	//but that doesn't mean that it should. Compare readabilty of the code above
	//and the code below
	int maxTernaryOperator = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	cout << "Max with if/else: " << max << endl;
	cout << "Max with ternary operator: "<< maxTernaryOperator << endl;

	system("pause");
	return 0;
}