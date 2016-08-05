#include <iostream>

int main() {
    long numm = 600851475143;
    long lastFact;
    if (numm % 2 == 0) {
        lastFact = 2;
        while (numm % 2 == 0) {
            numm = numm / 2;
        }
    } else {
        lastFact = 1;
    }
    long factor = 3;
    while (numm > 1) {
        if (numm % factor == 0) {
            lastFact = factor;
            numm = numm / factor;
            while (numm % factor == 0) {
                numm = numm / factor;
            }
        }
        factor = factor + 2;
    }

    std::cout << lastFact << std::endl;
}