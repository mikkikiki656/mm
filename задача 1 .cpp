#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const int rows = 100;
    const int cols = 200;
    float** array = new float*[rows];
    
    try {
        for(int i = 0; i < rows; i++) {
            array[i] = new float[cols];
            for(int j = 0; j < cols; j++) {
                array[i][j] = (rand() % 2001 - 1000) / 1000.0;
            }
        }
    } catch(...) {
        for(int i = 0; i < rows; i++) delete[] array[i];
        delete[] array;
        return 1;
    }
    
    // Освобождение памяти
    for(int i = 0; i < rows; i++) delete[] array[i];
    delete[] array;
    return 0;
}
