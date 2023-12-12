#include <iostream>
using namespace std;
int main() {
    setlocale (LC_CTYPE, "Russian");
    int n;
    std::cout << "Введите натуральное число n: ";
    std::cin >> n;

    std::cout << "Натуральные делители числа " << n << " : ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            std::cout << i << " ";
        }
    }

    return 0;
}
