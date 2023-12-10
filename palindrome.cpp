#include <iostream>
#include <string>
bool isPalindrome(const std::string& str) {
    int start = 0, end = str.length() - 1;
    while (start < end) {
        if (str[start] != str[end]) return false;
        ++start;
        --end;
    }
    return true;
}
int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;
    std::cout << (isPalindrome(input) ? "Palindrome" : "Not Palindrome") << std::endl;
    return 0;
}

