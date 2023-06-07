#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string output{};
    
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] == s2[i]) {
            output += '0';
        }
        else {
            output += '1';
        }
    }

    cout << output;
}