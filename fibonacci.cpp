#include <iostream>
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int terms;
    std::cout << "Enter the number of terms: ";
    std::cin >> terms;
    for (int i = 0; i < terms; ++i) {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;
    return 0;
}

