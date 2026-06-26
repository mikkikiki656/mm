#include <iostream>
using namespace std;

// Функция проверки счастливого билета
bool isLucky(int number) {
    // Получаем цифры билета
    int a = number / 100000;
    int b = (number / 10000) % 10;
    int c = (number / 1000) % 10;
    int d = (number / 100) % 10;
    int e = (number / 10) % 10;
    int f = number % 10;
    
    // Проверяем равенство сумм
    return (a + b + c) == (d + e + f);
}

// Функция поиска всех счастливых билетов
void findAllLucky() {
    cout << "Счастливые билеты:\n";
    int count = 0;
    
    // Перебираем все 6-значные числа
    for(int i = 0; i <= 999999; i++) {
        if(isLucky(i)) {
            cout << i << "\n";
            count++;
        }
    }
    
    cout << "\nВсего найдено счастливых билетов: " << count;
}

// Функция тестирования
void test() {
    // Проверяем известные случаи
    if(isLucky(123321)) cout << "Тест 1 пройден\n";
    if(!isLucky(123456)) cout << "Тест 2 пройден\n";
    if(isLucky(000000)) cout << "Тест 3 пройден\n";
    if(isLucky(999999)) cout << "Тест 4 пройден\n";
}

int main() {
    // Запускаем тесты
    test();
    
    // Находим все счастливые билеты
    findAllLucky();
    
    return 0;
}
