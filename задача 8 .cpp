#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Функция для поиска максимума
double findMax(double (*func)(double), double a, double b, double eps = 1e-6) {
    double maxVal = numeric_limits<double>::lowest();
    double step = eps;
    
    for(double x = a; x <= b; x += step) {
        double current = func(x);
        if(current > maxVal) {
            maxVal = current;
        }
    }
    return maxVal;
}

// Пример целевой функции
double exampleFunction(double x) {
    return -x*x + 4*x + 3;
}

// Функция тестирования
void test() {
    double a = 0;
    double b = 4;
    double result = findMax(exampleFunction, a, b);
    
    cout << "Тестовый пример: поиск максимума на интервале [" << a << ", " << b << "]" << endl;
    cout << "Ожидаемый результат: 7" << endl;
    cout << "Полученный результат: " << result << endl;
}

int main() {
    // Задаем интервал
    double a, b;
    cout << "Введите начало интервала: ";
    cin >> a;
    cout << "Введите конец интервала: ";
    cin >> b;
    
    // Находим максимум
    double maxValue = findMax(exampleFunction, a, b);
    
    cout << "Максимальное значение функции на интервале [" << a << ", " << b << "] равно: " << maxValue << endl;
    
    // Запускаем тесты
    cout << "\nЗапуск тестов..." << endl;
    test();
    
    return 0;
}
