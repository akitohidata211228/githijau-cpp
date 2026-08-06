// fibonacci.cpp
// Deret Fibonacci: 15 suku pertama.

#include <iostream>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    const int terms = 15;
    for (int i = 0; i < terms; i++) {
        std::cout << fibonacci(i);
        if (i < terms - 1) std::cout << ", ";
    }
    std::cout << std::endl;
    return 0;
}
