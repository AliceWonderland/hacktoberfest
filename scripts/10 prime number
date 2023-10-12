#include <iostream>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    int number = 2;  // Start with the first prime number

    while (count < 10) {
        if (isPrime(number)) {
            std::cout << number << " ";
            count++;
        }
        number++;
    }

    std::cout << std::endl;
    return 0;
}
