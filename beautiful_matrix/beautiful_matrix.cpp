#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int matrix[5][5]; 
    int max = 0;
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            cin >> matrix[row][col];
            if (matrix[row][col] == 1) {
                max += abs(row - 2) + abs(col - 2);
            }
        }
    }
    cout << max;
}