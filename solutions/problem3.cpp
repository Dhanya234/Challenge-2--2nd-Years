#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ifstream file("../inputs/states.txt");
    vector<int> numbers;
    int num;
    
    while (file >> num) {
        numbers.push_back(num);
    }
    
    int terminalCount = 0;
    
    for (int number : numbers) {
        int state = 0;
        
        while (state < 3) {
            if (number % 2 == 0) {
                state++;
            } else if (isPrime(number)) {
                state = 3;
                break;
            } else {
                break;
            }
        }
        
        if (state == 3) {
            terminalCount++;
        }
    }
    
    cout << terminalCount << endl;
    return 0;
}