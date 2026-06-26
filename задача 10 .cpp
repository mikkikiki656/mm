#include <iostream>
using namespace std;

// Функция поиска чисел с заданной суммой цифр
void findNumbersWithSum(int sum) {
    for(int i = 100; i <= 999; i++) {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        if(a + b + c == sum) {
            cout << i << " ";
        }
    }
}

int main() {
    int sum;
    cout << "Введите сумму цифр: ";
    cin >> sum;
    findNumbersWithSum(sum);
    return 0;
}
