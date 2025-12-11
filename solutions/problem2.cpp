#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("../inputs/input2.txt");
    string input;
    getline(file, input);
    if (!input.empty() && input.back() == '\r') input.pop_back();
    
    string reversed = "";
    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i];
    }
    
    string filtered = "";
    for (int i = 0; i < reversed.length(); i++) {
        if ((i + 1) % 3 != 0) {
            filtered += reversed[i];
        }
    }
    
    string shifted = "";
    for (char c : filtered) {
        shifted += (char)(c + 2);
    }
    
    int vowelCount = 0;
    for (char c : shifted) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            vowelCount++;
        }
    }
    
    cout << vowelCount << endl;
    return 0;
}