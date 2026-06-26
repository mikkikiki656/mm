#include <iostream>
#include <vector>
using namespace std;

vector<int> findPrimes(int N) {
    vector<int> primes;
    for(int i = 2; i <= N; i++) {
        bool isPrime = true;
        for(int j = 2; j*j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) primes.push_back(i);
    }
    return primes;
}

int main() {
    int N;
    cout << "Введите N: ";
    cin >> N;
    vector
