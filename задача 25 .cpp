#include <fstream>
#include <string>

// Функция подсчета строк
int countLines(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return -1; // Ошибка открытия файла
    }
    
    int count = 0;
    std::string line;
    while (std::getline(file, line)) {
        count++;
    }
    file.close();
    return count;
}

// Функция main для тестирования
int main() {
    std::string filename = "test.txt";
    int lines = countLines(filename);
    if (lines != -1) {
        std::cout << "Количество строк: " << lines << std::endl;
    } else {
        std::cout << "Ошибка при чтении файла" << std::endl;
    }
    return 0;
}

// Функция тестирования
void test() {
    // Создаем тестовый файл
    std::ofstream testFile("test.txt");
    testFile << "Строка 1\nСтрока 2\nСтрока 3";
    testFile.close();
    
    // Проверяем результат
    assert(countLines("test.txt") == 3);
    
    // Удаляем тестовый файл
    std::remove("test.txt");
}
