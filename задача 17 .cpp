#include <iostream>
#include <string>

// Функция поиска последнего вхождения символа
int last_occurrence(const std::string& str, char symbol) {
    int position = -1;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == symbol) {
            position = i;
        }
    }
    return position;
}

// Тестовая функция
void test_last_occurrence() {
    std::string test1 = "hello world";
    std::string test2 = "abracadabra";
    std::string test3 = "no matches here";
    
    assert(last_occurrence(test1, 'o') == 7);
    assert(last_occurrence(test2, 'a') == 10);
    assert(last_occurrence(test3, 'z') == -1);
    std::cout << "Все тесты пройдены!" << std::endl;
}

int main() {
    std::string input;
    char symbol;
    
    std::cout << "Введите строку: ";
    std::getline(std::cin, input);
    std::cout << "Введите символ для поиска: ";
    std::cin >> symbol;
    
    int result = last_occurrence(input, symbol);
    
    if (result != -1) {
        std::cout << "Последний символ '" << symbol << "' найден на позиции " << result << std::endl;
    } else {
        std::cout << "Символ '" << symbol << "' не найден" << std::endl;
    }
    
    test_last_occurrence();
    return 0;
}
