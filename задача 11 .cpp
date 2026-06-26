#include <iostream>
using namespace std;

bool hasUniqueDigits(int n) {
    bool digits[10] = {false};
    while(n > 0) {
        int digit = n % 10;
        if(digits[digit]) return false;
        digits[digit] = true;
        n /= 10;
    }
    return true;
}

void findUniqueNumbers(int N) {
    for(int i = 0; i <= N; i++) {
        if(hasUniqueDigits(i)) {
            cout << i << " ";
        }
    }
}

int main() {
    int N;
    cout << "Введите N: ";
    cin >> N;
    findUniqueNumbers(N);
    return 0;
}
