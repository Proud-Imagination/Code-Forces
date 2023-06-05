#include <iostream>
#include <string>

using namespace std;

int main () {
    string number;
    cin >> number;
    int four = 0;
    int seven = 0;

    for (int i = 0; i < number.length(); i++) {
        if (number[i] == '4') {
            four++;
        }
        else if (number[i] == '7') {
            seven++;
        }
    }

    if ((four + seven) == 4 or (four + seven) == 7) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}   