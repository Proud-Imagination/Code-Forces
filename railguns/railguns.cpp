#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; //width
        int m; //height
        cin >> n >> m;
        int r; //shots
        cin >> r;

        int i = 0; // x
        int j = 0; // y
        int universal_time = 0;
        int t; //time
        int d; //dir
        int coord; // size of shot
        for (int i = 0; i < r; i++) {
            cin >> t >> d >> coord;

            if (universal_time == t) {
                if (d == 1) { //horizontal
                    
                }
                else { // vertical

                }
            }

            universal_time++;
        }

    }
}