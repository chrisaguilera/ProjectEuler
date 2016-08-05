#include <iostream>

int sumDivisibleBy(int target, int num) {
	int p = target/num;
	return num * (0.5 * (p * (p + 1)));
}

int main() {
	// int sum = 0;
	// for (int i = 0; i < 1000; i++) {
	// 	if (i % 3 == 0 || i % 5 == 0) {
	// 		sum = sum + i;
	// 	}
	// }
	// std::cout << "Sum: " << sum << std::endl;

	int target = 999;
	std::cout << "Sum: " << sumDivisibleBy(target, 3) + sumDivisibleBy(target, 5) - 
		sumDivisibleBy(target, 15) << std::endl;
}