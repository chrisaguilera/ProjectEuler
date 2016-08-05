#include <iostream>

int main() {
	int evenSum = 0;
	int a = 1;
	int b = 1;
	int c = a + b;
	while (c < 4000000) {
		evenSum = evenSum + c;
		a = b + c;
		b = c + a;
		c = a + b;
	}

	std::cout << "\nEven sum of fib numbers: " << evenSum << std::endl;
}