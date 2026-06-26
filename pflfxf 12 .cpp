#include <iostream>
using namespace std;

// Функция подсчета четных чисел
int countEvenNumbers(int* arr, int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0)
            count++;
    }
    return count;
}

// Функция main
int main() {
    int size;
    cout << "Введите размер массива: ";
    cin >> size;
    
    int* array = new int[size];
    
    cout << "Введите элементы массива:\n";
    for(int i = 0; i < size; i++) {
        cin >> array[i];
    }
    
    int result = countEvenNumbers(array, size);
    cout << "Количество четных чисел: " << result << endl;
    
    delete[] array;
    return 0;
}

// Функция тестирования
void test() {
    int testArray[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(testArray) / sizeof(testArray[0]);
    assert(countEvenNumbers(testArray, size) == 3);
}
