#include <iostream>
#include <cmath>

const double EPSILON = 1e-7;

double f(double x) {
    return x * x - 2; // Пример функции
}

double find_zero(double a, double b) {
    if (f(a) * f(b) > 0) {
        throw std::runtime_error("Функция должна иметь разные знаки на концах отрезка");
    }
    
    while (b - a > EPSILON) {
        double mid = (a + b) / 2;
        if (f(mid) == 0
