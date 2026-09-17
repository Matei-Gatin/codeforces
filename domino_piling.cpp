//
// Created by matt on 9/16/26.
//

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;

    const int res = (m * n) / 2;

    cout << res << "\n";

    return 0;
}