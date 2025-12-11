#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
using namespace std;

int main() {
    int clue1, clue2, clue3;
    
    cout << "Enter Clue 1: ";
    cin >> clue1;
    cout << "Enter Clue 2: ";
    cin >> clue2;
    cout << "Enter Clue 3: ";
    cin >> clue3;
    
    stringstream ss;
    ss << hex << clue1;
    string hexClue1 = ss.str();
    
    string repeatedClue2 = "";
    for (int i = 0; i < clue3; i++) {
        repeatedClue2 += to_string(clue2);
    }
    
    string finalKey = hexClue1 + "-" + repeatedClue2;
    
    cout << "Final Key: " << finalKey << endl;
    
    ofstream outFile("final_key.txt");
    outFile << finalKey;
    outFile.close();
    
    return 0;
}