#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int sumOfDivisors = 1;
    int number;
    cin >> number;
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) {
			/*since we iterate only to the square root of the number each time we come upon a divisor
			 we add it to the sum and we add its complementary number
			 e.x sqrt(20) = 4.47, so when we iterate through 2 we add to the sum 2 and 10 (2*10=20)
			 and when we iterate through 4 we add 4 and 5 (4*5=20), that way we have way less 
			 iterations(4 instead of 20) without missing possible divisors*/
            sumOfDivisors += i + number / i;
	     }
    }
    cout << boolalpha << (number == sumOfDivisors && number != 1);
    return 0;
}