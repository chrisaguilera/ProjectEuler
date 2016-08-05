#include <iostream>
#include <math.h>

int main() {
	// long scd = 1000000000;
	// for (long i = 20; i < 1000000000; i++) {
	// 	bool isDiv = false;
	// 	int j = 20;
	// 	while (i % j == 0 && j > 1) { 
	// 		j--;
	// 	}
	// 	if (j == 1) {
	// 		isDiv = true;
	// 		if (i < scd) {
	// 			scd = i;
	// 		}
	// 	}
	// }

	// std::cout << scd << std::endl;

	int p[9] = {2, 3, 5, 7, 11, 13, 17, 19, 23};
	int a[8];
	int k = 20;
	int n = 1;
	int i = 0;
	bool check = true;
	int limit = sqrt(k);
	while (p[i] <= k) {
		a[i] = 1;
		if (check) {
			if (p[i] <= limit) {
				a[i] = floor(log(k)/log(p[i]));
			} else {
				check = false;
			}
		}
		std::cout << p[i] << " ^ " << a[i] << std::endl;
		n = n * pow(p[i], a[i]);
		i = i + 1;
	}

	std::cout << n << std::endl;
}