#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;

	//Using additional variable
	int c = a;
	a = b;
	b = c;
	cout << a << " " << b << endl;

	int x, y;
	cin >> x >> y;

	//Using +,- operators only
	//Let's for example have x=10 and y=20
	x = x + y; //a=30 (10+20)
	y = x - y; //b=10 (30-20)
	x = x - y; //a=20 (30-10) 
	cout << x << " " << y << endl;

	int i, j;
	cin >> i >> j;

	//Using *,/ operators only
	//Let's for example have i=5 and j=6
	i = i * j;  //i=30 (5*6)
	j = i / j;  //j=5 (30/6)
	i = i / j;  //i=6 (30/5)
	cout << i << " " << j << endl;


	system("pause");
	return 0;
}

