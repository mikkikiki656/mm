#include <iostream>
using namespace std;

// Рекурсивная функция для вычисления элемента последовательности
int F(int n) {
    if (n == 0) return 1;      // Базовый случай F0 = 1
    if (n == 1) return 2;      // Базовый случай F1 = 2
    return 2 * F(n-1) - F(n-2); // Рекуррентная формула
}

// Функция тестирования
void test() {
    cout << "Тестирование последовательности:" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "F(" << i << ") = " << F(i) << endl;
    }
}

int main() {
    
