// palindrome.cpp
// Cek palindrom menggunakan std::string.

#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>

bool isPalindrome(const std::string &text) {
    std::string cleaned;
    for (char c : text) {
        if (std::isalpha(static_cast<unsigned char>(c))) {
            cleaned += static_cast<char>(std::tolower(c));
        }
    }
    std::string reversed(cleaned.rbegin(), cleaned.rend());
    return cleaned == reversed;
}

int main() {
    for (const std::string &s : {"Racecar", "Hello", "Kasur ini rusak"}) {
        std::cout << '"' << s << "\" -> "
                  << (isPalindrome(s) ? "palindrom" : "bukan") << "\n";
    }
    return 0;
}
