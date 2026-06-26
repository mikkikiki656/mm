#include <iostream>
#include <ctime>
#include <string>
using namespace std;

string getCurrentDate() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    
    string months[] = {"январь", "февраль", "март", "апрель", "май", "июнь",
                      "июль", "август", "сентябрь", "октябрь", "ноябрь", "декабрь"};
    
    string date = (ltm->tm_mday < 10 ? "0" : "") + 
                  to_string(ltm->tm_mday) + "/" +
                  months[ltm->tm_mon] + "/" +
                  to_string(1900 + ltm
