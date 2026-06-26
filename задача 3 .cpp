#include <iostream>
using namespace std;

void findMachineParams() {
    float epsilon = 1.0f;
    float zero = 1.0f;
    
    // Поиск машинного эпсилон
    while(1.0f + epsilon/2.0f > 1.0f)
        epsilon /= 2.0f;
        
    // Поиск машинного нуля
    while(1.0f + zero/2.0f != 1.0f)
        zero /= 2.0f;
        
    cout << "Машинный эпсилон: " << epsilon << endl;
    cout << "Машинный ноль: " << zero << endl;
}

int main() {
    findMachineParams();
    return 0;
}
