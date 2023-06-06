#include <bits/stdc++.h>

using namespace std;

int primes[14] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

bool check_prime(int i) {
    for (int j = 0; j < 14; j++) {
        if (i == primes[j]) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    int m;
    cin >> n >> m;

    for (int i = n + 1; i <= m; i++) {
        if (check_prime(i) && i == m) {
            cout << "YES";
            return 0;
        }
        else if (check_prime(i) && i != m) {
            cout << "NO";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}