//
// Created by matt on 9/16/26.
//

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int s;
    cin >> s;

    int x = 0;

    for (int i = 0; i < s; i++) {
        string o;
        cin >> o;

        if (o[1] == '+') {
            x++;
        } else {
            x--;
        }
    }

    cout << x << "\n";

    return 0;
}