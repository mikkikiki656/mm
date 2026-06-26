#include <iostream>
using namespace std;

bool compareDates(int d1, int m1, int y1, int d2, int m2, int y2) {
    if (y1 != y2) return y1 < y2;
    if (m1 != m2) return m1 < m2;
    return d1 < d2;
}

void test() {
    cout << "Тестирование сравнения дат:" << endl;
    cout << "1/1/2020 < 2/1/2020: " << compareDates(1,1,2020,2,1,2020) << endl;
    cout << "1/1/2020 < 1/1/2021: " << compareDates(1,1,2020,1,1,2021) << endl;
}

int main() {
    int d1, m1, y1, d2, m2, y2;
    
    cout << "Введите первую дату (dd mm yyyy): ";
    cin >> d1 >> m1 >> y1;
    
    cout << "Введите вторую дату (dd mm yyyy): ";
    cin >> d2 >> m2 >> y2;
    
    if (compareDates(d1, m1, y1, d2, m2, y2))
        cout << "Первая дата меньше второй" << endl;
    else
        cout << "Первая дата больше или равна второй" << endl;
        
    test();
    return 0;
}
