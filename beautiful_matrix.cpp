//
// Created by matt on 9/16/26.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int r = 1; r <= 5; r++) {
        for (int c = 1; c <= 5; c++) {
            int current_nr;
            cin >> current_nr;

            if (current_nr == 1) {
                const int res = abs(r - 3) + abs(c - 3);
                cout << res << "\n";
                return 0;
            }
        }
    }

    return 0;
}