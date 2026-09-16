//
// Created by matt on 9/15/26.
//

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int solved = 0;

    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;

        cin >> petya >> vasya >> tonya;

        if (petya + vasya + tonya >= 2) {
            solved++;
        }
    }

    cout << solved << "\n";

    return 0;
}