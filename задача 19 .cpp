#include <iostream>
#include <vector>

std::vector<int> factors;

void prime_factors(int n, int divisor = 2) {
    if (n == 1) return;
    if (n % divisor == 0) {
        factors.push_back(divisor);
        prime_factors(n / divisor, divisor);
    } else {
        prime_factors(n, divisor + 1);
    }
}

int main() {
    int number;
    std::cout << "Введите число для разложения: ";
    std::cin >> number;
    
    prime_factors(number);
    
    std::cout << "Простые множители: ";
    for (int factor : factors) {
        std::cout << factor << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
