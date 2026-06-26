#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>  // Для Windows
//#include <unistd.h>  // Для Linux

// Функция для очистки экрана
void clearScreen() {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

int main() {
    srand(time(0));  // Инициализация генератора случайных чисел
    
    // Координаты центра экрана
    int x = 40;
    int y = 12;
    
    // Устанавливаем курсор в центр
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    
    // Выводим начальную точку
    std::cout << "*";
    
    // Количество шагов
    const int steps = 1000;
    
    for(int i = 0; i < steps; i++) {
        // Случайное направление движения
        int direction = rand() % 4;
        
        // Сдвигаем координаты
        switch(direction) {
            case 0: x += 2; break;  // вправо
            case 1: x -= 2; break;  // влево
            case 2: y +=
