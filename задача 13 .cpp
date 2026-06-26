#include <iostream>
using namespace std;

bool checkZeroInMatrix(int** matrix, int rows, int cols) {
    // Проверка строк
    for(int i = 0; i < rows; i++) {
        bool hasZero = false;
        for(int j = 0; j < cols; j++) {
            if(matrix[i][j] == 0) {
                hasZero = true;
                break;
            }
        }
        if(!hasZero) return false;
    }
    
    // Проверка столбцов
    for(int j = 0; j < cols; j++) {
        bool hasZero = false;
        for(int i = 0; i < rows; i++) {
            if(matrix[i][j] == 0) {
                hasZero = true;
                break;
            }
        }
        if(!hasZero) return false;
    }
    return true;
}

int main() {
    // Реализация main
}

void test() {
    // Тестовые случаи
}
