// calculator.cpp
// Kalkulator dua angka via input.

#include <iostream>

int main() {
    double a, b;
    char op;

    std::cout << "Angka pertama: ";
    std::cin >> a;
    std::cout << "Angka kedua: ";
    std::cin >> b;
    std::cout << "Operator (+, -, *, /): ";
    std::cin >> op;

    switch (op) {
        case '+': std::cout << "Hasil: " << a + b << "\n"; break;
        case '-': std::cout << "Hasil: " << a - b << "\n"; break;
        case '*': std::cout << "Hasil: " << a * b << "\n"; break;
        case '/':
            if (b == 0) std::cout << "Error: pembagian nol\n";
            else std::cout << "Hasil: " << a / b << "\n";
            break;
        default: std::cout << "Operasi tidak dikenal\n";
    }
    return 0;
}
