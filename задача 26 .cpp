#include <fstream>
#include <string>

bool compareFiles(const std::string& file1, const std::string& file2) {
    std::ifstream f1(file1, std::ios::binary);
    std::ifstream f2(file2, std::ios::binary);
    
    if (!f1.is_open() || !f2.is_open()) {
        return false; // Ошибка открытия файлов
    }
    
    return std::equal(std::istreambuf_iterator<char>(f1),
                     std::istreambuf_iterator<char>(),
                     std::istreambuf_iterator<char>(f2));
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Использование: program file1 file2\n";
        return 1;
    }
    
    if (compareFiles(argv[1], argv[2])) {
        std::cout << "Файлы идентичны\n";
    } else {
        std::cout << "Файлы различаются\n";
    }
    return 0;
}
