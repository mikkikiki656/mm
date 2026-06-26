#include <string>
using namespace std;

string trimWhitespaces(const string& str) {
    if(str.empty()) return str;
    
    // Находим первый непустой символ
    size_t start = str.find_first_not_of(" \t\n\r\v\f");
    if(start == string::npos) return "";
    
    // Находим последний непустой символ
    size_t end = str.find_last_not_of(" \t\n\r\v\f");
    
    return str.substr(start, end - start + 1);
}

int main() {
    // Реализация main
}

void test() {
    // Тестовые случаи
}
