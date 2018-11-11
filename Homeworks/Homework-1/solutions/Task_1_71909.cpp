#include <iostream>
#include <time.h>

int main() {
	// Seed the random generator
	// using time
	std::srand(time(0));

	// Generate a random number 
	// in the interval [0..100]
	int rand_number = std::rand() % 100 + 0;

	bool has_guessed = false;
	int  number_of_attempts = 1;

	std::cout << "Guess a number between 0 and 100." << std::endl;

	while (!has_guessed) {
		int current_guess;

		// Guess a number
		std::cin >> current_guess;

		// If we have guessed the number
		// break from the loop
		if (current_guess == rand_number) {
			break;
		}
		else if (current_guess < 0 || current_guess > 100) {
			std::cout << "The number must be between 0 and 100" << std::endl;
		}
		else if (current_guess < rand_number) {
			std::cout << "Try with a bigger number." << std::endl;
		}
		else {
			std::cout << "Try with a smaller number." << std::endl;
		}

		// If we are here, it means we have
		// not been able to guess yet, so we
		// increment the number_of_attempts
		++number_of_attempts;
	}

	std::cout
		<< "Congrats! You did it! It took you "
		<< number_of_attempts
		<< " attempts to guess the number." << std::endl;

	system("pause");
	return 0;
}
