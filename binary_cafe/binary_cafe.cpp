#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) {
        int n; // max coins
        int k; // max desserts
        cin >> n >> k;

        int possible = 0;

        int cost = 0;
        for (int i = k - 1; i > 0; i--) {
            cost += pow(2, i);
            cout << cost << '\n';
            if (cost > n) {
                cost -= pow(2,i);
                possible++; 
            }
        }
        
        possible++; // 0 case
        cout << possible << '\n';
    }
}