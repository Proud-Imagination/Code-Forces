#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int lower = 0;
    int upper = 0;
    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) {
            lower++;
        }
        else {
            upper++;
        }
    }

    if (upper > lower) {
        for (int i = 0; i < 100; i++) {
            s[i] = toupper(s[i]);
        }
    }
    else {
        for (int i = 0; i < 100; i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s;
}