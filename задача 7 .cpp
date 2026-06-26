#include <iostream>
#include <vector>
#include <string>

// Функция проверки, является ли число перевертышем
bool isPalindrome(int num) {
    std::string str = std::to_string(num);
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}

// Основная функция поиска перевертышей
std::vector<int> findPalindromes(int N) {
    std::vector<int> result;
    for (int i = 0; i <= N; i++) {
        if (isPalindrome(i))
            result.push_back(i);
    }
    return result;
}

// Функция тестирования
void test() {
    assert(findPalindromes(10) == std::vector<int>({0,1,2,3,4,5,6,7,8,9}));
    assert(findPalindromes(100) == std::vector<int>({0,1,2,3,4,5,6,7,8,9,11,22,33,44,55,66,77,88,99}));
    std::cout << "Все тесты пройдены!" << std::endl;
}

// Главная функция
int main() {
    test(); // Запуск тестов
    
    int N;
    std::cout << "Введите число N: ";
    std::cin >> N;
    
    std::vector<int> palindromes = findPalindromes(N);
    
    std::cout << "Числа-перевертыши до " << N << ":" << std::endl;
    for (int num : palindromes) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
