#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int iter;
    cin >> iter;

    int total = 0;
    for (int i = 0; i < iter; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        total += x + y + z;
    }

    if (total == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}