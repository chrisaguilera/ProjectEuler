#include <iostream>

bool isPalindrome(int num) {
	int n = num;
 	int rev = 0;
 	while (num > 0)
 	{
    	int dig = num % 10;
      	rev = rev * 10 + dig;
      	num = num / 10;
 	}

 	if (n == rev){
 		return true;
 	} else {
 		return false;
 	}
}

int main() {
	int maxPal = 0;

	//Begin checking from top to bottom
	for (int i = 999; i >= 100; i--) {
		//Don't check multiples
		for (int j = i; j >= 100; j--) {
			int prod = i * j;
			//Don't bother checking whether a product is a 
			//palindrome unless it is larger than the current
			//max
			if (prod > maxPal) {
				if (isPalindrome(prod)) {
					if (prod > maxPal)
						maxPal = prod;
				}
			}
		}
	}

	std::cout << "Largest Palindrome: " << maxPal << std::endl;
}