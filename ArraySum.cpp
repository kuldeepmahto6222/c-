#include <iostream>

int main() {
    const int size = 5;
    int arr[size];

    std::cout << "Enter " << size << " integers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

