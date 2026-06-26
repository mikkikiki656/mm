#include <fstream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));
    
    // Записываем числа в бинарный файл
    std::ofstream out("data.bin", std::ios::binary);
    for(int i = 0; i < 10000; i++) {
        int num = (rand() % 2 == 0) ? 1 : -1;
        out.write(reinterpret_cast<char*>(&num), sizeof(int));
    }
    out.close();
    
    // Считываем числа и находим сумму
    std::ifstream in("data.bin", std::ios::binary);
    int sum = 0;
    int num;
    while(in.read(reinterpret_cast<char*>(&num), sizeof(int))) {
        sum += num;
    }
    in.close();
    
    std::cout << "Сумма: " << sum << std::endl;
    return 0;
}
