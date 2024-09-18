#include <iostream>

int main() {
	
	// Multidimensianal Array

	int OddAndEven[2][5] = {
		{1, 3, 5, 7, 9},
		{2, 4, 6, 8, 10}
	};

	std::cout << "Odd numbers: ";
	for(auto odd : OddAndEven[0]) {
		std::cout << odd << " ";
	}
	std::cout << std::endl;
	std::cout << "Even numbers: ";
	for(auto even : OddAndEven[1]) {
		std::cout << even << " ";
	}

	return 0;
}