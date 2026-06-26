#include <iostream>
using namespace std;

// Функция умножения матриц
void matrixMultiply(int** A, int** B, int** C, int n, int m, int p) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
            for(int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Функция вывода матрицы
void printMatrix(int** matrix, int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    const int n = 2, m = 3, p = 2;
    
    // Выделение памяти
    int** A = new int*[n];
    int** B = new int*[m];
    int** C = new int*[n];
    
    for(int i = 0; i < n; i++) {
        A[i] = new int[m];
        C[i] = new int[p];
    }
    for(int i = 0; i < m; i++) {
        B[i] = new int[p];
    }
    
    // Заполнение матриц
    // ...
    
    matrixMultiply(A, B, C, n, m, p);
    
    // Освобождение памяти
    for(int i = 0; i < n; i++) {
        delete[] A[i];
        delete[] C[i];
    }
    for(int i = 0; i < m; i++) {
        delete[] B[i];
    }
    delete[] A;
    delete[] B;
    delete[] C;
    
    return 0;
}
