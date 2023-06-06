#include <iostream>
#include <string>

using namespace std;


int main () {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        string s;
        cin >> n >> s;

        char temp = s[0];
        for (int j = 1; j < n; j++) {
            if (s[j] != temp) {
                s[j] = ' ';
            }
            else if (s[j] == temp) {
                s[j] = ' ';
                temp = s[j+1];
                j++;
            }
        }
        int x = 0;
        while(true) {
            for (int k = 0; k < s.length(); k++) {
                if (isspace(s[k])) {
                    s.erase(s.begin() + k);

                }
            }
            if (s.length() == x) {
                break;
            }
            x = s.length();
        }
        cout << s << '\n';
    }
}