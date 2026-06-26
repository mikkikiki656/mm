#include <iostream>
#include <cmath>

// Пример функции для дифференцирования
double f(double x) {
    return x * x + 2 * x + 1;
}

// Функция вычисления производной
double derivative(double (*func)(double), double x, double h = 1e-5) {
    return (func(x + h) - func(x)) / h;
}

int main() {
    double x;
    std::cout << "Введите точку для вычисления производной: ";
    std::cin >> x;
    
    double result = derivative(f, x);
    std::cout << "Значение производной в точке " << x << " = " << result << std::endl;
    
    return 0;
}
