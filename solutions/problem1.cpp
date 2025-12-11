#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream gridFile("../inputs/grid.txt");
    ifstream dirFile("../inputs/directions.txt");
    
    vector<string> grid;
    string line;
    while (getline(gridFile, line)) {
        if (!line.empty() && line != "\r") {
            if (line.back() == '\r') line.pop_back();
            grid.push_back(line);
        }
    }
    
    string directions;
    getline(dirFile, directions);
    if (!directions.empty() && directions.back() == '\r') directions.pop_back();
    
    vector<char> dirs;
    for (int i = 0; i < directions.length(); i += 2) {
        dirs.push_back(directions[i]);
    }
    
    for (int i = 0; i < grid.size() && i < dirs.size(); i++) {
        if (dirs[i] == 'R') {
            char last = grid[i].back();
            grid[i] = last + grid[i].substr(0, grid[i].length() - 1);
        } else if (dirs[i] == 'L') {
            char first = grid[i][0];
            grid[i] = grid[i].substr(1) + first;
        }
    }
    
    int centralRow = grid.size() / 2;
    int sum = 0;
    for (char c : grid[centralRow]) {
        sum += (int)c;
    }
    
    cout << sum << endl;
    return 0;
}