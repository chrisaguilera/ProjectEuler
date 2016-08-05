#include <iostream>
#include <math.h>

// int sumOfSquares(int num) {
// 	int sum = 0;
// 	for (int i = 1; i <= num; i++) {
// 		sum = sum + pow(i,2);
// 	}
// 	return sum;
// }

// int squareOfSums(int num) {
// 	int sum = 0;
// 	for (int i = 1; i <= num; i++) {
// 		sum = sum + i;
// 	}
// 	return pow(sum, 2);
// }

int main() {
	// std::cout << squareOfSums(100) - sumOfSquares(100) 
	// 	<< std::endl;

	//Does this give the desired output?
	int limit = 100;
	int sum = ((limit) * (limit + 1))/2;
	int sum_sq = ((2 * limit + 1) * (limit + 1) * limit) / 6;
	std::cout << pow(sum, 2) - sum_sq << std::endl;
}