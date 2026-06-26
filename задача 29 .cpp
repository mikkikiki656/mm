#include <iostream>
#include <string>
using namespace std;

// Структура для хранения информации о профессиях
struct Profession {
    string name;
    int category;
};

// Структура для хранения информации о языках программирования
struct ProgrammingLanguage {
    string name;
    int proficiency;  // 1-5 (от начального до экспертного)
};

// Основная структура сотрудника
struct Employee {
    string fio;
    string birthDate;
    
    // Для рабочего
    bool isWorker;
    Profession professions[5];
    
    // Для программиста
    bool isProgrammer;
    string university;
    int graduationYear;
    ProgrammingLanguage languages[5];
};

void inputEmployee(Employee& emp) {
    cout << "Введите ФИО сотрудника: ";
    getline(cin, emp.fio);
    
    cout << "Введите дату рождения (дд.мм.гггг): ";
    getline(cin, emp.birthDate);
    
    cout << "Является ли сотрудник рабочим? (1 - да, 0 - нет): ";
    cin >> emp.isWorker;
    cin.ignore();  // Очищаем буфер
    
    if (emp.isWorker) {
        cout << "Введите профессии (максимум 5):\n";
        for(int i = 0; i < 5; i++) {
            cout << "Профессия " << i+1 << ": ";
            getline(cin, emp.professions[i].name);
            if(emp.professions[i].name.empty()) break;
            cout << "Категория: ";
            cin >> emp.professions[i].category;
            cin.ignore();
        }
    }
    
    cout << "Является ли сотрудник программистом? (1 - да, 0 - нет): ";
    cin >> emp.isProgrammer;
    cin.ignore();
    
    if (emp.isProgrammer) {
        cout << "Введите название вуза: ";
        getline(cin, emp.university);
        
        cout << "Введите год окончания: ";
        cin >> emp.graduationYear;
        cin.ignore();
        
        cout << "Введите языки программирования (максимум 5):\n";
        for(int i = 0; i < 5; i++) {
            cout << "Язык " << i+1 << ": ";
            getline(cin, emp.languages[i].name);
            if(emp.languages[i].name.empty()) break;
            cout << "Уровень владения (1-5): ";
            cin >> emp.languages[i].proficiency;
            cin.ignore();
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    Employee employee;
    
    inputEmployee(employee);
    
    // Здесь можно добавить вывод введенной информации
    
    return 0;
}
