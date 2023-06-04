#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int iter;
    cin >> iter;

    int xsum = 0, ysum = 0, zsum = 0;
    for (int i = 0; i < iter; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        xsum += x;
        ysum += y;
        zsum += z;
    }

    if (xsum == 0 && ysum == 0 && zsum ==0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}