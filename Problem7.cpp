#include <iostream>
#include <math.h>

/*bool isOddPrime(int n) {
	bool isPrime = true;
	//Odd numbers are never divisible by even  numbers,
	//so don't even bother checking even numbers!
	//
	//All odd numbers less than 9 are prime numbers,
	//so don't bother checking
	//Actually, you need to test the number against
	//every odd number less than it's sqrt
	for (int i = 3; pow(i, 2) <= n; i+=2) {
		if (n % i == 0) {
			isPrime = false;
			return isPrime;
		}
	}
	return isPrime;
}

int main() {
	int n = 10001;
	int count = 2;
	int x;
	//Begin checking odd numbers at 3, so count must
	//be equal to 2, bc 3 is the 2nd prime number
	for (int i = 3; count <= n; i+=2) {
		if(isOddPrime(i)) {
			std::cout << i << " count: " << count << std::endl;
			if (count == n) {
				x = i;
				break;
			}
			count++;
		}
	}

	std::cout << "Answer: " << x << std::endl;
}*/

/*bool isPrime(int n) {
	if (n == 1)
		return false;
	if (n < 4) //2 and 3 are prime
		return true;
	if (n % 2 == 0)
		return false;
	if (n < 9) //5 and 7 are prime (4, 6 and 8 already excluded)
		return true;
	if (n % 3 == 0)
		return false;
	int r = floor(sqrt(n));
	int f = 5;
	while (f <= r) {
		if (n % f == 0)
			return false;
		if (n % (f + 2) == 0)
			return false;
		f = f + 6;
	}
	return true;
}

int main() {
	int limit = 10001;
	int count = 1;
	int candidate = 1;
	while (count != limit) {
		candidate+=2;
		if (isPrime(candidate)) {
			count++;
			//std::cout << candidate << " " << count << std::endl;
		}
	}
	std::cout << candidate << std::endl;
}*/

bool isPrime(int n) {
	if (n == 1)
		return false;
	if (n < 4)
		return true;
	if (n % 2 == 0)
		return false;
	if (n < 9)
		return true;
	if (n % 3 == 0)
		return false;

	int r = floor(sqrt(n));
	int f = 5;
	while (f <= r) {
		if (n % f == 0)
			return false;
		if (n % (f + 2) == 0)
			return false;
		f+=6;
	}
	return true;

}

int main() {
	int limit = 10001;
	int count = 1;
	int candidate = 1;
	while (count != limit) {
		candidate+=2;
		if (isPrime(candidate)) {
			count++;
		}
	}
	std::cout << candidate << std::endl;
}
