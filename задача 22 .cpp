#include <iostream>
#include <ctime>
using namespace std;

double getTimeInterval() {
    clock_t start, end;
    char input;
    
    cout << "Нажмите Enter для начала отсчета..." << endl;
    cin.get(input);
    start = clock();
    
    cout << "Нажмите Enter снова..." << endl;
    cin.get(input);
    end = clock();
    
    return (double)(end - start) / CLOCKS_PER_SEC;
}

int main() {
    double interval = getTimeInterval();
    cout << "Временной интервал: " << interval << " секунд" << endl;
    return 0;
}
