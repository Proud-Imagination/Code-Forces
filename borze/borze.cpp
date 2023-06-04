#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;
    string output = "";
    bool temp = false;
    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '.') {
            if (temp == true) {
                output += '1';
                temp = false;
            }
            else {
                output += '0'; 
            }
        }
        else if (input[i] == '-') {
            if (temp == false) {
                temp = true;
            }
            else {
                output += '2';
                temp = false;
            }
            
        }
        
    }
    cout << output;
}