#include <iostream>
#include <cmath>
using namespace std;

double vectorLength(double* vec, int n) {
    double sum = 0;
    for(int i = 0; i < n; i++)
        sum += vec[i] * vec[i];
    return sqrt(sum);
}

int main() {
    // Пример использования
    double vec[] = {1, 2, 3};
    cout << "Длина вектора: " << vectorLength(vec, 3) << endl;
    return 0;
}
