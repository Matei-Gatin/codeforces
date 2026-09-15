//
// Created by matt on 9/15/26.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int i;
    for (i = 0; i < n; i++) {
        string s;
        cin >> s;

        const size_t s_len = s.length();

        if (s_len <= 10) {
            cout << s << "\n";
        } else {
            cout << s[0] << (s_len - 2) << s[s_len - 1] << "\n";
        }
    }

    return 0;
}