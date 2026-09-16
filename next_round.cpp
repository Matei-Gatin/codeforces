//
// Created by matt on 9/16/26.
//

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int p, selected_p;

    if (!(cin >> p >> selected_p)) return 0;

    int res = 0;
    int selected_p_grade = 0;

    int i;
    for (i = 0; i < p; i++) {
        int current_grade;
        cin >> current_grade;

        if (current_grade <= 0) {
            break;
        }

        if (i == (selected_p - 1)) {
            selected_p_grade = current_grade;
        }

        if (i < selected_p || current_grade >= selected_p_grade) {
            res++;
        }
    }

    cout << res << "\n";
    return 0;
}