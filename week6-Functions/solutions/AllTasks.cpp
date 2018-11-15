#include <iostream>
#include <cstdlib>
using namespace std;

//Task 1
int pow(int number, int power){
	int result = 1;
	for (int i = 1; i <= power; i++){
		result *= number;
	}
	return result;
}

//Task 2
int max(int firstNumber, int secondNumber){
	return firstNumber > secondNumber ? firstNumber : secondNumber;
}

//Task 3
int max(int firstNumber, int secondNumber, int thirdNumber){
	return max(max(firstNumber,secondNumber), thirdNumber);
}

//Task 4
bool isLetter(char symbol){
	return (symbol >= 'a' && symbol <= 'z' || symbol >= 'A' && symbol <= 'Z');
}

//Task 5
bool isDigit(char symbol){
	return (symbol >= '0' && symbol <= '9');
}

//Task 6
int getDigitCount(int number){
	int result = 1;
	while (number /= 10){
		result++;
	}
	return result;
}

int digitsSum(int number){
	int sum = 0;
	int digitCnt = getDigitCount(number);
	for (int i = 1; i <= digitCnt; i++, number /= 10){
		sum += number % 10;
	}
	return sum;
}

//Task 7
bool arePaired(int firstNumber, int secondNumber){
	return isPrime(firstNumber) && isPrime(secondNumber) && (abs(firstNumber-secondNumber) == 2);
}

bool isPrime(int number) {
	for (int i = 2; i <= sqrt(number); i++) {
		if (number % i == 0) {
			return false;
		}
	}
	return true;
}

//Task 8
int reverseDigits(int number){
	int result = 0;
	for (int i = getDigitCount(number) - 1; i >= 0; i--, number /= 10) {
		result += number % 10 * pow(10, i);
	}
	return result;
}

//Task 9
void printTable(){
	for (int i = 1; i <= 9; i++){
		for (int j = 1; j <= 9; j++){
			cout << i << "*" << j << "=" << i*j << "    ";
		}
		cout << endl;
	}
}

//Task 10
void fillMatrix(int n){
	int matrix[50][50];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <n; j++) {
			if (i == j){               //on diagonal
				matrix[i][j] = i;
			}
			else if (i<j) {           // over diagonal
				matrix[i][j] = j-i;
			}
			else {                   // under diagonal
				matrix[i][j] = i*j;
			}
		}
	}

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}

int main()
{
	cout << pow(2, 3) << endl;
	cout << pow(7, 0) << endl; 
	cout << pow(4, 5) << endl; 

	cout << max(11, 4) << endl;  
	cout << max(7, 58) << endl;  
	cout << max(3, 3) << endl;   

	cout << max(6, 2, 15) << endl; 

	cout << boolalpha<< isLetter('c') << endl;
	cout << boolalpha << isLetter('T') << endl;
	cout << boolalpha << isLetter('*') << endl;

	cout << boolalpha << isDigit('3') << endl;
	cout << boolalpha << isDigit('õ') << endl;

	cout << digitsSum(10) << endl;
	cout << digitsSum(100) << endl;
	cout << digitsSum(123456789) << endl;
	

	cout << boolalpha << arePaired(11, 13) << endl;
	cout << boolalpha << arePaired(7, 9) << endl;


	int array[10];
	for (int i = 0; i < 10; i++){
		cin >> array[i];
	}

	for (int i = 0; i < 10; i++){
		cout << reverseDigits(array[i]) << " ";
	}
	cout << endl;

	printTable();

	fillMatrix(4);

	system("pause");
	return 0;
}

