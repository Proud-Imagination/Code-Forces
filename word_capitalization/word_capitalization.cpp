#include <iostream>
#include <cstring>

using namespace std;

int main () {
    char s[1000];
    memset(s, ' ', 1000);

    cin >> s;

    if (islower(s[0])) {
        s[0] = toupper(s[0]);
    }

    cout << s;
}